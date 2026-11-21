// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McRLDebug.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_rl_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McRLDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obs_vec
  {
    if (msg.obs_vec.size() == 0) {
      out << "obs_vec: []";
    } else {
      out << "obs_vec: [";
      size_t pending_items = msg.obs_vec.size();
      for (auto item : msg.obs_vec) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: action_vec
  {
    if (msg.action_vec.size() == 0) {
      out << "action_vec: []";
    } else {
      out << "action_vec: [";
      size_t pending_items = msg.action_vec.size();
      for (auto item : msg.action_vec) {
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
  const McRLDebug & msg,
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

  // member: obs_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obs_vec.size() == 0) {
      out << "obs_vec: []\n";
    } else {
      out << "obs_vec:\n";
      for (auto item : msg.obs_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: action_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action_vec.size() == 0) {
      out << "action_vec: []\n";
    } else {
      out << "action_vec:\n";
      for (auto item : msg.action_vec) {
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

inline std::string to_yaml(const McRLDebug & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McRLDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McRLDebug & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McRLDebug>()
{
  return "aimdk_msgs::msg::McRLDebug";
}

template<>
inline const char * name<aimdk_msgs::msg::McRLDebug>()
{
  return "aimdk_msgs/msg/McRLDebug";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McRLDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McRLDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::McRLDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__TRAITS_HPP_
