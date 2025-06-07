#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>
#include "encoder.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;

extern "C" void appMain(void *arg)
{
    encoder_init();

    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;
    rcl_node_t node;
    rclc_executor_t executor;

    rclc_support_init(&support, 0, NULL, &allocator);
    rclc_node_init_default(&node, "esp32_dro", "", &support);

    rclc_publisher_init_default(
        &publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "dro_position");

    rclc_executor_init(&executor, &support.context, 1, &allocator);

    while (true)
    {
        msg.data = get_encoder_position();
        rcl_publish(&publisher, &msg, NULL);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
