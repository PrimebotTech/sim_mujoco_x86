// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/joint_mit_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointMitParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_max
  {
    out << "pos_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_max, out);
    out << ", ";
  }

  // member: pos_min
  {
    out << "pos_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_min, out);
    out << ", ";
  }

  // member: vel_max
  {
    out << "vel_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_max, out);
    out << ", ";
  }

  // member: vel_min
  {
    out << "vel_min: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_min, out);
    out << ", ";
  }

  // member: tor_max
  {
    out << "tor_max: ";
    rosidl_generator_traits::value_to_yaml(msg.tor_max, out);
    out << ", ";
  }

  // member: tor_min
  {
    out << "tor_min: ";
    rosidl_generator_traits::value_to_yaml(msg.tor_min, out);
    out << ", ";
  }

  // member: kp_max
  {
    out << "kp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_max, out);
    out << ", ";
  }

  // member: kp_min
  {
    out << "kp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_min, out);
    out << ", ";
  }

  // member: kd_max
  {
    out << "kd_max: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_max, out);
    out << ", ";
  }

  // member: kd_min
  {
    out << "kd_min: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_min, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointMitParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_max, out);
    out << "\n";
  }

  // member: pos_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_min, out);
    out << "\n";
  }

  // member: vel_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_max, out);
    out << "\n";
  }

  // member: vel_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_min: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_min, out);
    out << "\n";
  }

  // member: tor_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tor_max: ";
    rosidl_generator_traits::value_to_yaml(msg.tor_max, out);
    out << "\n";
  }

  // member: tor_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tor_min: ";
    rosidl_generator_traits::value_to_yaml(msg.tor_min, out);
    out << "\n";
  }

  // member: kp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_max, out);
    out << "\n";
  }

  // member: kp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_min, out);
    out << "\n";
  }

  // member: kd_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd_max: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_max, out);
    out << "\n";
  }

  // member: kd_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd_min: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_min, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointMitParams & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::JointMitParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::JointMitParams & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::JointMitParams>()
{
  return "aimdk_msgs::msg::JointMitParams";
}

template<>
inline const char * name<aimdk_msgs::msg::JointMitParams>()
{
  return "aimdk_msgs/msg/JointMitParams";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::JointMitParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::JointMitParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::JointMitParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__TRAITS_HPP_
