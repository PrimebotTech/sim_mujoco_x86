// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/EventProbeInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/event_probe_info_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"
// Member 'list'
#include "aimdk_msgs/msg/detail/event_probe_info__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventProbeInfoArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventProbeInfoArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventProbeInfoArray & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::EventProbeInfoArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::EventProbeInfoArray & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::EventProbeInfoArray>()
{
  return "aimdk_msgs::msg::EventProbeInfoArray";
}

template<>
inline const char * name<aimdk_msgs::msg::EventProbeInfoArray>()
{
  return "aimdk_msgs/msg/EventProbeInfoArray";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::EventProbeInfoArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::EventProbeInfoArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::EventProbeInfoArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__TRAITS_HPP_
