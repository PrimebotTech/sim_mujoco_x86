// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ModuleChannelInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/module_channel_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ModuleChannelInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: min_time_diff
  {
    out << "min_time_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.min_time_diff, out);
    out << ", ";
  }

  // member: max_time_diff
  {
    out << "max_time_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.max_time_diff, out);
    out << ", ";
  }

  // member: std_dev
  {
    out << "std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev, out);
    out << ", ";
  }

  // member: window_size
  {
    out << "window_size: ";
    rosidl_generator_traits::value_to_yaml(msg.window_size, out);
    out << ", ";
  }

  // member: timeout_threshold
  {
    out << "timeout_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_threshold, out);
    out << ", ";
  }

  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: backends
  {
    if (msg.backends.size() == 0) {
      out << "backends: []";
    } else {
      out << "backends: [";
      size_t pending_items = msg.backends.size();
      for (auto item : msg.backends) {
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
  const ModuleChannelInfo & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: min_time_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_time_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.min_time_diff, out);
    out << "\n";
  }

  // member: max_time_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_time_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.max_time_diff, out);
    out << "\n";
  }

  // member: std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev, out);
    out << "\n";
  }

  // member: window_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_size: ";
    rosidl_generator_traits::value_to_yaml(msg.window_size, out);
    out << "\n";
  }

  // member: timeout_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_threshold, out);
    out << "\n";
  }

  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: backends
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.backends.size() == 0) {
      out << "backends: []\n";
    } else {
      out << "backends:\n";
      for (auto item : msg.backends) {
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

inline std::string to_yaml(const ModuleChannelInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ModuleChannelInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ModuleChannelInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ModuleChannelInfo>()
{
  return "aimdk_msgs::msg::ModuleChannelInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::ModuleChannelInfo>()
{
  return "aimdk_msgs/msg/ModuleChannelInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ModuleChannelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ModuleChannelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ModuleChannelInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__TRAITS_HPP_
