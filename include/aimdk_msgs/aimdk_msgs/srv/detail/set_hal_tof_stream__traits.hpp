// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SetHalTofStream.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/set_hal_tof_stream__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetHalTofStream_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: trace_id
  {
    out << "trace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_id, out);
    out << ", ";
  }

  // member: power_ctrl_mask
  {
    out << "power_ctrl_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.power_ctrl_mask, out);
    out << ", ";
  }

  // member: stream_ctrl_mask
  {
    out << "stream_ctrl_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_ctrl_mask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetHalTofStream_Request & msg,
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

  // member: trace_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_id, out);
    out << "\n";
  }

  // member: power_ctrl_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_ctrl_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.power_ctrl_mask, out);
    out << "\n";
  }

  // member: stream_ctrl_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_ctrl_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_ctrl_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetHalTofStream_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetHalTofStream_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetHalTofStream_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetHalTofStream_Request>()
{
  return "aimdk_msgs::srv::SetHalTofStream_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SetHalTofStream_Request>()
{
  return "aimdk_msgs/srv/SetHalTofStream_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetHalTofStream_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetHalTofStream_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::SetHalTofStream_Request>
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
  const SetHalTofStream_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: trace_id
  {
    out << "trace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_id, out);
    out << ", ";
  }

  // member: switch_state
  {
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetHalTofStream_Response & msg,
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

  // member: trace_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_id, out);
    out << "\n";
  }

  // member: switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetHalTofStream_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetHalTofStream_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetHalTofStream_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetHalTofStream_Response>()
{
  return "aimdk_msgs::srv::SetHalTofStream_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SetHalTofStream_Response>()
{
  return "aimdk_msgs/srv/SetHalTofStream_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetHalTofStream_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetHalTofStream_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::SetHalTofStream_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SetHalTofStream>()
{
  return "aimdk_msgs::srv::SetHalTofStream";
}

template<>
inline const char * name<aimdk_msgs::srv::SetHalTofStream>()
{
  return "aimdk_msgs/srv/SetHalTofStream";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetHalTofStream>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SetHalTofStream_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SetHalTofStream_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetHalTofStream>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SetHalTofStream_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SetHalTofStream_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SetHalTofStream>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SetHalTofStream_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SetHalTofStream_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__TRAITS_HPP_
