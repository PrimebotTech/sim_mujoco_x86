// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/HALCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/hal_camera_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HALCameraCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: param_keys
  {
    if (msg.param_keys.size() == 0) {
      out << "param_keys: []";
    } else {
      out << "param_keys: [";
      size_t pending_items = msg.param_keys.size();
      for (auto item : msg.param_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: param_values
  {
    if (msg.param_values.size() == 0) {
      out << "param_values: []";
    } else {
      out << "param_values: [";
      size_t pending_items = msg.param_values.size();
      for (auto item : msg.param_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const HALCameraCommand_Request & msg,
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

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: param_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_keys.size() == 0) {
      out << "param_keys: []\n";
    } else {
      out << "param_keys:\n";
      for (auto item : msg.param_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: param_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_values.size() == 0) {
      out << "param_values: []\n";
    } else {
      out << "param_values:\n";
      for (auto item : msg.param_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HALCameraCommand_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::HALCameraCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::HALCameraCommand_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::HALCameraCommand_Request>()
{
  return "aimdk_msgs::srv::HALCameraCommand_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::HALCameraCommand_Request>()
{
  return "aimdk_msgs/srv/HALCameraCommand_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::HALCameraCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::HALCameraCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::HALCameraCommand_Request>
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
  const HALCameraCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: result_keys
  {
    if (msg.result_keys.size() == 0) {
      out << "result_keys: []";
    } else {
      out << "result_keys: [";
      size_t pending_items = msg.result_keys.size();
      for (auto item : msg.result_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: result_values
  {
    if (msg.result_values.size() == 0) {
      out << "result_values: []";
    } else {
      out << "result_values: [";
      size_t pending_items = msg.result_values.size();
      for (auto item : msg.result_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const HALCameraCommand_Response & msg,
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

  // member: result_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_keys.size() == 0) {
      out << "result_keys: []\n";
    } else {
      out << "result_keys:\n";
      for (auto item : msg.result_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: result_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_values.size() == 0) {
      out << "result_values: []\n";
    } else {
      out << "result_values:\n";
      for (auto item : msg.result_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HALCameraCommand_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::HALCameraCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::HALCameraCommand_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::HALCameraCommand_Response>()
{
  return "aimdk_msgs::srv::HALCameraCommand_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::HALCameraCommand_Response>()
{
  return "aimdk_msgs/srv/HALCameraCommand_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::HALCameraCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::HALCameraCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::HALCameraCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::HALCameraCommand>()
{
  return "aimdk_msgs::srv::HALCameraCommand";
}

template<>
inline const char * name<aimdk_msgs::srv::HALCameraCommand>()
{
  return "aimdk_msgs/srv/HALCameraCommand";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::HALCameraCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::HALCameraCommand_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::HALCameraCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::HALCameraCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::HALCameraCommand_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::HALCameraCommand_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::HALCameraCommand>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::HALCameraCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::HALCameraCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__TRAITS_HPP_
