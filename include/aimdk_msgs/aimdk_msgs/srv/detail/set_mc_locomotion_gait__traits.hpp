// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SetMcLocomotionGait.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/set_mc_locomotion_gait__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__traits.hpp"
// Member 'gait'
#include "aimdk_msgs/msg/detail/mc_locomotion_gait_type__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMcLocomotionGait_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gait
  {
    out << "gait: ";
    to_flow_style_yaml(msg.gait, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMcLocomotionGait_Request & msg,
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

  // member: gait
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait:\n";
    to_block_style_yaml(msg.gait, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMcLocomotionGait_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::SetMcLocomotionGait_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcLocomotionGait_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcLocomotionGait_Request>()
{
  return "aimdk_msgs::srv::SetMcLocomotionGait_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcLocomotionGait_Request>()
{
  return "aimdk_msgs/srv/SetMcLocomotionGait_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcLocomotionGait_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McLocomotionGaitType>::value && has_fixed_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcLocomotionGait_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McLocomotionGaitType>::value && has_bounded_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcLocomotionGait_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMcLocomotionGait_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMcLocomotionGait_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMcLocomotionGait_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::SetMcLocomotionGait_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcLocomotionGait_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcLocomotionGait_Response>()
{
  return "aimdk_msgs::srv::SetMcLocomotionGait_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcLocomotionGait_Response>()
{
  return "aimdk_msgs/srv/SetMcLocomotionGait_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcLocomotionGait_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcLocomotionGait_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcLocomotionGait_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcLocomotionGait>()
{
  return "aimdk_msgs::srv::SetMcLocomotionGait";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcLocomotionGait>()
{
  return "aimdk_msgs/srv/SetMcLocomotionGait";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcLocomotionGait>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SetMcLocomotionGait_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SetMcLocomotionGait_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcLocomotionGait>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SetMcLocomotionGait_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SetMcLocomotionGait_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SetMcLocomotionGait>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SetMcLocomotionGait_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SetMcLocomotionGait_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__TRAITS_HPP_
