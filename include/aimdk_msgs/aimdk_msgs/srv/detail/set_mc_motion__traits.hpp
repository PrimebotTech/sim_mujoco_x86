// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SetMcMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/set_mc_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMcMotion_Request & msg,
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

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: motion
  {
    out << "motion: ";
    rosidl_generator_traits::value_to_yaml(msg.motion, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: resource
  {
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << ", ";
  }

  // member: interrupt
  {
    out << "interrupt: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupt, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMcMotion_Request & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
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

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << "\n";
  }

  // member: interrupt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interrupt: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupt, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMcMotion_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetMcMotion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcMotion_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotion_Request>()
{
  return "aimdk_msgs::srv::SetMcMotion_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotion_Request>()
{
  return "aimdk_msgs/srv/SetMcMotion_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcMotion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMcMotion_Response & msg,
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
  const SetMcMotion_Response & msg,
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

inline std::string to_yaml(const SetMcMotion_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetMcMotion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcMotion_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotion_Response>()
{
  return "aimdk_msgs::srv::SetMcMotion_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotion_Response>()
{
  return "aimdk_msgs/srv/SetMcMotion_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotion_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonTaskResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotion_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonTaskResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcMotion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotion>()
{
  return "aimdk_msgs::srv::SetMcMotion";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotion>()
{
  return "aimdk_msgs/srv/SetMcMotion";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotion>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SetMcMotion_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SetMcMotion_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotion>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SetMcMotion_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SetMcMotion_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SetMcMotion>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SetMcMotion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SetMcMotion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__TRAITS_HPP_
