// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_H_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderTiming in the package encoder_msgs.
typedef struct encoder_msgs__msg__EncoderTiming
{
  uint32_t latest_duration_x;
  uint32_t avg_duration_x;
  uint32_t max_duration_x;
  uint32_t latest_duration_z;
  uint32_t avg_duration_z;
  uint32_t max_duration_z;
  uint32_t min_isr_interval;
} encoder_msgs__msg__EncoderTiming;

// Struct for a sequence of encoder_msgs__msg__EncoderTiming.
typedef struct encoder_msgs__msg__EncoderTiming__Sequence
{
  encoder_msgs__msg__EncoderTiming * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} encoder_msgs__msg__EncoderTiming__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_H_
