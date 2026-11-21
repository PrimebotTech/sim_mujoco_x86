// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McMimicGravityState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McMimicGravityState & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: reference_gravity
  {
    if (msg.reference_gravity.size() == 0) {
      out << "reference_gravity: []";
    } else {
      out << "reference_gravity: [";
      size_t pending_items = msg.reference_gravity.size();
      for (auto item : msg.reference_gravity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_gravity
  {
    if (msg.current_gravity.size() == 0) {
      out << "current_gravity: []";
    } else {
      out << "current_gravity: [";
      size_t pending_items = msg.current_gravity.size();
      for (auto item : msg.current_gravity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deviation_deg
  {
    out << "deviation_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_deg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McMimicGravityState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: reference_gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_gravity.size() == 0) {
      out << "reference_gravity: []\n";
    } else {
      out << "reference_gravity:\n";
      for (auto item : msg.reference_gravity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_gravity.size() == 0) {
      out << "current_gravity: []\n";
    } else {
      out << "current_gravity:\n";
      for (auto item : msg.current_gravity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deviation_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviation_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_deg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McMimicGravityState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McMimicGravityState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McMimicGravityState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McMimicGravityState>()
{
  return "aimdk_msgs::msg::McMimicGravityState";
}

template<>
inline const char * name<aimdk_msgs::msg::McMimicGravityState>()
{
  return "aimdk_msgs/msg/McMimicGravityState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McMimicGravityState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McMimicGravityState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::McMimicGravityState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__TRAITS_HPP_
