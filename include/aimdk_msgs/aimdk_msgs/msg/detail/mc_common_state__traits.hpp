// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_common_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"
// Member 'input_source'
#include "aimdk_msgs/msg/detail/mc_input_source__traits.hpp"
// Member 'action_info'
#include "aimdk_msgs/msg/detail/mc_action_info__traits.hpp"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__traits.hpp"
// Member 'motion_status'
#include "aimdk_msgs/msg/detail/mc_motion_status__traits.hpp"
// Member 'fsm_state'
#include "aimdk_msgs/msg/detail/mc_fsm_state__traits.hpp"
// Member 'form_state'
#include "aimdk_msgs/msg/detail/mc_form_state__traits.hpp"
// Member 'posture'
#include "aimdk_msgs/msg/detail/mc_posture__traits.hpp"
// Member 'lift_state'
#include "aimdk_msgs/msg/detail/mc_lift_state__traits.hpp"
// Member 'task_info'
#include "aimdk_msgs/msg/detail/mc_task_info__traits.hpp"
// Member 'held_state'
#include "aimdk_msgs/msg/detail/mc_hand_held_state__traits.hpp"
// Member 'posture_state'
#include "aimdk_msgs/msg/detail/mc_posture_state__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McCommonState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: input_source
  {
    out << "input_source: ";
    to_flow_style_yaml(msg.input_source, out);
    out << ", ";
  }

  // member: action_info
  {
    out << "action_info: ";
    to_flow_style_yaml(msg.action_info, out);
    out << ", ";
  }

  // member: runtime_model
  {
    out << "runtime_model: ";
    to_flow_style_yaml(msg.runtime_model, out);
    out << ", ";
  }

  // member: motion_status
  {
    out << "motion_status: ";
    to_flow_style_yaml(msg.motion_status, out);
    out << ", ";
  }

  // member: fsm_state
  {
    out << "fsm_state: ";
    to_flow_style_yaml(msg.fsm_state, out);
    out << ", ";
  }

  // member: form_state
  {
    out << "form_state: ";
    to_flow_style_yaml(msg.form_state, out);
    out << ", ";
  }

  // member: posture
  {
    out << "posture: ";
    to_flow_style_yaml(msg.posture, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: is_fallen
  {
    out << "is_fallen: ";
    rosidl_generator_traits::value_to_yaml(msg.is_fallen, out);
    out << ", ";
  }

  // member: lift_state
  {
    out << "lift_state: ";
    to_flow_style_yaml(msg.lift_state, out);
    out << ", ";
  }

  // member: task_info
  {
    out << "task_info: ";
    to_flow_style_yaml(msg.task_info, out);
    out << ", ";
  }

  // member: held_state
  {
    out << "held_state: ";
    to_flow_style_yaml(msg.held_state, out);
    out << ", ";
  }

  // member: posture_state
  {
    out << "posture_state: ";
    to_flow_style_yaml(msg.posture_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McCommonState & msg,
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

  // member: input_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_source:\n";
    to_block_style_yaml(msg.input_source, out, indentation + 2);
  }

  // member: action_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_info:\n";
    to_block_style_yaml(msg.action_info, out, indentation + 2);
  }

  // member: runtime_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime_model:\n";
    to_block_style_yaml(msg.runtime_model, out, indentation + 2);
  }

  // member: motion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_status:\n";
    to_block_style_yaml(msg.motion_status, out, indentation + 2);
  }

  // member: fsm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_state:\n";
    to_block_style_yaml(msg.fsm_state, out, indentation + 2);
  }

  // member: form_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "form_state:\n";
    to_block_style_yaml(msg.form_state, out, indentation + 2);
  }

  // member: posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posture:\n";
    to_block_style_yaml(msg.posture, out, indentation + 2);
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: is_fallen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_fallen: ";
    rosidl_generator_traits::value_to_yaml(msg.is_fallen, out);
    out << "\n";
  }

  // member: lift_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lift_state:\n";
    to_block_style_yaml(msg.lift_state, out, indentation + 2);
  }

  // member: task_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_info:\n";
    to_block_style_yaml(msg.task_info, out, indentation + 2);
  }

  // member: held_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "held_state:\n";
    to_block_style_yaml(msg.held_state, out, indentation + 2);
  }

  // member: posture_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posture_state:\n";
    to_block_style_yaml(msg.posture_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McCommonState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McCommonState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McCommonState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McCommonState>()
{
  return "aimdk_msgs::msg::McCommonState";
}

template<>
inline const char * name<aimdk_msgs::msg::McCommonState>()
{
  return "aimdk_msgs/msg/McCommonState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McCommonState>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McActionInfo>::value && has_fixed_size<aimdk_msgs::msg::McFormState>::value && has_fixed_size<aimdk_msgs::msg::McFsmState>::value && has_fixed_size<aimdk_msgs::msg::McHandHeldState>::value && has_fixed_size<aimdk_msgs::msg::McInputSource>::value && has_fixed_size<aimdk_msgs::msg::McLiftState>::value && has_fixed_size<aimdk_msgs::msg::McMotionStatus>::value && has_fixed_size<aimdk_msgs::msg::McPosture>::value && has_fixed_size<aimdk_msgs::msg::McPostureState>::value && has_fixed_size<aimdk_msgs::msg::McRuntimeModel>::value && has_fixed_size<aimdk_msgs::msg::McTaskInfo>::value && has_fixed_size<aimdk_msgs::msg::MessageHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McCommonState>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McActionInfo>::value && has_bounded_size<aimdk_msgs::msg::McFormState>::value && has_bounded_size<aimdk_msgs::msg::McFsmState>::value && has_bounded_size<aimdk_msgs::msg::McHandHeldState>::value && has_bounded_size<aimdk_msgs::msg::McInputSource>::value && has_bounded_size<aimdk_msgs::msg::McLiftState>::value && has_bounded_size<aimdk_msgs::msg::McMotionStatus>::value && has_bounded_size<aimdk_msgs::msg::McPosture>::value && has_bounded_size<aimdk_msgs::msg::McPostureState>::value && has_bounded_size<aimdk_msgs::msg::McRuntimeModel>::value && has_bounded_size<aimdk_msgs::msg::McTaskInfo>::value && has_bounded_size<aimdk_msgs::msg::MessageHeader>::value> {};

template<>
struct is_message<aimdk_msgs::msg::McCommonState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__TRAITS_HPP_
