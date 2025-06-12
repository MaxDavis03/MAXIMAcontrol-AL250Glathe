//main.cpp
//TODO:
//invert axis macros
//receive commands from ros2 host to clear error flags and reset timing stats
//maybe add ability for host device to request metadata on devices? ie. scale measurement accuracy and uncertainty

#include <micro_ros_arduino.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <encoder_msgs/msg/encoder_status.h>
#include <encoder_msgs/msg/encoder_timing.h>
#include <encoder_config.h>
#include <ros_config.h>

#if !defined(ESP32)
#error This example is only available for ESP32
#endif

volatile int32_t pos_x = 0;
volatile int32_t pos_z = 0;

bool x_zeroed_since_boot = false;
bool z_zeroed_since_boot = false;

volatile unsigned long last_isr_time = 0;
volatile unsigned long min_isr_interval = 0xFFFFFFFF;

volatile uint32_t isr_durations_x[ISR_DURATION_MAVG_LENGTH] = {0};
volatile uint8_t isr_durations_index_x = 0;
volatile uint32_t isr_duration_max_x = 0;

volatile uint32_t isr_durations_z[ISR_DURATION_MAVG_LENGTH] = {0};
volatile uint8_t isr_durations_index_z = 0;
volatile uint32_t isr_duration_max_z = 0;

volatile bool quad_sequence_error_x = false;
volatile bool quad_sequence_error_z = false;
volatile bool signal_integrity_error_x = false;
volatile bool signal_integrity_error_z = false;

volatile uint8_t last_state_x = 0;
volatile uint8_t last_state_z = 0;

rcl_publisher_t status_publisher;
rcl_publisher_t timing_publisher;
encoder_msgs__msg__EncoderStatus status_msg;
encoder_msgs__msg__EncoderTiming timing_msg;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if ((temp_rc != RCL_RET_OK)) { error_loop(); } }
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if ((temp_rc != RCL_RET_OK)) {} }

void track_isr_interval();


void IRAM_ATTR handle_enc_x() {
  uint32_t start = micros();

  track_isr_interval();

  bool A = digitalRead(ENC_X_A);
  bool B = digitalRead(ENC_X_B);
  uint8_t state = (A << 1) | B;
  uint8_t diff = (state - last_state_x) & AB_STATE_MASK;

  if (diff == 1 || diff == 3) {
    pos_x += (diff == 1) ? 1 : -1;
  } else if (diff == 2) {
    quad_sequence_error_x = true;
  }
  last_state_x = state;

#if X_QUADRATURE_MODE == QUAD_MODE_aAbB
  bool a = digitalRead(ENC_X_a);
  bool b = digitalRead(ENC_X_b);
  if (a == A || b == B) {
    signal_integrity_error_x = true;
  }
#endif

  uint32_t duration = micros() - start;
  if (duration > isr_duration_max_x) isr_duration_max_x = duration;
  isr_durations_x[isr_durations_index_x] = duration;
  isr_durations_index_x = (isr_durations_index_x + 1) % ISR_DURATION_MAVG_LENGTH;
}

void IRAM_ATTR handle_enc_z() {
  uint32_t start = micros();

  track_isr_interval();

  bool A = digitalRead(ENC_Z_A);
  bool B = digitalRead(ENC_Z_B);
  uint8_t state = (A << 1) | B;
  uint8_t diff = (state - last_state_z) & AB_STATE_MASK;

  if (diff == 1 || diff == 3) {
    pos_z += (diff == 1) ? 1 : -1;
  } else if (diff == 2) {
    quad_sequence_error_z = true;
  }
  last_state_z = state;

#if Z_QUADRATURE_MODE == QUAD_MODE_aAbB
  bool a = digitalRead(ENC_Z_a);
  bool b = digitalRead(ENC_Z_b);
  if (a == A || b == B) {
    signal_integrity_error_z = true;
  }
#endif

  uint32_t duration = micros() - start;
  if (duration > isr_duration_max_z) isr_duration_max_z = duration;
  isr_durations_z[isr_durations_index_z] = duration;
  isr_durations_index_z = (isr_durations_index_z + 1) % ISR_DURATION_MAVG_LENGTH;
}

void IRAM_ATTR handle_zero_x() {
  pos_x = 0;
  x_zeroed_since_boot = true;
}

void IRAM_ATTR handle_zero_z() {
  pos_z = 0;
  z_zeroed_since_boot = true;
}

