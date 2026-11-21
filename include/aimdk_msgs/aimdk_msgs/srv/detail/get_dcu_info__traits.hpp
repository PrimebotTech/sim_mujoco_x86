// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GetDcuInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/get_dcu_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDcuInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDcuInfo_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDcuInfo_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetDcuInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetDcuInfo_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetDcuInfo_Request>()
{
  return "aimdk_msgs::srv::GetDcuInfo_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GetDcuInfo_Request>()
{
  return "aimdk_msgs/srv/GetDcuInfo_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetDcuInfo_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetDcuInfo_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetDcuInfo_Request>
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
  const GetDcuInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: udcu_fw_ver
  {
    out << "udcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_fw_ver, out);
    out << ", ";
  }

  // member: udcu_hw_ver
  {
    out << "udcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_hw_ver, out);
    out << ", ";
  }

  // member: udcu_build_time
  {
    out << "udcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_build_time, out);
    out << ", ";
  }

  // member: ddcu_fw_ver
  {
    out << "ddcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_fw_ver, out);
    out << ", ";
  }

  // member: ddcu_hw_ver
  {
    out << "ddcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_hw_ver, out);
    out << ", ";
  }

  // member: ddcu_build_time
  {
    out << "ddcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_build_time, out);
    out << ", ";
  }

  // member: safedcu_fw_ver
  {
    out << "safedcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_fw_ver, out);
    out << ", ";
  }

  // member: safedcu_hw_ver
  {
    out << "safedcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_hw_ver, out);
    out << ", ";
  }

  // member: safedcu_build_time
  {
    out << "safedcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_build_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDcuInfo_Response & msg,
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

  // member: udcu_fw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "udcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_fw_ver, out);
    out << "\n";
  }

  // member: udcu_hw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "udcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_hw_ver, out);
    out << "\n";
  }

  // member: udcu_build_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "udcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.udcu_build_time, out);
    out << "\n";
  }

  // member: ddcu_fw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_fw_ver, out);
    out << "\n";
  }

  // member: ddcu_hw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_hw_ver, out);
    out << "\n";
  }

  // member: ddcu_build_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ddcu_build_time, out);
    out << "\n";
  }

  // member: safedcu_fw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safedcu_fw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_fw_ver, out);
    out << "\n";
  }

  // member: safedcu_hw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safedcu_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_hw_ver, out);
    out << "\n";
  }

  // member: safedcu_build_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safedcu_build_time: ";
    rosidl_generator_traits::value_to_yaml(msg.safedcu_build_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDcuInfo_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetDcuInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetDcuInfo_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetDcuInfo_Response>()
{
  return "aimdk_msgs::srv::GetDcuInfo_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GetDcuInfo_Response>()
{
  return "aimdk_msgs/srv/GetDcuInfo_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetDcuInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetDcuInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GetDcuInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GetDcuInfo>()
{
  return "aimdk_msgs::srv::GetDcuInfo";
}

template<>
inline const char * name<aimdk_msgs::srv::GetDcuInfo>()
{
  return "aimdk_msgs/srv/GetDcuInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetDcuInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GetDcuInfo_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GetDcuInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetDcuInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GetDcuInfo_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GetDcuInfo_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GetDcuInfo>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GetDcuInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GetDcuInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__TRAITS_HPP_
