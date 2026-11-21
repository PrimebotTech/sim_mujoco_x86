// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/process_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"
// Member 'resource'
#include "aimdk_msgs/msg/detail/process_resource_info__traits.hpp"
// Member 'modules'
#include "aimdk_msgs/msg/detail/module_resource_info__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: app_name
  {
    out << "app_name: ";
    rosidl_generator_traits::value_to_yaml(msg.app_name, out);
    out << ", ";
  }

  // member: resource
  {
    out << "resource: ";
    to_flow_style_yaml(msg.resource, out);
    out << ", ";
  }

  // member: modules
  {
    if (msg.modules.size() == 0) {
      out << "modules: []";
    } else {
      out << "modules: [";
      size_t pending_items = msg.modules.size();
      for (auto item : msg.modules) {
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
  const ProcessInfo & msg,
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

  // member: app_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_name: ";
    rosidl_generator_traits::value_to_yaml(msg.app_name, out);
    out << "\n";
  }

  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource:\n";
    to_block_style_yaml(msg.resource, out, indentation + 2);
  }

  // member: modules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modules.size() == 0) {
      out << "modules: []\n";
    } else {
      out << "modules:\n";
      for (auto item : msg.modules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ProcessInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ProcessInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ProcessInfo>()
{
  return "aimdk_msgs::msg::ProcessInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::ProcessInfo>()
{
  return "aimdk_msgs/msg/ProcessInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ProcessInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ProcessInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ProcessInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_
