// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__FUNCTIONS_H_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "encoder_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "encoder_msgs/msg/detail/encoder_timing__struct.h"

/// Initialize msg/EncoderTiming message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * encoder_msgs__msg__EncoderTiming
 * )) before or use
 * encoder_msgs__msg__EncoderTiming__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__init(encoder_msgs__msg__EncoderTiming * msg);

/// Finalize msg/EncoderTiming message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
void
encoder_msgs__msg__EncoderTiming__fini(encoder_msgs__msg__EncoderTiming * msg);

/// Create msg/EncoderTiming message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * encoder_msgs__msg__EncoderTiming__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
encoder_msgs__msg__EncoderTiming *
encoder_msgs__msg__EncoderTiming__create();

/// Destroy msg/EncoderTiming message.
/**
 * It calls
 * encoder_msgs__msg__EncoderTiming__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
void
encoder_msgs__msg__EncoderTiming__destroy(encoder_msgs__msg__EncoderTiming * msg);

/// Check for msg/EncoderTiming message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__are_equal(const encoder_msgs__msg__EncoderTiming * lhs, const encoder_msgs__msg__EncoderTiming * rhs);

/// Copy a msg/EncoderTiming message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__copy(
  const encoder_msgs__msg__EncoderTiming * input,
  encoder_msgs__msg__EncoderTiming * output);

/// Initialize array of msg/EncoderTiming messages.
/**
 * It allocates the memory for the number of elements and calls
 * encoder_msgs__msg__EncoderTiming__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__Sequence__init(encoder_msgs__msg__EncoderTiming__Sequence * array, size_t size);

/// Finalize array of msg/EncoderTiming messages.
/**
 * It calls
 * encoder_msgs__msg__EncoderTiming__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
void
encoder_msgs__msg__EncoderTiming__Sequence__fini(encoder_msgs__msg__EncoderTiming__Sequence * array);

/// Create array of msg/EncoderTiming messages.
/**
 * It allocates the memory for the array and calls
 * encoder_msgs__msg__EncoderTiming__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
encoder_msgs__msg__EncoderTiming__Sequence *
encoder_msgs__msg__EncoderTiming__Sequence__create(size_t size);

/// Destroy array of msg/EncoderTiming messages.
/**
 * It calls
 * encoder_msgs__msg__EncoderTiming__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
void
encoder_msgs__msg__EncoderTiming__Sequence__destroy(encoder_msgs__msg__EncoderTiming__Sequence * array);

/// Check for msg/EncoderTiming message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__Sequence__are_equal(const encoder_msgs__msg__EncoderTiming__Sequence * lhs, const encoder_msgs__msg__EncoderTiming__Sequence * rhs);

/// Copy an array of msg/EncoderTiming messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_encoder_msgs
bool
encoder_msgs__msg__EncoderTiming__Sequence__copy(
  const encoder_msgs__msg__EncoderTiming__Sequence * input,
  encoder_msgs__msg__EncoderTiming__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__FUNCTIONS_H_
