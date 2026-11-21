// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/FluxGetRecordStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/flux_get_record_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxGetRecordStatus_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxGetRecordStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxGetRecordStatus_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxGetRecordStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxGetRecordStatus_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxGetRecordStatus_Request>()
{
  return "aimdk_msgs::srv::FluxGetRecordStatus_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxGetRecordStatus_Request>()
{
  return "aimdk_msgs/srv/FluxGetRecordStatus_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxGetRecordStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxGetRecordStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::srv::FluxGetRecordStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxGetRecordStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: recording
  {
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << ", ";
  }

  // member: duration_sec
  {
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxGetRecordStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << "\n";
  }

  // member: duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxGetRecordStatus_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxGetRecordStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxGetRecordStatus_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxGetRecordStatus_Response>()
{
  return "aimdk_msgs::srv::FluxGetRecordStatus_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxGetRecordStatus_Response>()
{
  return "aimdk_msgs/srv/FluxGetRecordStatus_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxGetRecordStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxGetRecordStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::FluxGetRecordStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::FluxGetRecordStatus>()
{
  return "aimdk_msgs::srv::FluxGetRecordStatus";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxGetRecordStatus>()
{
  return "aimdk_msgs/srv/FluxGetRecordStatus";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxGetRecordStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::FluxGetRecordStatus_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::FluxGetRecordStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxGetRecordStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::FluxGetRecordStatus_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::FluxGetRecordStatus_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::FluxGetRecordStatus>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::FluxGetRecordStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::FluxGetRecordStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__TRAITS_HPP_
