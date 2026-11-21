// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GetMcMotions.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/get_mc_motions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__traits.hpp"
// Member 'form_state'
#include "aimdk_msgs/msg/detail/mc_form_state__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMcMotions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: form_state
  {
    out << "form_state: ";
    to_flow_style_yaml(msg.form_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMcMotions_Request & msg,
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

  // member: form_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "form_state:\n";
    to_block_style_yaml(msg.form_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMcMotions_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetMcMotions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMcMotions_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcMotions_Request>()
{
  return "aimdk_msgs::srv::GetMcMotions_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcMotions_Request>()
{
  return "aimdk_msgs/srv/GetMcMotions_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcMotions_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McFormState>::value && has_fixed_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcMotions_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McFormState>::value && has_bounded_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetMcMotions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__traits.hpp"
// Member 'motion'
#include "aimdk_msgs/msg/detail/mc_motion__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMcMotions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: motion
  {
    if (msg.motion.size() == 0) {
      out << "motion: []";
    } else {
      out << "motion: [";
      size_t pending_items = msg.motion.size();
      for (auto item : msg.motion) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMcMotions_Response & msg,
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

  // member: motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motion.size() == 0) {
      out << "motion: []\n";
    } else {
      out << "motion:\n";
      for (auto item : msg.motion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMcMotions_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetMcMotions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMcMotions_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcMotions_Response>()
{
  return "aimdk_msgs::srv::GetMcMotions_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcMotions_Response>()
{
  return "aimdk_msgs/srv/GetMcMotions_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GetMcMotions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcMotions>()
{
  return "aimdk_msgs::srv::GetMcMotions";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcMotions>()
{
  return "aimdk_msgs/srv/GetMcMotions";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcMotions>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GetMcMotions_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GetMcMotions_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcMotions>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GetMcMotions_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GetMcMotions_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GetMcMotions>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GetMcMotions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GetMcMotions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__TRAITS_HPP_