void track_isr_interval() {
  unsigned long now = micros();
  unsigned long delta = now - last_isr_time;
  last_isr_time = now;
  if (delta < min_isr_interval) min_isr_interval = delta;
}

void error_loop() {
  while (1) {
    digitalWrite(ROS_PUBLISH_ERROR_LED, !digitalRead(ROS_PUBLISH_ERROR_LED));
    delay(100);
  }
}

void setup() {
  pinMode(ROS_PUBLISH_ERROR_LED, OUTPUT);
  digitalWrite(ROS_PUBLISH_ERROR_LED, HIGH);
  delay(2000);

  pinMode(ENC_X_A, INPUT_PULLUP);
  pinMode(ENC_X_B, INPUT_PULLUP);
  pinMode(ENC_Z_A, INPUT_PULLUP);
  pinMode(ENC_Z_B, INPUT_PULLUP);

#if X_QUADRATURE_MODE == QUAD_MODE_aAbB
  pinMode(ENC_X_Ab, INPUT_PULLUP);
  pinMode(ENC_X_Bb, INPUT_PULLUP);
#endif
#if Z_QUADRATURE_MODE == QUAD_MODE_aAbB
  pinMode(ENC_Z_Ab, INPUT_PULLUP);
  pinMode(ENC_Z_Bb, INPUT_PULLUP);
#endif

  attachInterrupt(digitalPinToInterrupt(ENC_X_A), handle_enc_x, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_Z_A), handle_enc_z, CHANGE);

  pinMode(ZERO_X_PIN, INPUT_PULLUP);
  pinMode(ZERO_Z_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(ZERO_X_PIN), handle_zero_x, FALLING);
  attachInterrupt(digitalPinToInterrupt(ZERO_Z_PIN), handle_zero_z, FALLING);

  set_microros_wifi_transports((char*)SSID, (char*)PASS, (char*)HOST_IP, CONNECTION_PORT);

  allocator = rcl_get_default_allocator();
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
  RCCHECK(rclc_node_init_default(&node, "dro_node", "", &support));

  RCCHECK(rclc_publisher_init_default(
    &status_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(encoder_msgs, msg, EncoderStatus),
    "dro_status"
  ));

  RCCHECK(rclc_publisher_init_default(
    &timing_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(encoder_msgs, msg, EncoderTiming),
    "dro_timing"
  ));
}

void loop() {
  noInterrupts();
  status_msg.pos_x = pos_x * ENC_X_RES;
  status_msg.pos_z = pos_z * ENC_Z_RES;
  status_msg.zeroed_x = x_zeroed_since_boot;
  status_msg.zeroed_z = z_zeroed_since_boot;
  status_msg.signal_error_x = signal_integrity_error_x;
  status_msg.signal_error_z = signal_integrity_error_z;
  status_msg.quad_error_x = quad_sequence_error_x;
  status_msg.quad_error_z = quad_sequence_error_z;
  interrupts();

  uint32_t sum_x = 0, sum_z = 0;
  for (int i = 0; i < ISR_DURATION_MAVG_LENGTH; i++) {
    sum_x += isr_durations_x[i];
    sum_z += isr_durations_z[i];
  }

  noInterrupts();
  uint8_t idx_x = (isr_durations_index_x == 0) ? ISR_DURATION_MAVG_LENGTH - 1 : isr_durations_index_x - 1;
  uint8_t idx_z = (isr_durations_index_z == 0) ? ISR_DURATION_MAVG_LENGTH - 1 : isr_durations_index_z - 1;

  timing_msg.latest_duration_x = isr_durations_x[idx_x];
  timing_msg.avg_duration_x = sum_x / ISR_DURATION_MAVG_LENGTH;
  timing_msg.max_duration_x = isr_duration_max_x;

  timing_msg.latest_duration_z = isr_durations_z[idx_z];
  timing_msg.avg_duration_z = sum_z / ISR_DURATION_MAVG_LENGTH;
  timing_msg.max_duration_z = isr_duration_max_z;

  timing_msg.min_isr_interval = min_isr_interval;
  interrupts();

  RCSOFTCHECK(rcl_publish(&status_publisher, &status_msg, NULL));
  RCSOFTCHECK(rcl_publish(&timing_publisher, &timing_msg, NULL));

  delay(1000 / PUBLISH_FREQ);
}
