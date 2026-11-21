// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SetDcuMotorPowerState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/set_dcu_motor_power_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDcuMotorPowerState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: dcu_type
  {
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDcuMotorPowerState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }

  // member: dcu_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDcuMotorPowerState_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetDcuMotorPowerState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetDcuMotorPowerState_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetDcuMotorPowerState_Request>()
{
  return "aimdk_msgs::srv::SetDcuMotorPowerState_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SetDcuMotorPowerState_Request>()
{
  return "aimdk_msgs/srv/SetDcuMotorPowerState_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetDcuMotorPowerState_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetDcuMotorPowerState_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetDcuMotorPowerState_Request>
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
  const SetDcuMotorPowerState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDcuMotorPowerState_Response & msg,
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

  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDcuMotorPowerState_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetDcuMotorPowerState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetDcuMotorPowerState_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetDcuMotorPowerState_Response>()
{
  return "aimdk_msgs::srv::SetDcuMotorPowerState_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SetDcuMotorPowerState_Response>()
{
  return "aimdk_msgs/srv/SetDcuMotorPowerState_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetDcuMotorPowerState_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetDcuMotorPowerState_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetDcuMotorPowerState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SetDcuMotorPowerState>()
{
  return "aimdk_msgs::srv::SetDcuMotorPowerState";
}

template<>
inline const char * name<aimdk_msgs::srv::SetDcuMotorPowerState>()
{
  return "aimdk_msgs/srv/SetDcuMotorPowerState";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetDcuMotorPowerState>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SetDcuMotorPowerState_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SetDcuMotorPowerState_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetDcuMotorPowerState>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SetDcuMotorPowerState_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SetDcuMotorPowerState_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SetDcuMotorPowerState>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SetDcuMotorPowerState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SetDcuMotorPowerState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__TRAITS_HPP_
