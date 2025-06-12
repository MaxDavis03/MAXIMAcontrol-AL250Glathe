// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__BUILDER_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "encoder_msgs/msg/detail/encoder_timing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace encoder_msgs
{

namespace msg
{

namespace builder
{

class Init_EncoderTiming_min_isr_interval
{
public:
  explicit Init_EncoderTiming_min_isr_interval(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  ::encoder_msgs::msg::EncoderTiming min_isr_interval(::encoder_msgs::msg::EncoderTiming::_min_isr_interval_type arg)
  {
    msg_.min_isr_interval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_max_duration_z
{
public:
  explicit Init_EncoderTiming_max_duration_z(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  Init_EncoderTiming_min_isr_interval max_duration_z(::encoder_msgs::msg::EncoderTiming::_max_duration_z_type arg)
  {
    msg_.max_duration_z = std::move(arg);
    return Init_EncoderTiming_min_isr_interval(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_avg_duration_z
{
public:
  explicit Init_EncoderTiming_avg_duration_z(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  Init_EncoderTiming_max_duration_z avg_duration_z(::encoder_msgs::msg::EncoderTiming::_avg_duration_z_type arg)
  {
    msg_.avg_duration_z = std::move(arg);
    return Init_EncoderTiming_max_duration_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_latest_duration_z
{
public:
  explicit Init_EncoderTiming_latest_duration_z(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  Init_EncoderTiming_avg_duration_z latest_duration_z(::encoder_msgs::msg::EncoderTiming::_latest_duration_z_type arg)
  {
    msg_.latest_duration_z = std::move(arg);
    return Init_EncoderTiming_avg_duration_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_max_duration_x
{
public:
  explicit Init_EncoderTiming_max_duration_x(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  Init_EncoderTiming_latest_duration_z max_duration_x(::encoder_msgs::msg::EncoderTiming::_max_duration_x_type arg)
  {
    msg_.max_duration_x = std::move(arg);
    return Init_EncoderTiming_latest_duration_z(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_avg_duration_x
{
public:
  explicit Init_EncoderTiming_avg_duration_x(::encoder_msgs::msg::EncoderTiming & msg)
  : msg_(msg)
  {}
  Init_EncoderTiming_max_duration_x avg_duration_x(::encoder_msgs::msg::EncoderTiming::_avg_duration_x_type arg)
  {
    msg_.avg_duration_x = std::move(arg);
    return Init_EncoderTiming_max_duration_x(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

class Init_EncoderTiming_latest_duration_x
{
public:
  Init_EncoderTiming_latest_duration_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderTiming_avg_duration_x latest_duration_x(::encoder_msgs::msg::EncoderTiming::_latest_duration_x_type arg)
  {
    msg_.latest_duration_x = std::move(arg);
    return Init_EncoderTiming_avg_duration_x(msg_);
  }

private:
  ::encoder_msgs::msg::EncoderTiming msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::encoder_msgs::msg::EncoderTiming>()
{
  return encoder_msgs::msg::builder::Init_EncoderTiming_latest_duration_x();
}

}  // namespace encoder_msgs

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__BUILDER_HPP_
