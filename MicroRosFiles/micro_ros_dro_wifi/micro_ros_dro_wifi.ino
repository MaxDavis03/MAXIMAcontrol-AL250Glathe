#include <micro_ros_arduino.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32_multi_array.h>

#if !defined(ESP32)
#error This example is only available for ESP32
#endif

#define LED_PIN 13

// --- Encoder X Axis ---
#define ENC_X_A 34
#define ENC_X_B 35

// --- Encoder Z Axis ---
#define ENC_Z_A 26
#define ENC_Z_B 27

volatile int32_t pos_x = 0;
volatile int32_t pos_z = 0;

void IRAM_ATTR handle_enc_x() {
  bool a = digitalRead(ENC_X_A);
  bool b = digitalRead(ENC_X_B);
  pos_x += (a == b) ? 1 : -1;
}

void IRAM_ATTR handle_enc_z() {
  bool a = digitalRead(ENC_Z_A);
  bool b = digitalRead(ENC_Z_B);
  pos_z += (a == b) ? 1 : -1;
}

// --- micro-ROS setup ---
rcl_publisher_t publisher;
std_msgs__msg__Int32MultiArray msg;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();} }
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){} }

void error_loop() {
  while (1) {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  delay(2000);

  // Configure encoder pins
  pinMode(ENC_X_A, INPUT_PULLUP);
  pinMode(ENC_X_B, INPUT_PULLUP);
  pinMode(ENC_Z_A, INPUT_PULLUP);
  pinMode(ENC_Z_B, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(ENC_X_A), handle_enc_x, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_Z_A), handle_enc_z, CHANGE);

  // Set up WiFi transport
  set_microros_wifi_transports("ZaraSmells_2GEXT", "Kiafreya1", "192.168.0.166", 8888);

  allocator = rcl_get_default_allocator();

  // Init ROS 2 node and publisher
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
  RCCHECK(rclc_node_init_default(&node, "dro_node", "", &support));
  RCCHECK(rclc_publisher_init_best_effort(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32MultiArray),
    "dro_positions"
  ));

  // Allocate and initialize message data
  msg.data.capacity = 2;
  msg.data.size = 2;
  msg.data.data = (int32_t *)malloc(sizeof(int32_t) * 2);
  msg.data.data[0] = 0;
  msg.data.data[1] = 0;
}

void loop() {
  // Copy volatile values safely
  noInterrupts();
  msg.data.data[0] = pos_x;
  msg.data.data[1] = pos_z;
  interrupts();

  RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
  delay(50); // ~20 Hz update rate
}
