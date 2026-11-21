// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_hand_status'
// Member 'right_hand_status'
#include "aimdk_msgs/msg/detail/mc_hand_status__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McRuntimeModel & msg,
  std::ostream & out)
{
  out << "{";
  // member: waist_status
  {
    out << "waist_status: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_status, out);
    out << ", ";
  }

  // member: left_hand_status
  {
    out << "left_hand_status: ";
    to_flow_style_yaml(msg.left_hand_status, out);
    out << ", ";
  }

  // member: right_hand_status
  {
    out << "right_hand_status: ";
    to_flow_style_yaml(msg.right_hand_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McRuntimeModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waist_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_status: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_status, out);
    out << "\n";
  }

  // member: left_hand_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hand_status:\n";
    to_block_style_yaml(msg.left_hand_status, out, indentation + 2);
  }

  // member: right_hand_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hand_status:\n";
    to_block_style_yaml(msg.right_hand_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McRuntimeModel & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McRuntimeModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McRuntimeModel & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McRuntimeModel>()
{
  return "aimdk_msgs::msg::McRuntimeModel";
}

template<>
inline const char * name<aimdk_msgs::msg::McRuntimeModel>()
{
  return "aimdk_msgs/msg/McRuntimeModel";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McRuntimeModel>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McHandStatus>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McRuntimeModel>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McHandStatus>::value> {};

template<>
struct is_message<aimdk_msgs::msg::McRuntimeModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__TRAITS_HPP_
