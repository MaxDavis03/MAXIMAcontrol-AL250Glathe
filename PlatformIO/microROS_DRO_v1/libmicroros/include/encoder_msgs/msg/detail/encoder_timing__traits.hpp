// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from encoder_msgs:msg/EncoderTiming.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__TRAITS_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "encoder_msgs/msg/detail/encoder_timing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace encoder_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderTiming & msg,
  std::ostream & out)
{
  out << "{";
  // member: latest_duration_x
  {
    out << "latest_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_duration_x, out);
    out << ", ";
  }

  // member: avg_duration_x
  {
    out << "avg_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_duration_x, out);
    out << ", ";
  }

  // member: max_duration_x
  {
    out << "max_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_x, out);
    out << ", ";
  }

  // member: latest_duration_z
  {
    out << "latest_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_duration_z, out);
    out << ", ";
  }

  // member: avg_duration_z
  {
    out << "avg_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_duration_z, out);
    out << ", ";
  }

  // member: max_duration_z
  {
    out << "max_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_z, out);
    out << ", ";
  }

  // member: min_isr_interval
  {
    out << "min_isr_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.min_isr_interval, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderTiming & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latest_duration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_duration_x, out);
    out << "\n";
  }

  // member: avg_duration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_duration_x, out);
    out << "\n";
  }

  // member: max_duration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_x, out);
    out << "\n";
  }

  // member: latest_duration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_duration_z, out);
    out << "\n";
  }

  // member: avg_duration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_duration_z, out);
    out << "\n";
  }

  // member: max_duration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration_z, out);
    out << "\n";
  }

  // member: min_isr_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_isr_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.min_isr_interval, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderTiming & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace encoder_msgs

namespace rosidl_generator_traits
{

[[deprecated("use encoder_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const encoder_msgs::msg::EncoderTiming & msg,
  std::ostream & out, size_t indentation = 0)
{
  encoder_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use encoder_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const encoder_msgs::msg::EncoderTiming & msg)
{
  return encoder_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<encoder_msgs::msg::EncoderTiming>()
{
  return "encoder_msgs::msg::EncoderTiming";
}

template<>
inline const char * name<encoder_msgs::msg::EncoderTiming>()
{
  return "encoder_msgs/msg/EncoderTiming";
}

template<>
struct has_fixed_size<encoder_msgs::msg::EncoderTiming>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<encoder_msgs::msg::EncoderTiming>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<encoder_msgs::msg::EncoderTiming>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_TIMING__TRAITS_HPP_
