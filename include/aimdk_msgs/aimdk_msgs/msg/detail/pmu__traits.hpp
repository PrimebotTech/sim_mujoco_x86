// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/Pmu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/pmu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pmu & msg,
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

  // member: orin_hardware_version
  {
    out << "orin_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_hardware_version, out);
    out << ", ";
  }

  // member: status_word
  {
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: vcc_3v3_voltage
  {
    out << "vcc_3v3_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_3v3_voltage, out);
    out << ", ";
  }

  // member: vcc_1v8_voltage
  {
    out << "vcc_1v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_1v8_voltage, out);
    out << ", ";
  }

  // member: vcc_1v2_voltage
  {
    out << "vcc_1v2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_1v2_voltage, out);
    out << ", ";
  }

  // member: nfc_5v_voltage
  {
    out << "nfc_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.nfc_5v_voltage, out);
    out << ", ";
  }

  // member: periph_5v_voltage
  {
    out << "periph_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_voltage, out);
    out << ", ";
  }

  // member: lcd_voltage
  {
    out << "lcd_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.lcd_voltage, out);
    out << ", ";
  }

  // member: sys2_12v_voltage
  {
    out << "sys2_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys2_12v_voltage, out);
    out << ", ";
  }

  // member: soc0_5v_voltage
  {
    out << "soc0_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc0_5v_voltage, out);
    out << ", ";
  }

  // member: sys_5v_voltage
  {
    out << "sys_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_5v_voltage, out);
    out << ", ";
  }

  // member: sys_12v_voltage
  {
    out << "sys_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_12v_voltage, out);
    out << ", ";
  }

  // member: soc1_12v_voltage
  {
    out << "soc1_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc1_12v_voltage, out);
    out << ", ";
  }

  // member: ext_12v_voltage
  {
    out << "ext_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_12v_voltage, out);
    out << ", ";
  }

  // member: ext_24v_voltage
  {
    out << "ext_24v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_24v_voltage, out);
    out << ", ";
  }

  // member: arm_48v_voltage
  {
    out << "arm_48v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_48v_voltage, out);
    out << ", ";
  }

  // member: leg_48v_voltage
  {
    out << "leg_48v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_48v_voltage, out);
    out << ", ";
  }

  // member: soc0_5v_current
  {
    out << "soc0_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc0_5v_current, out);
    out << ", ";
  }

  // member: periph_5v_current
  {
    out << "periph_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_current, out);
    out << ", ";
  }

  // member: sys2_12v_current
  {
    out << "sys2_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys2_12v_current, out);
    out << ", ";
  }

  // member: sys_5v_current
  {
    out << "sys_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_5v_current, out);
    out << ", ";
  }

  // member: sys_12v_current
  {
    out << "sys_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_12v_current, out);
    out << ", ";
  }

  // member: soc1_12v_current
  {
    out << "soc1_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc1_12v_current, out);
    out << ", ";
  }

  // member: ext_12v_current
  {
    out << "ext_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_12v_current, out);
    out << ", ";
  }

  // member: ext_24v_current
  {
    out << "ext_24v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_24v_current, out);
    out << ", ";
  }

  // member: arm_48v_current
  {
    out << "arm_48v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_48v_current, out);
    out << ", ";
  }

  // member: leg_48v_current
  {
    out << "leg_48v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_48v_current, out);
    out << ", ";
  }

  // member: temp_48to12_orin_left
  {
    out << "temp_48to12_orin_left: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_48to12_orin_left, out);
    out << ", ";
  }

  // member: temp_48to12_orin_bottom
  {
    out << "temp_48to12_orin_bottom: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_48to12_orin_bottom, out);
    out << ", ";
  }

  // member: temp_12v_ext_mos
  {
    out << "temp_12v_ext_mos: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_12v_ext_mos, out);
    out << ", ";
  }

  // member: temp_12to5
  {
    out << "temp_12to5: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_12to5, out);
    out << ", ";
  }

  // member: temp_emmc
  {
    out << "temp_emmc: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_emmc, out);
    out << ", ";
  }

  // member: temp_soc
  {
    out << "temp_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_soc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pmu & msg,
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

  // member: orin_hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orin_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_hardware_version, out);
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: vcc_3v3_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcc_3v3_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_3v3_voltage, out);
    out << "\n";
  }

  // member: vcc_1v8_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcc_1v8_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_1v8_voltage, out);
    out << "\n";
  }

  // member: vcc_1v2_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcc_1v2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.vcc_1v2_voltage, out);
    out << "\n";
  }

  // member: nfc_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nfc_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.nfc_5v_voltage, out);
    out << "\n";
  }

  // member: periph_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periph_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_voltage, out);
    out << "\n";
  }

  // member: lcd_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcd_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.lcd_voltage, out);
    out << "\n";
  }

  // member: sys2_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys2_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys2_12v_voltage, out);
    out << "\n";
  }

  // member: soc0_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc0_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc0_5v_voltage, out);
    out << "\n";
  }

  // member: sys_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_5v_voltage, out);
    out << "\n";
  }

  // member: sys_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_12v_voltage, out);
    out << "\n";
  }

  // member: soc1_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc1_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc1_12v_voltage, out);
    out << "\n";
  }

  // member: ext_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_12v_voltage, out);
    out << "\n";
  }

  // member: ext_24v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_24v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_24v_voltage, out);
    out << "\n";
  }

  // member: arm_48v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_48v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_48v_voltage, out);
    out << "\n";
  }

  // member: leg_48v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_48v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_48v_voltage, out);
    out << "\n";
  }

  // member: soc0_5v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc0_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc0_5v_current, out);
    out << "\n";
  }

  // member: periph_5v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periph_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_current, out);
    out << "\n";
  }

  // member: sys2_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys2_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys2_12v_current, out);
    out << "\n";
  }

  // member: sys_5v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_5v_current, out);
    out << "\n";
  }

  // member: sys_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_12v_current, out);
    out << "\n";
  }

  // member: soc1_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc1_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc1_12v_current, out);
    out << "\n";
  }

  // member: ext_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_12v_current, out);
    out << "\n";
  }

  // member: ext_24v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_24v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_24v_current, out);
    out << "\n";
  }

  // member: arm_48v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_48v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_48v_current, out);
    out << "\n";
  }

  // member: leg_48v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_48v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_48v_current, out);
    out << "\n";
  }

  // member: temp_48to12_orin_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_48to12_orin_left: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_48to12_orin_left, out);
    out << "\n";
  }

  // member: temp_48to12_orin_bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_48to12_orin_bottom: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_48to12_orin_bottom, out);
    out << "\n";
  }

  // member: temp_12v_ext_mos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_12v_ext_mos: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_12v_ext_mos, out);
    out << "\n";
  }

  // member: temp_12to5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_12to5: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_12to5, out);
    out << "\n";
  }

  // member: temp_emmc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_emmc: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_emmc, out);
    out << "\n";
  }

  // member: temp_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_soc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pmu & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::Pmu & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::Pmu & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::Pmu>()
{
  return "aimdk_msgs::msg::Pmu";
}

template<>
inline const char * name<aimdk_msgs::msg::Pmu>()
{
  return "aimdk_msgs/msg/Pmu";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::Pmu>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::Pmu>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::Pmu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU__TRAITS_HPP_
