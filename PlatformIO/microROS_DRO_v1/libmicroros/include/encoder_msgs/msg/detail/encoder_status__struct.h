// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from encoder_msgs:msg/EncoderStatus.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_H_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderStatus in the package encoder_msgs.
typedef struct encoder_msgs__msg__EncoderStatus
{
  int32_t pos_x;
  int32_t pos_z;
  bool zeroed_x;
  bool zeroed_z;
  bool signal_error_x;
  bool signal_error_z;
  bool quad_error_x;
  bool quad_error_z;
} encoder_msgs__msg__EncoderStatus;

// Struct for a sequence of encoder_msgs__msg__EncoderStatus.
typedef struct encoder_msgs__msg__EncoderStatus__Sequence
{
  encoder_msgs__msg__EncoderStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} encoder_msgs__msg__EncoderStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_H_
