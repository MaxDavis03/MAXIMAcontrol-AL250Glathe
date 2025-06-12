// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from encoder_msgs:msg/EncoderStatus.idl
// generated code does not contain a copyright notice
#include "encoder_msgs/msg/detail/encoder_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
encoder_msgs__msg__EncoderStatus__init(encoder_msgs__msg__EncoderStatus * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_z
  // zeroed_x
  // zeroed_z
  // signal_error_x
  // signal_error_z
  // quad_error_x
  // quad_error_z
  return true;
}

void
encoder_msgs__msg__EncoderStatus__fini(encoder_msgs__msg__EncoderStatus * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_z
  // zeroed_x
  // zeroed_z
  // signal_error_x
  // signal_error_z
  // quad_error_x
  // quad_error_z
}

bool
encoder_msgs__msg__EncoderStatus__are_equal(const encoder_msgs__msg__EncoderStatus * lhs, const encoder_msgs__msg__EncoderStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_z
  if (lhs->pos_z != rhs->pos_z) {
    return false;
  }
  // zeroed_x
  if (lhs->zeroed_x != rhs->zeroed_x) {
    return false;
  }
  // zeroed_z
  if (lhs->zeroed_z != rhs->zeroed_z) {
    return false;
  }
  // signal_error_x
  if (lhs->signal_error_x != rhs->signal_error_x) {
    return false;
  }
  // signal_error_z
  if (lhs->signal_error_z != rhs->signal_error_z) {
    return false;
  }
  // quad_error_x
  if (lhs->quad_error_x != rhs->quad_error_x) {
    return false;
  }
  // quad_error_z
  if (lhs->quad_error_z != rhs->quad_error_z) {
    return false;
  }
  return true;
}

bool
encoder_msgs__msg__EncoderStatus__copy(
  const encoder_msgs__msg__EncoderStatus * input,
  encoder_msgs__msg__EncoderStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_z
  output->pos_z = input->pos_z;
  // zeroed_x
  output->zeroed_x = input->zeroed_x;
  // zeroed_z
  output->zeroed_z = input->zeroed_z;
  // signal_error_x
  output->signal_error_x = input->signal_error_x;
  // signal_error_z
  output->signal_error_z = input->signal_error_z;
  // quad_error_x
  output->quad_error_x = input->quad_error_x;
  // quad_error_z
  output->quad_error_z = input->quad_error_z;
  return true;
}

encoder_msgs__msg__EncoderStatus *
encoder_msgs__msg__EncoderStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderStatus * msg = (encoder_msgs__msg__EncoderStatus *)allocator.allocate(sizeof(encoder_msgs__msg__EncoderStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(encoder_msgs__msg__EncoderStatus));
  bool success = encoder_msgs__msg__EncoderStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
encoder_msgs__msg__EncoderStatus__destroy(encoder_msgs__msg__EncoderStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    encoder_msgs__msg__EncoderStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
encoder_msgs__msg__EncoderStatus__Sequence__init(encoder_msgs__msg__EncoderStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderStatus * data = NULL;

  if (size) {
    data = (encoder_msgs__msg__EncoderStatus *)allocator.zero_allocate(size, sizeof(encoder_msgs__msg__EncoderStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = encoder_msgs__msg__EncoderStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        encoder_msgs__msg__EncoderStatus__fini(&data[i - 1]);
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
encoder_msgs__msg__EncoderStatus__Sequence__fini(encoder_msgs__msg__EncoderStatus__Sequence * array)
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
      encoder_msgs__msg__EncoderStatus__fini(&array->data[i]);
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

encoder_msgs__msg__EncoderStatus__Sequence *
encoder_msgs__msg__EncoderStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  encoder_msgs__msg__EncoderStatus__Sequence * array = (encoder_msgs__msg__EncoderStatus__Sequence *)allocator.allocate(sizeof(encoder_msgs__msg__EncoderStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = encoder_msgs__msg__EncoderStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
encoder_msgs__msg__EncoderStatus__Sequence__destroy(encoder_msgs__msg__EncoderStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    encoder_msgs__msg__EncoderStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
encoder_msgs__msg__EncoderStatus__Sequence__are_equal(const encoder_msgs__msg__EncoderStatus__Sequence * lhs, const encoder_msgs__msg__EncoderStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!encoder_msgs__msg__EncoderStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
encoder_msgs__msg__EncoderStatus__Sequence__copy(
  const encoder_msgs__msg__EncoderStatus__Sequence * input,
  encoder_msgs__msg__EncoderStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(encoder_msgs__msg__EncoderStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    encoder_msgs__msg__EncoderStatus * data =
      (encoder_msgs__msg__EncoderStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!encoder_msgs__msg__EncoderStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          encoder_msgs__msg__EncoderStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!encoder_msgs__msg__EncoderStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
