// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/Adu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ADU__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ADU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/adu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Adu & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << ", ";
  }

  // member: hardware_version
  {
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << ", ";
  }

  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << ", ";
  }

  // member: status_word
  {
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: board_12v_voltage
  {
    out << "board_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_12v_voltage, out);
    out << ", ";
  }

  // member: board_5v_voltage
  {
    out << "board_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_5v_voltage, out);
    out << ", ";
  }

  // member: board_3v3_voltage
  {
    out << "board_3v3_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_3v3_voltage, out);
    out << ", ";
  }

  // member: board_1v2_voltage
  {
    out << "board_1v2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_1v2_voltage, out);
    out << ", ";
  }

  // member: board_1v8_voltage
  {
    out << "board_1v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_1v8_voltage, out);
    out << ", ";
  }

  // member: board_3v8_voltage
  {
    out << "board_3v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_3v8_voltage, out);
    out << ", ";
  }

  // member: system_12v_current
  {
    out << "system_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.system_12v_current, out);
    out << ", ";
  }

  // member: board_temperature_voltage
  {
    out << "board_temperature_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_temperature_voltage, out);
    out << ", ";
  }

  // member: board_hardware_voltage
  {
    out << "board_hardware_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_hardware_voltage, out);
    out << ", ";
  }

  // member: ntc_temperature
  {
    out << "ntc_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ntc_temperature, out);
    out << ", ";
  }

  // member: fan1_target_speed
  {
    out << "fan1_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan1_target_speed, out);
    out << ", ";
  }

  // member: fan1_feedback_speed
  {
    out << "fan1_feedback_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan1_feedback_speed, out);
    out << ", ";
  }

  // member: fan2_target_speed
  {
    out << "fan2_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan2_target_speed, out);
    out << ", ";
  }

  // member: fan2_feedback_speed
  {
    out << "fan2_feedback_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan2_feedback_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Adu & msg,
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

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }

  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }

  // member: status_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: board_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_12v_voltage, out);
    out << "\n";
  }

  // member: board_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_5v_voltage, out);
    out << "\n";
  }

  // member: board_3v3_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_3v3_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_3v3_voltage, out);
    out << "\n";
  }

  // member: board_1v2_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_1v2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_1v2_voltage, out);
    out << "\n";
  }

  // member: board_1v8_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_1v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_1v8_voltage, out);
    out << "\n";
  }

  // member: board_3v8_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_3v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_3v8_voltage, out);
    out << "\n";
  }

  // member: system_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.system_12v_current, out);
    out << "\n";
  }

  // member: board_temperature_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_temperature_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_temperature_voltage, out);
    out << "\n";
  }

  // member: board_hardware_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_hardware_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.board_hardware_voltage, out);
    out << "\n";
  }

  // member: ntc_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ntc_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ntc_temperature, out);
    out << "\n";
  }

  // member: fan1_target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan1_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan1_target_speed, out);
    out << "\n";
  }

  // member: fan1_feedback_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan1_feedback_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan1_feedback_speed, out);
    out << "\n";
  }

  // member: fan2_target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan2_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan2_target_speed, out);
    out << "\n";
  }

  // member: fan2_feedback_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan2_feedback_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fan2_feedback_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Adu & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::msg::Adu & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::Adu & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::Adu>()
{
  return "aimdk_msgs::msg::Adu";
}

template<>
inline const char * name<aimdk_msgs::msg::Adu>()
{
  return "aimdk_msgs/msg/Adu";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::Adu>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::Adu>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::Adu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__ADU__TRAITS_HPP_
