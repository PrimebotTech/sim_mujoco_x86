// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/FluxHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/flux_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FluxHeartbeat & msg,
  std::ostream & out)
{
  out << "{";
  // member: recording
  {
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: duration_sec
  {
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxHeartbeat & msg, bool use_flow_style = false)
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

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::msg::FluxHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::FluxHeartbeat & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::FluxHeartbeat>()
{
  return "aimdk_msgs::msg::FluxHeartbeat";
}

template<>
inline const char * name<aimdk_msgs::msg::FluxHeartbeat>()
{
  return "aimdk_msgs/msg/FluxHeartbeat";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::FluxHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::FluxHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::FluxHeartbeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__TRAITS_HPP_
