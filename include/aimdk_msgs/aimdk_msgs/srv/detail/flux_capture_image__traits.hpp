// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/FluxCaptureImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/flux_capture_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxCaptureImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FluxCaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FluxCaptureImage_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxCaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxCaptureImage_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxCaptureImage_Request>()
{
  return "aimdk_msgs::srv::FluxCaptureImage_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxCaptureImage_Request>()
{
  return "aimdk_msgs/srv/FluxCaptureImage_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxCaptureImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxCaptureImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::srv::FluxCaptureImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FluxCaptureImage_Response & msg,
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
  const FluxCaptureImage_Response & msg,
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

inline std::string to_yaml(const FluxCaptureImage_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::FluxCaptureImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::FluxCaptureImage_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::FluxCaptureImage_Response>()
{
  return "aimdk_msgs::srv::FluxCaptureImage_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxCaptureImage_Response>()
{
  return "aimdk_msgs/srv/FluxCaptureImage_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxCaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxCaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::FluxCaptureImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::FluxCaptureImage>()
{
  return "aimdk_msgs::srv::FluxCaptureImage";
}

template<>
inline const char * name<aimdk_msgs::srv::FluxCaptureImage>()
{
  return "aimdk_msgs/srv/FluxCaptureImage";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::FluxCaptureImage>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::FluxCaptureImage_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::FluxCaptureImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::FluxCaptureImage>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::FluxCaptureImage_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::FluxCaptureImage_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::FluxCaptureImage>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::FluxCaptureImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::FluxCaptureImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__TRAITS_HPP_
