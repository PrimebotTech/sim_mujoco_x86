// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/SetMcMotionSeq.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/set_mc_motion_seq__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMcMotionSeq_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motion_seq
  {
    if (msg.motion_seq.size() == 0) {
      out << "motion_seq: []";
    } else {
      out << "motion_seq: [";
      size_t pending_items = msg.motion_seq.size();
      for (auto item : msg.motion_seq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: interrupt
  {
    out << "interrupt: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMcMotionSeq_Request & msg,
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

  // member: motion_seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motion_seq.size() == 0) {
      out << "motion_seq: []\n";
    } else {
      out << "motion_seq:\n";
      for (auto item : msg.motion_seq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMcMotionSeq_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetMcMotionSeq_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcMotionSeq_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotionSeq_Request>()
{
  return "aimdk_msgs::srv::SetMcMotionSeq_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotionSeq_Request>()
{
  return "aimdk_msgs/srv/SetMcMotionSeq_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotionSeq_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotionSeq_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcMotionSeq_Request>
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
  const SetMcMotionSeq_Response & msg,
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
  const SetMcMotionSeq_Response & msg,
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

inline std::string to_yaml(const SetMcMotionSeq_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::SetMcMotionSeq_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::SetMcMotionSeq_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotionSeq_Response>()
{
  return "aimdk_msgs::srv::SetMcMotionSeq_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotionSeq_Response>()
{
  return "aimdk_msgs/srv/SetMcMotionSeq_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotionSeq_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonTaskResponse>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotionSeq_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonTaskResponse>::value> {};

template<>
struct is_message<aimdk_msgs::srv::SetMcMotionSeq_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::SetMcMotionSeq>()
{
  return "aimdk_msgs::srv::SetMcMotionSeq";
}

template<>
inline const char * name<aimdk_msgs::srv::SetMcMotionSeq>()
{
  return "aimdk_msgs/srv/SetMcMotionSeq";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::SetMcMotionSeq>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::SetMcMotionSeq_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::SetMcMotionSeq_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::SetMcMotionSeq>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::SetMcMotionSeq_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::SetMcMotionSeq_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::SetMcMotionSeq>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::SetMcMotionSeq_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::SetMcMotionSeq_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__TRAITS_HPP_
