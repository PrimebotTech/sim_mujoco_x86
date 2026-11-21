// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McBodyPose.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_body_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McBodyPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: stand_height
  {
    out << "stand_height: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_height, out);
    out << ", ";
  }

  // member: bend_forward
  {
    out << "bend_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.bend_forward, out);
    out << ", ";
  }

  // member: bend_sideways
  {
    out << "bend_sideways: ";
    rosidl_generator_traits::value_to_yaml(msg.bend_sideways, out);
    out << ", ";
  }

  // member: twist_waist
  {
    out << "twist_waist: ";
    rosidl_generator_traits::value_to_yaml(msg.twist_waist, out);
    out << ", ";
  }

  // member: raise_head
  {
    out << "raise_head: ";
    rosidl_generator_traits::value_to_yaml(msg.raise_head, out);
    out << ", ";
  }

  // member: turn_head
  {
    out << "turn_head: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_head, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McBodyPose & msg,
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

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: stand_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_height: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_height, out);
    out << "\n";
  }

  // member: bend_forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bend_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.bend_forward, out);
    out << "\n";
  }

  // member: bend_sideways
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bend_sideways: ";
    rosidl_generator_traits::value_to_yaml(msg.bend_sideways, out);
    out << "\n";
  }

  // member: twist_waist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_waist: ";
    rosidl_generator_traits::value_to_yaml(msg.twist_waist, out);
    out << "\n";
  }

  // member: raise_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raise_head: ";
    rosidl_generator_traits::value_to_yaml(msg.raise_head, out);
    out << "\n";
  }

  // member: turn_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_head: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_head, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McBodyPose & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McBodyPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McBodyPose & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McBodyPose>()
{
  return "aimdk_msgs::msg::McBodyPose";
}

template<>
inline const char * name<aimdk_msgs::msg::McBodyPose>()
{
  return "aimdk_msgs/msg/McBodyPose";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McBodyPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McBodyPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::McBodyPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__TRAITS_HPP_
