// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from encoder_msgs:msg/EncoderStatus.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__encoder_msgs__msg__EncoderStatus __attribute__((deprecated))
#else
# define DEPRECATED__encoder_msgs__msg__EncoderStatus __declspec(deprecated)
#endif

namespace encoder_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderStatus_
{
  using Type = EncoderStatus_<ContainerAllocator>;

  explicit EncoderStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0l;
      this->pos_z = 0l;
      this->zeroed_x = false;
      this->zeroed_z = false;
      this->signal_error_x = false;
      this->signal_error_z = false;
      this->quad_error_x = false;
      this->quad_error_z = false;
    }
  }

  explicit EncoderStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0l;
      this->pos_z = 0l;
      this->zeroed_x = false;
      this->zeroed_z = false;
      this->signal_error_x = false;
      this->signal_error_z = false;
      this->quad_error_x = false;
      this->quad_error_z = false;
    }
  }

  // field types and members
  using _pos_x_type =
    int32_t;
  _pos_x_type pos_x;
  using _pos_z_type =
    int32_t;
  _pos_z_type pos_z;
  using _zeroed_x_type =
    bool;
  _zeroed_x_type zeroed_x;
  using _zeroed_z_type =
    bool;
  _zeroed_z_type zeroed_z;
  using _signal_error_x_type =
    bool;
  _signal_error_x_type signal_error_x;
  using _signal_error_z_type =
    bool;
  _signal_error_z_type signal_error_z;
  using _quad_error_x_type =
    bool;
  _quad_error_x_type quad_error_x;
  using _quad_error_z_type =
    bool;
  _quad_error_z_type quad_error_z;

  // setters for named parameter idiom
  Type & set__pos_x(
    const int32_t & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_z(
    const int32_t & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }
  Type & set__zeroed_x(
    const bool & _arg)
  {
    this->zeroed_x = _arg;
    return *this;
  }
  Type & set__zeroed_z(
    const bool & _arg)
  {
    this->zeroed_z = _arg;
    return *this;
  }
  Type & set__signal_error_x(
    const bool & _arg)
  {
    this->signal_error_x = _arg;
    return *this;
  }
  Type & set__signal_error_z(
    const bool & _arg)
  {
    this->signal_error_z = _arg;
    return *this;
  }
  Type & set__quad_error_x(
    const bool & _arg)
  {
    this->quad_error_x = _arg;
    return *this;
  }
  Type & set__quad_error_z(
    const bool & _arg)
  {
    this->quad_error_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    encoder_msgs::msg::EncoderStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const encoder_msgs::msg::EncoderStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      encoder_msgs::msg::EncoderStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      encoder_msgs::msg::EncoderStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__encoder_msgs__msg__EncoderStatus
    std::shared_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__encoder_msgs__msg__EncoderStatus
    std::shared_ptr<encoder_msgs::msg::EncoderStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderStatus_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    if (this->zeroed_x != other.zeroed_x) {
      return false;
    }
    if (this->zeroed_z != other.zeroed_z) {
      return false;
    }
    if (this->signal_error_x != other.signal_error_x) {
      return false;
    }
    if (this->signal_error_z != other.signal_error_z) {
      return false;
    }
    if (this->quad_error_x != other.quad_error_x) {
      return false;
    }
    if (this->quad_error_z != other.quad_error_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderStatus_

// alias to use template instance with default allocator
using EncoderStatus =
  encoder_msgs::msg::EncoderStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace encoder_msgs

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__STRUCT_HPP_
