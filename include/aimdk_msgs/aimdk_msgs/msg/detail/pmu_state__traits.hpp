// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/pmu_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PmuState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pmu_protocol_version
  {
    out << "pmu_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_protocol_version, out);
    out << ", ";
  }

  // member: pmu_hardware_version
  {
    out << "pmu_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_hardware_version, out);
    out << ", ";
  }

  // member: pmu_software_version
  {
    out << "pmu_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_software_version, out);
    out << ", ";
  }

  // member: power_status
  {
    out << "power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.power_status, out);
    out << ", ";
  }

  // member: pmu_bool_status
  {
    out << "pmu_bool_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_bool_status, out);
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

  // member: soc_5v_voltage
  {
    out << "soc_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc_5v_voltage, out);
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

  // member: orin_12v_voltage
  {
    out << "orin_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_12v_voltage, out);
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

  // member: soc_5v_current
  {
    out << "soc_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc_5v_current, out);
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

  // member: orin_12v_current
  {
    out << "orin_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_12v_current, out);
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

  // member: bms_manufacturer
  {
    out << "bms_manufacturer: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_manufacturer, out);
    out << ", ";
  }

  // member: bms_serial_number
  {
    out << "bms_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_serial_number, out);
    out << ", ";
  }

  // member: bms_protocol_version
  {
    out << "bms_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_protocol_version, out);
    out << ", ";
  }

  // member: bms_hardware_version
  {
    out << "bms_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_hardware_version, out);
    out << ", ";
  }

  // member: bms_software_version
  {
    out << "bms_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_software_version, out);
    out << ", ";
  }

  // member: bms_status
  {
    out << "bms_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_status, out);
    out << ", ";
  }

  // member: bms_balance_line_resistance
  {
    out << "bms_balance_line_resistance: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_balance_line_resistance, out);
    out << ", ";
  }

  // member: bms_voltage
  {
    out << "bms_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_voltage, out);
    out << ", ";
  }

  // member: bms_current
  {
    out << "bms_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_current, out);
    out << ", ";
  }

  // member: bms_power
  {
    out << "bms_power: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_power, out);
    out << ", ";
  }

  // member: bms_temperature
  {
    out << "bms_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temperature, out);
    out << ", ";
  }

  // member: bms_remaining_capacity
  {
    out << "bms_remaining_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_remaining_capacity, out);
    out << ", ";
  }

  // member: bms_remaining_capacity_percentage
  {
    out << "bms_remaining_capacity_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_remaining_capacity_percentage, out);
    out << ", ";
  }

  // member: bms_cycle_count
  {
    out << "bms_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_count, out);
    out << ", ";
  }

  // member: bms_cycle_total_capacity
  {
    out << "bms_cycle_total_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_total_capacity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PmuState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pmu_protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pmu_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_protocol_version, out);
    out << "\n";
  }

  // member: pmu_hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pmu_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_hardware_version, out);
    out << "\n";
  }

  // member: pmu_software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pmu_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_software_version, out);
    out << "\n";
  }

  // member: power_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.power_status, out);
    out << "\n";
  }

  // member: pmu_bool_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pmu_bool_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pmu_bool_status, out);
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

  // member: soc_5v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc_5v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.soc_5v_voltage, out);
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

  // member: orin_12v_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orin_12v_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_12v_voltage, out);
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

  // member: soc_5v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc_5v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.soc_5v_current, out);
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

  // member: orin_12v_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orin_12v_current: ";
    rosidl_generator_traits::value_to_yaml(msg.orin_12v_current, out);
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

  // member: bms_manufacturer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_manufacturer: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_manufacturer, out);
    out << "\n";
  }

  // member: bms_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_serial_number, out);
    out << "\n";
  }

  // member: bms_protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_protocol_version, out);
    out << "\n";
  }

  // member: bms_hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_hardware_version, out);
    out << "\n";
  }

  // member: bms_software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_software_version, out);
    out << "\n";
  }

  // member: bms_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_status, out);
    out << "\n";
  }

  // member: bms_balance_line_resistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_balance_line_resistance: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_balance_line_resistance, out);
    out << "\n";
  }

  // member: bms_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_voltage, out);
    out << "\n";
  }

  // member: bms_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_current, out);
    out << "\n";
  }

  // member: bms_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_power: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_power, out);
    out << "\n";
  }

  // member: bms_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temperature, out);
    out << "\n";
  }

  // member: bms_remaining_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_remaining_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_remaining_capacity, out);
    out << "\n";
  }

  // member: bms_remaining_capacity_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_remaining_capacity_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_remaining_capacity_percentage, out);
    out << "\n";
  }

  // member: bms_cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_count, out);
    out << "\n";
  }

  // member: bms_cycle_total_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_cycle_total_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cycle_total_capacity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PmuState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::PmuState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::PmuState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::PmuState>()
{
  return "aimdk_msgs::msg::PmuState";
}

template<>
inline const char * name<aimdk_msgs::msg::PmuState>()
{
  return "aimdk_msgs/msg/PmuState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::PmuState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::PmuState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::PmuState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_STATE__TRAITS_HPP_
