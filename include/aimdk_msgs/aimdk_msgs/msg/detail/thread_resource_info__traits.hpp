// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ThreadResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/thread_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThreadResourceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: thread_id
  {
    out << "thread_id: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_id, out);
    out << ", ";
  }

  // member: thread_name
  {
    out << "thread_name: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_name, out);
    out << ", ";
  }

  // member: cpu_usage_ratio
  {
    out << "cpu_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_ratio, out);
    out << ", ";
  }

  // member: cpu_sched_policy
  {
    out << "cpu_sched_policy: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_sched_policy, out);
    out << ", ";
  }

  // member: cpu_sched_priority
  {
    out << "cpu_sched_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_sched_priority, out);
    out << ", ";
  }

  // member: bounding_cpus
  {
    if (msg.bounding_cpus.size() == 0) {
      out << "bounding_cpus: []";
    } else {
      out << "bounding_cpus: [";
      size_t pending_items = msg.bounding_cpus.size();
      for (auto item : msg.bounding_cpus) {
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
  const ThreadResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: thread_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thread_id: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_id, out);
    out << "\n";
  }

  // member: thread_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thread_name: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_name, out);
    out << "\n";
  }

  // member: cpu_usage_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_ratio, out);
    out << "\n";
  }

  // member: cpu_sched_policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_sched_policy: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_sched_policy, out);
    out << "\n";
  }

  // member: cpu_sched_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_sched_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_sched_priority, out);
    out << "\n";
  }

  // member: bounding_cpus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_cpus.size() == 0) {
      out << "bounding_cpus: []\n";
    } else {
      out << "bounding_cpus:\n";
      for (auto item : msg.bounding_cpus) {
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

inline std::string to_yaml(const ThreadResourceInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ThreadResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ThreadResourceInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ThreadResourceInfo>()
{
  return "aimdk_msgs::msg::ThreadResourceInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::ThreadResourceInfo>()
{
  return "aimdk_msgs/msg/ThreadResourceInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ThreadResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ThreadResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ThreadResourceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__TRAITS_HPP_
