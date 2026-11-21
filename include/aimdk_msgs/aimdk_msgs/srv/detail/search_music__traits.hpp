// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SearchMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/search_music__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchMusic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: query
  {
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
    out << ", ";
  }

  // member: sp
  {
    out << "sp: ";
    rosidl_generator_traits::value_to_yaml(msg.sp, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: library_mode
  {
    out << "library_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.library_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchMusic_Request & msg,
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

  // member: query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
    out << "\n";
  }

  // member: sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sp: ";
    rosidl_generator_traits::value_to_yaml(msg.sp, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: library_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "library_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.library_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchMusic_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SearchMusic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SearchMusic_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SearchMusic_Request>()
{
  return "aimdk_msgs::srv::SearchMusic_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SearchMusic_Request>()
{
  return "aimdk_msgs/srv/SearchMusic_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SearchMusic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SearchMusic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::SearchMusic_Request>
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
  const SearchMusic_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: search_command_id
  {
    out << "search_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.search_command_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchMusic_Response & msg,
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

  // member: search_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.search_command_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchMusic_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SearchMusic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SearchMusic_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SearchMusic_Response>()
{
  return "aimdk_msgs::srv::SearchMusic_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SearchMusic_Response>()
{
  return "aimdk_msgs/srv/SearchMusic_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SearchMusic_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SearchMusic_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SearchMusic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SearchMusic>()
{
  return "aimdk_msgs::srv::SearchMusic";
}

template<>
inline const char * name<aimdk_msgs::srv::SearchMusic>()
{
  return "aimdk_msgs/srv/SearchMusic";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SearchMusic>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SearchMusic_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SearchMusic_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SearchMusic>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SearchMusic_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SearchMusic_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SearchMusic>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SearchMusic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SearchMusic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__TRAITS_HPP_
