// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McMotionIntrInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'intr_type'
#include "aimdk_msgs/msg/detail/mc_motion_intr_type__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McMotionIntrInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: intr_type
  {
    out << "intr_type: ";
    to_flow_style_yaml(msg.intr_type, out);
    out << ", ";
  }

  // member: breakpoint_steps
  {
    if (msg.breakpoint_steps.size() == 0) {
      out << "breakpoint_steps: []";
    } else {
      out << "breakpoint_steps: [";
      size_t pending_items = msg.breakpoint_steps.size();
      for (auto item : msg.breakpoint_steps) {
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
  const McMotionIntrInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: intr_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intr_type:\n";
    to_block_style_yaml(msg.intr_type, out, indentation + 2);
  }

  // member: breakpoint_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.breakpoint_steps.size() == 0) {
      out << "breakpoint_steps: []\n";
    } else {
      out << "breakpoint_steps:\n";
      for (auto item : msg.breakpoint_steps) {
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

inline std::string to_yaml(const McMotionIntrInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McMotionIntrInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McMotionIntrInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McMotionIntrInfo>()
{
  return "aimdk_msgs::msg::McMotionIntrInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::McMotionIntrInfo>()
{
  return "aimdk_msgs/msg/McMotionIntrInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McMotionIntrInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McMotionIntrInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::McMotionIntrInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__TRAITS_HPP_
