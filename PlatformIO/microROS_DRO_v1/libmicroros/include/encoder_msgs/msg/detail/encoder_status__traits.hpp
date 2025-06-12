// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from encoder_msgs:msg/EncoderStatus.idl
// generated code does not contain a copyright notice

#ifndef ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__TRAITS_HPP_
#define ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "encoder_msgs/msg/detail/encoder_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace encoder_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_z
  {
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << ", ";
  }

  // member: zeroed_x
  {
    out << "zeroed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.zeroed_x, out);
    out << ", ";
  }

  // member: zeroed_z
  {
    out << "zeroed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.zeroed_z, out);
    out << ", ";
  }

  // member: signal_error_x
  {
    out << "signal_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_error_x, out);
    out << ", ";
  }

  // member: signal_error_z
  {
    out << "signal_error_z: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_error_z, out);
    out << ", ";
  }

  // member: quad_error_x
  {
    out << "quad_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.quad_error_x, out);
    out << ", ";
  }

  // member: quad_error_z
  {
    out << "quad_error_z: ";
    rosidl_generator_traits::value_to_yaml(msg.quad_error_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << "\n";
  }

  // member: zeroed_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zeroed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.zeroed_x, out);
    out << "\n";
  }

  // member: zeroed_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zeroed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.zeroed_z, out);
    out << "\n";
  }

  // member: signal_error_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_error_x, out);
    out << "\n";
  }

  // member: signal_error_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_error_z: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_error_z, out);
    out << "\n";
  }

  // member: quad_error_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quad_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.quad_error_x, out);
    out << "\n";
  }

  // member: quad_error_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quad_error_z: ";
    rosidl_generator_traits::value_to_yaml(msg.quad_error_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderStatus & msg, bool use_flow_style = false)
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
  const encoder_msgs::msg::EncoderStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  encoder_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use encoder_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const encoder_msgs::msg::EncoderStatus & msg)
{
  return encoder_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<encoder_msgs::msg::EncoderStatus>()
{
  return "encoder_msgs::msg::EncoderStatus";
}

template<>
inline const char * name<encoder_msgs::msg::EncoderStatus>()
{
  return "encoder_msgs/msg/EncoderStatus";
}

template<>
struct has_fixed_size<encoder_msgs::msg::EncoderStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<encoder_msgs::msg::EncoderStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<encoder_msgs::msg::EncoderStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENCODER_MSGS__MSG__DETAIL__ENCODER_STATUS__TRAITS_HPP_
