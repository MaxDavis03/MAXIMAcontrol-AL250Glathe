// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "encoder_msgs/msg/detail/encoder_timing__rosidl_typesupport_introspection_c.h"
#include "encoder_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "encoder_msgs/msg/detail/encoder_timing__functions.h"
#include "encoder_msgs/msg/detail/encoder_timing__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  encoder_msgs__msg__EncoderTiming__init(message_memory);
}

void encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_fini_function(void * message_memory)
{
  encoder_msgs__msg__EncoderTiming__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_member_array[7] = {
  {
    "latest_duration_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, latest_duration_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avg_duration_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, avg_duration_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_duration_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, max_duration_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_duration_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, latest_duration_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avg_duration_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, avg_duration_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_duration_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, max_duration_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_isr_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(encoder_msgs__msg__EncoderTiming, min_isr_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_members = {
  "encoder_msgs__msg",  // message namespace
  "EncoderTiming",  // message name
  7,  // number of fields
  sizeof(encoder_msgs__msg__EncoderTiming),
  encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_member_array,  // message members
  encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_init_function,  // function to initialize message memory (memory has to be allocated)
  encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_type_support_handle = {
  0,
  &encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_encoder_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, encoder_msgs, msg, EncoderTiming)() {
  if (!encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_type_support_handle.typesupport_identifier) {
    encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &encoder_msgs__msg__EncoderTiming__rosidl_typesupport_introspection_c__EncoderTiming_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
