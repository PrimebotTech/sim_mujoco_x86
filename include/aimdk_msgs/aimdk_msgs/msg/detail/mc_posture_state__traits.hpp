// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McPostureState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_posture_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McPostureState & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_posture
  {
    out << "current_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.current_posture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McPostureState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.current_posture, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McPostureState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McPostureState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McPostureState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McPostureState>()
{
  return "aimdk_msgs::msg::McPostureState";
}

template<>
inline const char * name<aimdk_msgs::msg::McPostureState>()
{
  return "aimdk_msgs/msg/McPostureState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McPostureState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McPostureState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::McPostureState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__TRAITS_HPP_
