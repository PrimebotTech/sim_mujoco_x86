// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ManipulationCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/manipulation_command_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"
// Member 'manipulations'
#include "aimdk_msgs/msg/detail/manipulation_command__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManipulationCommandArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: manipulations
  {
    if (msg.manipulations.size() == 0) {
      out << "manipulations: []";
    } else {
      out << "manipulations: [";
      size_t pending_items = msg.manipulations.size();
      for (auto item : msg.manipulations) {
        to_flow_style_yaml(item, out);
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
  const ManipulationCommandArray & msg,
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

  // member: manipulations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.manipulations.size() == 0) {
      out << "manipulations: []\n";
    } else {
      out << "manipulations:\n";
      for (auto item : msg.manipulations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationCommandArray & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ManipulationCommandArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ManipulationCommandArray & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ManipulationCommandArray>()
{
  return "aimdk_msgs::msg::ManipulationCommandArray";
}

template<>
inline const char * name<aimdk_msgs::msg::ManipulationCommandArray>()
{
  return "aimdk_msgs/msg/ManipulationCommandArray";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ManipulationCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ManipulationCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ManipulationCommandArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__TRAITS_HPP_
