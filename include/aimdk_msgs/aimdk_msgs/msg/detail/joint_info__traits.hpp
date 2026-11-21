// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/JointInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/joint_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mit_params'
#include "aimdk_msgs/msg/detail/joint_mit_params__traits.hpp"
// Member 'protect_config'
#include "aimdk_msgs/msg/detail/joint_protect_config__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: hardware_version
  {
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << ", ";
  }

  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: mit_params
  {
    out << "mit_params: ";
    to_flow_style_yaml(msg.mit_params, out);
    out << ", ";
  }

  // member: protect_config
  {
    out << "protect_config: ";
    to_flow_style_yaml(msg.protect_config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointInfo & msg,
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

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }

  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: mit_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mit_params:\n";
    to_block_style_yaml(msg.mit_params, out, indentation + 2);
  }

  // member: protect_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protect_config:\n";
    to_block_style_yaml(msg.protect_config, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::JointInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::JointInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::JointInfo>()
{
  return "aimdk_msgs::msg::JointInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::JointInfo>()
{
  return "aimdk_msgs/msg/JointInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::JointInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::JointInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::JointInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__TRAITS_HPP_
