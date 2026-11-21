// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/process_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'threads'
#include "aimdk_msgs/msg/detail/thread_resource_info__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessResourceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: process_id
  {
    out << "process_id: ";
    rosidl_generator_traits::value_to_yaml(msg.process_id, out);
    out << ", ";
  }

  // member: process_name
  {
    out << "process_name: ";
    rosidl_generator_traits::value_to_yaml(msg.process_name, out);
    out << ", ";
  }

  // member: process_mem_usage
  {
    out << "process_mem_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.process_mem_usage, out);
    out << ", ";
  }

  // member: process_mem_usage_ratio
  {
    out << "process_mem_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.process_mem_usage_ratio, out);
    out << ", ";
  }

  // member: process_cpu_usage_ratio
  {
    out << "process_cpu_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.process_cpu_usage_ratio, out);
    out << ", ";
  }

  // member: thread_count
  {
    out << "thread_count: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_count, out);
    out << ", ";
  }

  // member: threads
  {
    if (msg.threads.size() == 0) {
      out << "threads: []";
    } else {
      out << "threads: [";
      size_t pending_items = msg.threads.size();
      for (auto item : msg.threads) {
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
  const ProcessResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: process_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_id: ";
    rosidl_generator_traits::value_to_yaml(msg.process_id, out);
    out << "\n";
  }

  // member: process_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_name: ";
    rosidl_generator_traits::value_to_yaml(msg.process_name, out);
    out << "\n";
  }

  // member: process_mem_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_mem_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.process_mem_usage, out);
    out << "\n";
  }

  // member: process_mem_usage_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_mem_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.process_mem_usage_ratio, out);
    out << "\n";
  }

  // member: process_cpu_usage_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_cpu_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.process_cpu_usage_ratio, out);
    out << "\n";
  }

  // member: thread_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thread_count: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_count, out);
    out << "\n";
  }

  // member: threads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.threads.size() == 0) {
      out << "threads: []\n";
    } else {
      out << "threads:\n";
      for (auto item : msg.threads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessResourceInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ProcessResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ProcessResourceInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ProcessResourceInfo>()
{
  return "aimdk_msgs::msg::ProcessResourceInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::ProcessResourceInfo>()
{
  return "aimdk_msgs/msg/ProcessResourceInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ProcessResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ProcessResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ProcessResourceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__TRAITS_HPP_
