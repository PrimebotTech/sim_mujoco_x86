// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/EventProbeAttr.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/event_probe_attr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventProbeAttr & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: value_int
  {
    out << "value_int: ";
    rosidl_generator_traits::value_to_yaml(msg.value_int, out);
    out << ", ";
  }

  // member: value_double
  {
    out << "value_double: ";
    rosidl_generator_traits::value_to_yaml(msg.value_double, out);
    out << ", ";
  }

  // member: value_string
  {
    out << "value_string: ";
    rosidl_generator_traits::value_to_yaml(msg.value_string, out);
    out << ", ";
  }

  // member: value_bool
  {
    out << "value_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.value_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventProbeAttr & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value_int
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_int: ";
    rosidl_generator_traits::value_to_yaml(msg.value_int, out);
    out << "\n";
  }

  // member: value_double
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_double: ";
    rosidl_generator_traits::value_to_yaml(msg.value_double, out);
    out << "\n";
  }

  // member: value_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_string: ";
    rosidl_generator_traits::value_to_yaml(msg.value_string, out);
    out << "\n";
  }

  // member: value_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.value_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventProbeAttr & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::EventProbeAttr & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::EventProbeAttr & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::EventProbeAttr>()
{
  return "aimdk_msgs::msg::EventProbeAttr";
}

template<>
inline const char * name<aimdk_msgs::msg::EventProbeAttr>()
{
  return "aimdk_msgs/msg/EventProbeAttr";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::EventProbeAttr>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::EventProbeAttr>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::EventProbeAttr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__TRAITS_HPP_
