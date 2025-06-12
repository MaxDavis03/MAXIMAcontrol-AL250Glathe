// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__encoder_msgs__msg__EncoderTiming __attribute__((deprecated))
#else
# define DEPRECATED__encoder_msgs__msg__EncoderTiming __declspec(deprecated)
#endif

namespace encoder_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderTiming_
{
  using Type = EncoderTiming_<ContainerAllocator>;

  explicit EncoderTiming_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latest_duration_x = 0ul;
      this->avg_duration_x = 0ul;
      this->max_duration_x = 0ul;
      this->latest_duration_z = 0ul;
      this->avg_duration_z = 0ul;
      this->max_duration_z = 0ul;
      this->min_isr_interval = 0ul;
    }
  }

  explicit EncoderTiming_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latest_duration_x = 0ul;
      this->avg_duration_x = 0ul;
      this->max_duration_x = 0ul;
      this->latest_duration_z = 0ul;
      this->avg_duration_z = 0ul;
      this->max_duration_z = 0ul;
      this->min_isr_interval = 0ul;
    }
  }

  // field types and members
  using _latest_duration_x_type =
    uint32_t;
  _latest_duration_x_type latest_duration_x;
  using _avg_duration_x_type =
    uint32_t;
  _avg_duration_x_type avg_duration_x;
  using _max_duration_x_type =
    uint32_t;
  _max_duration_x_type max_duration_x;
  using _latest_duration_z_type =
    uint32_t;
  _latest_duration_z_type latest_duration_z;
  using _avg_duration_z_type =
    uint32_t;
  _avg_duration_z_type avg_duration_z;
  using _max_duration_z_type =
    uint32_t;
  _max_duration_z_type max_duration_z;
  using _min_isr_interval_type =
    uint32_t;
  _min_isr_interval_type min_isr_interval;

  // setters for named parameter idiom
  Type & set__latest_duration_x(
    const uint32_t & _arg)
  {
    this->latest_duration_x = _arg;
    return *this;
  }
  Type & set__avg_duration_x(
    const uint32_t & _arg)
  {
    this->avg_duration_x = _arg;
    return *this;
  }
  Type & set__max_duration_x(
    const uint32_t & _arg)
  {
    this->max_duration_x = _arg;
    return *this;
  }
  Type & set__latest_duration_z(
    const uint32_t & _arg)
  {
    this->latest_duration_z = _arg;
    return *this;
  }
  Type & set__avg_duration_z(
    const uint32_t & _arg)
  {
    this->avg_duration_z = _arg;
    return *this;
  }
  Type & set__max_duration_z(
    const uint32_t & _arg)
  {
    this->max_duration_z = _arg;
    return *this;
  }
  Type & set__min_isr_interval(
    const uint32_t & _arg)
  {
    this->min_isr_interval = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    encoder_msgs::msg::EncoderTiming_<ContainerAllocator> *;
  using ConstRawPtr =
    const encoder_msgs::msg::EncoderTiming_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      encoder_msgs::msg::EncoderTiming_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      encoder_msgs::msg::EncoderTiming_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__encoder_msgs__msg__EncoderTiming
    std::shared_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__encoder_msgs__msg__EncoderTiming
    std::shared_ptr<encoder_msgs::msg::EncoderTiming_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderTiming_ & other) const
  {
    if (this->latest_duration_x != other.latest_duration_x) {
      return false;
    }
    if (this->avg_duration_x != other.avg_duration_x) {
      return false;
    }
    if (this->max_duration_x != other.max_duration_x) {
      return false;
    }
    if (this->latest_duration_z != other.latest_duration_z) {
      return false;
    }
    if (this->avg_duration_z != other.avg_duration_z) {
      return false;
    }
    if (this->max_duration_z != other.max_duration_z) {
      return false;
    }
    if (this->min_isr_interval != other.min_isr_interval) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderTiming_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderTiming_

// alias to use template instance with default allocator
using EncoderTiming =
  encoder_msgs::msg::EncoderTiming_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace encoder_msgs

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__STRUCT_HPP_
