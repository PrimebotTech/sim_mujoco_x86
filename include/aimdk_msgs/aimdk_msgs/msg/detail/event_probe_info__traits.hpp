// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/EventProbeInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/event_probe_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/event_probe_type__traits.hpp"
// Member 'attrs'
#include "aimdk_msgs/msg/detail/event_probe_attr__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventProbeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: module_id
  {
    out << "module_id: ";
    rosidl_generator_traits::value_to_yaml(msg.module_id, out);
    out << ", ";
  }

  // member: event_id
  {
    out << "event_id: ";
    rosidl_generator_traits::value_to_yaml(msg.event_id, out);
    out << ", ";
  }

  // member: event_code
  {
    out << "event_code: ";
    rosidl_generator_traits::value_to_yaml(msg.event_code, out);
    out << ", ";
  }

  // member: desc
  {
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << ", ";
  }

  // member: attrs
  {
    if (msg.attrs.size() == 0) {
      out << "attrs: []";
    } else {
      out << "attrs: [";
      size_t pending_items = msg.attrs.size();
      for (auto item : msg.attrs) {
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
  const EventProbeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: module_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_id: ";
    rosidl_generator_traits::value_to_yaml(msg.module_id, out);
    out << "\n";
  }

  // member: event_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_id: ";
    rosidl_generator_traits::value_to_yaml(msg.event_id, out);
    out << "\n";
  }

  // member: event_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_code: ";
    rosidl_generator_traits::value_to_yaml(msg.event_code, out);
    out << "\n";
  }

  // member: desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << "\n";
  }

  // member: attrs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attrs.size() == 0) {
      out << "attrs: []\n";
    } else {
      out << "attrs:\n";
      for (auto item : msg.attrs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventProbeInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::EventProbeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::EventProbeInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::EventProbeInfo>()
{
  return "aimdk_msgs::msg::EventProbeInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::EventProbeInfo>()
{
  return "aimdk_msgs/msg/EventProbeInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::EventProbeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::EventProbeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::EventProbeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__TRAITS_HPP_
