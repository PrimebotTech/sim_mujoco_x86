// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/joint_protect_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointProtectConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: l1_mos_protect
  {
    out << "l1_mos_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_mos_protect, out);
    out << ", ";
  }

  // member: l1_mos_recover
  {
    out << "l1_mos_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_mos_recover, out);
    out << ", ";
  }

  // member: l1_current_protect
  {
    out << "l1_current_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_current_protect, out);
    out << ", ";
  }

  // member: l1_current_recover
  {
    out << "l1_current_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_current_recover, out);
    out << ", ";
  }

  // member: l1_voltage_protect
  {
    out << "l1_voltage_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_voltage_protect, out);
    out << ", ";
  }

  // member: l1_voltage_recover
  {
    out << "l1_voltage_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_voltage_recover, out);
    out << ", ";
  }

  // member: l2_mos_protect
  {
    out << "l2_mos_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_mos_protect, out);
    out << ", ";
  }

  // member: l2_mos_recover
  {
    out << "l2_mos_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_mos_recover, out);
    out << ", ";
  }

  // member: l2_current_protect
  {
    out << "l2_current_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_current_protect, out);
    out << ", ";
  }

  // member: l2_current_recover
  {
    out << "l2_current_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_current_recover, out);
    out << ", ";
  }

  // member: l2_voltage_protect
  {
    out << "l2_voltage_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_voltage_protect, out);
    out << ", ";
  }

  // member: l2_voltage_recover
  {
    out << "l2_voltage_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_voltage_recover, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointProtectConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l1_mos_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_mos_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_mos_protect, out);
    out << "\n";
  }

  // member: l1_mos_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_mos_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_mos_recover, out);
    out << "\n";
  }

  // member: l1_current_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_current_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_current_protect, out);
    out << "\n";
  }

  // member: l1_current_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_current_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_current_recover, out);
    out << "\n";
  }

  // member: l1_voltage_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_voltage_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_voltage_protect, out);
    out << "\n";
  }

  // member: l1_voltage_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_voltage_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_voltage_recover, out);
    out << "\n";
  }

  // member: l2_mos_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_mos_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_mos_protect, out);
    out << "\n";
  }

  // member: l2_mos_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_mos_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_mos_recover, out);
    out << "\n";
  }

  // member: l2_current_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_current_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_current_protect, out);
    out << "\n";
  }

  // member: l2_current_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_current_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_current_recover, out);
    out << "\n";
  }

  // member: l2_voltage_protect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_voltage_protect: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_voltage_protect, out);
    out << "\n";
  }

  // member: l2_voltage_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_voltage_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_voltage_recover, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointProtectConfig & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::JointProtectConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::JointProtectConfig & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::JointProtectConfig>()
{
  return "aimdk_msgs::msg::JointProtectConfig";
}

template<>
inline const char * name<aimdk_msgs::msg::JointProtectConfig>()
{
  return "aimdk_msgs/msg/JointProtectConfig";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::JointProtectConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::JointProtectConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::JointProtectConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__TRAITS_HPP_
