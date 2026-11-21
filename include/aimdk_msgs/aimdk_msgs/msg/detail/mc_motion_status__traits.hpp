// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_motion_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'player_state'
#include "aimdk_msgs/msg/detail/mc_player_state__traits.hpp"
// Member 'control_area'
#include "aimdk_msgs/msg/detail/mc_control_area__traits.hpp"
// Member 'type'
#include "aimdk_msgs/msg/detail/mc_motion_type__traits.hpp"
// Member 'intr_info'
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__traits.hpp"
// Member 'gravity_state'
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McMotionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: player_state
  {
    out << "player_state: ";
    to_flow_style_yaml(msg.player_state, out);
    out << ", ";
  }

  // member: control_area
  {
    out << "control_area: ";
    to_flow_style_yaml(msg.control_area, out);
    out << ", ";
  }

  // member: motion
  {
    out << "motion: ";
    rosidl_generator_traits::value_to_yaml(msg.motion, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: intr_info
  {
    out << "intr_info: ";
    to_flow_style_yaml(msg.intr_info, out);
    out << ", ";
  }

  // member: current_steps
  {
    out << "current_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.current_steps, out);
    out << ", ";
  }

  // member: gravity_state
  {
    out << "gravity_state: ";
    to_flow_style_yaml(msg.gravity_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McMotionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: player_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player_state:\n";
    to_block_style_yaml(msg.player_state, out, indentation + 2);
  }

  // member: control_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_area:\n";
    to_block_style_yaml(msg.control_area, out, indentation + 2);
  }

  // member: motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion: ";
    rosidl_generator_traits::value_to_yaml(msg.motion, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: intr_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intr_info:\n";
    to_block_style_yaml(msg.intr_info, out, indentation + 2);
  }

  // member: current_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.current_steps, out);
    out << "\n";
  }

  // member: gravity_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_state:\n";
    to_block_style_yaml(msg.gravity_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McMotionStatus & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McMotionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McMotionStatus & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McMotionStatus>()
{
  return "aimdk_msgs::msg::McMotionStatus";
}

template<>
inline const char * name<aimdk_msgs::msg::McMotionStatus>()
{
  return "aimdk_msgs/msg/McMotionStatus";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McMotionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McMotionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::McMotionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__TRAITS_HPP_
