// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from encoder_msgs:msg/EncoderStatus.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__BUILDER_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "encoder_msgs/msg/detail/encoder_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace encoder_msgs
{

namespace msg
{

namespace builder
{

class Init_EncoderStatus_quad_error_z
{
public:
  explicit Init_EncoderStatus_quad_error_z(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  ::encoder_msgs::msg::EncoderStatus quad_error_z(::encoder_msgs::msg::EncoderStatus::_quad_error_z_type arg)
  {
    msg_.quad_error_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_quad_error_x
{
public:
  explicit Init_EncoderStatus_quad_error_x(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_quad_error_z quad_error_x(::encoder_msgs::msg::EncoderStatus::_quad_error_x_type arg)
  {
    msg_.quad_error_x = std::move(arg);
    return Init_EncoderStatus_quad_error_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_signal_error_z
{
public:
  explicit Init_EncoderStatus_signal_error_z(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_quad_error_x signal_error_z(::encoder_msgs::msg::EncoderStatus::_signal_error_z_type arg)
  {
    msg_.signal_error_z = std::move(arg);
    return Init_EncoderStatus_quad_error_x(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_signal_error_x
{
public:
  explicit Init_EncoderStatus_signal_error_x(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_signal_error_z signal_error_x(::encoder_msgs::msg::EncoderStatus::_signal_error_x_type arg)
  {
    msg_.signal_error_x = std::move(arg);
    return Init_EncoderStatus_signal_error_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_zeroed_z
{
public:
  explicit Init_EncoderStatus_zeroed_z(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_signal_error_x zeroed_z(::encoder_msgs::msg::EncoderStatus::_zeroed_z_type arg)
  {
    msg_.zeroed_z = std::move(arg);
    return Init_EncoderStatus_signal_error_x(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_zeroed_x
{
public:
  explicit Init_EncoderStatus_zeroed_x(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_zeroed_z zeroed_x(::encoder_msgs::msg::EncoderStatus::_zeroed_x_type arg)
  {
    msg_.zeroed_x = std::move(arg);
    return Init_EncoderStatus_zeroed_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_pos_z
{
public:
  explicit Init_EncoderStatus_pos_z(::encoder_msgs::msg::EncoderStatus & msg)
  : msg_(msg)
  {}
  Init_EncoderStatus_zeroed_x pos_z(::encoder_msgs::msg::EncoderStatus::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_EncoderStatus_zeroed_x(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

class Init_EncoderStatus_pos_x
{
public:
  Init_EncoderStatus_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderStatus_pos_z pos_x(::encoder_msgs::msg::EncoderStatus::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_EncoderStatus_pos_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::encoder_msgs::msg::EncoderStatus>()
{
  return encoder_msgs::msg::builder::Init_EncoderStatus_pos_x();
}

}  // namespace encoder_msgs

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__BUILDER_HPP_
