// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/McMotionRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/mc_motion_record__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const McMotionRecord_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: record_area
  {
    out << "record_area: ";
    rosidl_generator_traits::value_to_yaml(msg.record_area, out);
    out << ", ";
  }

  // member: operation_type
  {
    out << "operation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_type, out);
    out << ", ";
  }

  // member: max_duration
  {
    out << "max_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration, out);
    out << ", ";
  }

  // member: folder_path
  {
    out << "folder_path: ";
    rosidl_generator_traits::value_to_yaml(msg.folder_path, out);
    out << ", ";
  }

  // member: file_name
  {
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McMotionRecord_Request & msg,
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

  // member: record_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "record_area: ";
    rosidl_generator_traits::value_to_yaml(msg.record_area, out);
    out << "\n";
  }

  // member: operation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_type, out);
    out << "\n";
  }

  // member: max_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration, out);
    out << "\n";
  }

  // member: folder_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "folder_path: ";
    rosidl_generator_traits::value_to_yaml(msg.folder_path, out);
    out << "\n";
  }

  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McMotionRecord_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::McMotionRecord_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::McMotionRecord_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::McMotionRecord_Request>()
{
  return "aimdk_msgs::srv::McMotionRecord_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::McMotionRecord_Request>()
{
  return "aimdk_msgs/srv/McMotionRecord_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::McMotionRecord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::McMotionRecord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::McMotionRecord_Request>
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
  const McMotionRecord_Response & msg,
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
  const McMotionRecord_Response & msg,
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

inline std::string to_yaml(const McMotionRecord_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::McMotionRecord_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::McMotionRecord_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::McMotionRecord_Response>()
{
  return "aimdk_msgs::srv::McMotionRecord_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::McMotionRecord_Response>()
{
  return "aimdk_msgs/srv/McMotionRecord_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::McMotionRecord_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::McMotionRecord_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::McMotionRecord_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::McMotionRecord>()
{
  return "aimdk_msgs::srv::McMotionRecord";
}

template<>
inline const char * name<aimdk_msgs::srv::McMotionRecord>()
{
  return "aimdk_msgs/srv/McMotionRecord";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::McMotionRecord>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::McMotionRecord_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::McMotionRecord_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::McMotionRecord>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::McMotionRecord_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::McMotionRecord_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::McMotionRecord>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::McMotionRecord_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::McMotionRecord_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__TRAITS_HPP_
