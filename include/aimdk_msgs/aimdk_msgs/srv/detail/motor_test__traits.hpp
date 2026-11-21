// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/MotorTest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/motor_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorTest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: dcu_type
  {
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << ", ";
  }

  // member: can_channel
  {
    out << "can_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_channel, out);
    out << ", ";
  }

  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: payload_len
  {
    out << "payload_len: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_len, out);
    out << ", ";
  }

  // member: request_payload
  {
    if (msg.request_payload.size() == 0) {
      out << "request_payload: []";
    } else {
      out << "request_payload: [";
      size_t pending_items = msg.request_payload.size();
      for (auto item : msg.request_payload) {
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
  const MotorTest_Request & msg,
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

  // member: dcu_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << "\n";
  }

  // member: can_channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_channel, out);
    out << "\n";
  }

  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: payload_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_len: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_len, out);
    out << "\n";
  }

  // member: request_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request_payload.size() == 0) {
      out << "request_payload: []\n";
    } else {
      out << "request_payload:\n";
      for (auto item : msg.request_payload) {
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

inline std::string to_yaml(const MotorTest_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::MotorTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::MotorTest_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::MotorTest_Request>()
{
  return "aimdk_msgs::srv::MotorTest_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::MotorTest_Request>()
{
  return "aimdk_msgs/srv/MotorTest_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::MotorTest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::MotorTest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::MotorTest_Request>
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
  const MotorTest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: dcu_type
  {
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << ", ";
  }

  // member: can_channel
  {
    out << "can_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_channel, out);
    out << ", ";
  }

  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: payload_len
  {
    out << "payload_len: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_len, out);
    out << ", ";
  }

  // member: response_payload
  {
    if (msg.response_payload.size() == 0) {
      out << "response_payload: []";
    } else {
      out << "response_payload: [";
      size_t pending_items = msg.response_payload.size();
      for (auto item : msg.response_payload) {
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
  const MotorTest_Response & msg,
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

  // member: dcu_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_type, out);
    out << "\n";
  }

  // member: can_channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_channel, out);
    out << "\n";
  }

  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: payload_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_len: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_len, out);
    out << "\n";
  }

  // member: response_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response_payload.size() == 0) {
      out << "response_payload: []\n";
    } else {
      out << "response_payload:\n";
      for (auto item : msg.response_payload) {
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

inline std::string to_yaml(const MotorTest_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::MotorTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::MotorTest_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::MotorTest_Response>()
{
  return "aimdk_msgs::srv::MotorTest_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::MotorTest_Response>()
{
  return "aimdk_msgs/srv/MotorTest_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::MotorTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::MotorTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::MotorTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::MotorTest>()
{
  return "aimdk_msgs::srv::MotorTest";
}

template<>
inline const char * name<aimdk_msgs::srv::MotorTest>()
{
  return "aimdk_msgs/srv/MotorTest";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::MotorTest>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::MotorTest_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::MotorTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::MotorTest>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::MotorTest_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::MotorTest_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::MotorTest>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::MotorTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::MotorTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__TRAITS_HPP_
