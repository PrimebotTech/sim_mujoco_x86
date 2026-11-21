// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/FluxRecordCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/flux_record_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxRecordCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxRecordCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxRecordCommand_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxRecordCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxRecordCommand_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxRecordCommand_Request>()
{
  return "aimdk_msgs::srv::FluxRecordCommand_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxRecordCommand_Request>()
{
  return "aimdk_msgs/srv/FluxRecordCommand_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxRecordCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxRecordCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::FluxRecordCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxRecordCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxRecordCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxRecordCommand_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxRecordCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxRecordCommand_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxRecordCommand_Response>()
{
  return "aimdk_msgs::srv::FluxRecordCommand_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxRecordCommand_Response>()
{
  return "aimdk_msgs/srv/FluxRecordCommand_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxRecordCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxRecordCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::FluxRecordCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::FluxRecordCommand>()
{
  return "aimdk_msgs::srv::FluxRecordCommand";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxRecordCommand>()
{
  return "aimdk_msgs/srv/FluxRecordCommand";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxRecordCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::FluxRecordCommand_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::FluxRecordCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxRecordCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::FluxRecordCommand_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::FluxRecordCommand_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::FluxRecordCommand>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::FluxRecordCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::FluxRecordCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__TRAITS_HPP_
