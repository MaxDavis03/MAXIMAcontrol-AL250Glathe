//ros_config.h

// wifi connection settings
#define SSID "MAXIMA"                // The SSID of the network the microRos device will communicate on
#define PASS "password123"           // The password of the network the microRos device will communicate on
#define HOST_IP "192.168.0.166"      // The IP of the host device subscribing to the microRos messages
#define CONNECTION_PORT 8888         // The connection port of the host device

// publishing settings
#define PUBLISH_FREQ 20             // The message update frequency in Hz used for publishing topics by the microRos device

// error handling
#define ROS_PUBLISH_ERROR_LED 13    // The GPIO pin for the publishing error LED