// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice
#include "encoder_msgs/msg/detail/encoder_timing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
encoder_msgs__msg__EncoderTiming__init(encoder_msgs__msg__EncoderTiming * msg)
{
  if (!msg) {
    return false;
  }
  // latest_duration_x
  // avg_duration_x
  // max_duration_x
  // latest_duration_z
  // avg_duration_z
  // max_duration_z
  // min_isr_interval
  return true;
}

void
encoder_msgs__msg__EncoderTiming__fini(encoder_msgs__msg__EncoderTiming * msg)
{
  if (!msg) {
    return;
  }
  // latest_duration_x
  // avg_duration_x
  // max_duration_x
  // latest_duration_z
  // avg_duration_z
  // max_duration_z
  // min_isr_interval
}

bool
encoder_msgs__msg__EncoderTiming__are_equal(const encoder_msgs__msg__EncoderTiming * lhs, const encoder_msgs__msg__EncoderTiming * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latest_duration_x
  if (lhs->latest_duration_x != rhs->latest_duration_x) {
    return false;
  }
  // avg_duration_x
  if (lhs->avg_duration_x != rhs->avg_duration_x) {
    return false;
  }
  // max_duration_x
  if (lhs->max_duration_x != rhs->max_duration_x) {
    return false;
  }
  // latest_duration_z
  if (lhs->latest_duration_z != rhs->latest_duration_z) {
    return false;
  }
  // avg_duration_z
  if (lhs->avg_duration_z != rhs->avg_duration_z) {
    return false;
  }
  // max_duration_z
  if (lhs->max_duration_z != rhs->max_duration_z) {
    return false;
  }
  // min_isr_interval
  if (lhs->min_isr_interval != rhs->min_isr_interval) {
    return false;
  }
  return true;
}

bool
encoder_msgs__msg__EncoderTiming__copy(
  const encoder_msgs__msg__EncoderTiming * input,
  encoder_msgs__msg__EncoderTiming * output)
{
  if (!input || !output) {
    return false;
  }
  // latest_duration_x
  output->latest_duration_x = input->latest_duration_x;
  // avg_duration_x
  output->avg_duration_x = input->avg_duration_x;
  // max_duration_x
  output->max_duration_x = input->max_duration_x;
  // latest_duration_z
  output->latest_duration_z = input->latest_duration_z;
  // avg_duration_z
  output->avg_duration_z = input->avg_duration_z;
  // max_duration_z
  output->max_duration_z = input->max_duration_z;
  // min_isr_interval
  output->min_isr_interval = input->min_isr_interval;
  return true;
}

encoder_msgs__msg__EncoderTiming *
encoder_msgs__msg__EncoderTiming__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderTiming * msg = (encoder_msgs__msg__EncoderTiming *)allocator.allocate(sizeof(encoder_msgs__msg__EncoderTiming), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(encoder_msgs__msg__EncoderTiming));
  bool success = encoder_msgs__msg__EncoderTiming__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
encoder_msgs__msg__EncoderTiming__destroy(encoder_msgs__msg__EncoderTiming * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    encoder_msgs__msg__EncoderTiming__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
encoder_msgs__msg__EncoderTiming__Sequence__init(encoder_msgs__msg__EncoderTiming__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderTiming * data = NULL;

  if (size) {
    data = (encoder_msgs__msg__EncoderTiming *)allocator.zero_allocate(size, sizeof(encoder_msgs__msg__EncoderTiming), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = encoder_msgs__msg__EncoderTiming__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        encoder_msgs__msg__EncoderTiming__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
encoder_msgs__msg__EncoderTiming__Sequence__fini(encoder_msgs__msg__EncoderTiming__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      encoder_msgs__msg__EncoderTiming__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

encoder_msgs__msg__EncoderTiming__Sequence *
encoder_msgs__msg__EncoderTiming__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderTiming__Sequence * array = (encoder_msgs__msg__EncoderTiming__Sequence *)allocator.allocate(sizeof(encoder_msgs__msg__EncoderTiming__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = encoder_msgs__msg__EncoderTiming__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
encoder_msgs__msg__EncoderTiming__Sequence__destroy(encoder_msgs__msg__EncoderTiming__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    encoder_msgs__msg__EncoderTiming__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
encoder_msgs__msg__EncoderTiming__Sequence__are_equal(const encoder_msgs__msg__EncoderTiming__Sequence * lhs, const encoder_msgs__msg__EncoderTiming__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!encoder_msgs__msg__EncoderTiming__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
encoder_msgs__msg__EncoderTiming__Sequence__copy(
  const encoder_msgs__msg__EncoderTiming__Sequence * input,
  encoder_msgs__msg__EncoderTiming__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(encoder_msgs__msg__EncoderTiming);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    encoder_msgs__msg__EncoderTiming * data =
      (encoder_msgs__msg__EncoderTiming *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!encoder_msgs__msg__EncoderTiming__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          encoder_msgs__msg__EncoderTiming__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!encoder_msgs__msg__EncoderTiming__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
