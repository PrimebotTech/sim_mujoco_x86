// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/DcuMonitorData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/dcu_monitor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DcuMonitorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: monitor_data
  {
    if (msg.monitor_data.size() == 0) {
      out << "monitor_data: []";
    } else {
      out << "monitor_data: [";
      size_t pending_items = msg.monitor_data.size();
      for (auto item : msg.monitor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const DcuMonitorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: monitor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.monitor_data.size() == 0) {
      out << "monitor_data: []\n";
    } else {
      out << "monitor_data:\n";
      for (auto item : msg.monitor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DcuMonitorData & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::DcuMonitorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::DcuMonitorData & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::DcuMonitorData>()
{
  return "aimdk_msgs::msg::DcuMonitorData";
}

template<>
inline const char * name<aimdk_msgs::msg::DcuMonitorData>()
{
  return "aimdk_msgs/msg/DcuMonitorData";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::DcuMonitorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::DcuMonitorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::DcuMonitorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__TRAITS_HPP_
