// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pmu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PmuState_bms_cycle_total_capacity
{
public:
  explicit Init_PmuState_bms_cycle_total_capacity(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PmuState bms_cycle_total_capacity(::aimdk_msgs::msg::PmuState::_bms_cycle_total_capacity_type arg)
  {
    msg_.bms_cycle_total_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_cycle_count
{
public:
  explicit Init_PmuState_bms_cycle_count(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_cycle_total_capacity bms_cycle_count(::aimdk_msgs::msg::PmuState::_bms_cycle_count_type arg)
  {
    msg_.bms_cycle_count = std::move(arg);
    return Init_PmuState_bms_cycle_total_capacity(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_remaining_capacity_percentage
{
public:
  explicit Init_PmuState_bms_remaining_capacity_percentage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_cycle_count bms_remaining_capacity_percentage(::aimdk_msgs::msg::PmuState::_bms_remaining_capacity_percentage_type arg)
  {
    msg_.bms_remaining_capacity_percentage = std::move(arg);
    return Init_PmuState_bms_cycle_count(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_remaining_capacity
{
public:
  explicit Init_PmuState_bms_remaining_capacity(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_remaining_capacity_percentage bms_remaining_capacity(::aimdk_msgs::msg::PmuState::_bms_remaining_capacity_type arg)
  {
    msg_.bms_remaining_capacity = std::move(arg);
    return Init_PmuState_bms_remaining_capacity_percentage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_temperature
{
public:
  explicit Init_PmuState_bms_temperature(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_remaining_capacity bms_temperature(::aimdk_msgs::msg::PmuState::_bms_temperature_type arg)
  {
    msg_.bms_temperature = std::move(arg);
    return Init_PmuState_bms_remaining_capacity(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_power
{
public:
  explicit Init_PmuState_bms_power(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_temperature bms_power(::aimdk_msgs::msg::PmuState::_bms_power_type arg)
  {
    msg_.bms_power = std::move(arg);
    return Init_PmuState_bms_temperature(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_current
{
public:
  explicit Init_PmuState_bms_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_power bms_current(::aimdk_msgs::msg::PmuState::_bms_current_type arg)
  {
    msg_.bms_current = std::move(arg);
    return Init_PmuState_bms_power(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_voltage
{
public:
  explicit Init_PmuState_bms_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_current bms_voltage(::aimdk_msgs::msg::PmuState::_bms_voltage_type arg)
  {
    msg_.bms_voltage = std::move(arg);
    return Init_PmuState_bms_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_balance_line_resistance
{
public:
  explicit Init_PmuState_bms_balance_line_resistance(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_voltage bms_balance_line_resistance(::aimdk_msgs::msg::PmuState::_bms_balance_line_resistance_type arg)
  {
    msg_.bms_balance_line_resistance = std::move(arg);
    return Init_PmuState_bms_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_status
{
public:
  explicit Init_PmuState_bms_status(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_balance_line_resistance bms_status(::aimdk_msgs::msg::PmuState::_bms_status_type arg)
  {
    msg_.bms_status = std::move(arg);
    return Init_PmuState_bms_balance_line_resistance(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_software_version
{
public:
  explicit Init_PmuState_bms_software_version(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_status bms_software_version(::aimdk_msgs::msg::PmuState::_bms_software_version_type arg)
  {
    msg_.bms_software_version = std::move(arg);
    return Init_PmuState_bms_status(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_hardware_version
{
public:
  explicit Init_PmuState_bms_hardware_version(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_software_version bms_hardware_version(::aimdk_msgs::msg::PmuState::_bms_hardware_version_type arg)
  {
    msg_.bms_hardware_version = std::move(arg);
    return Init_PmuState_bms_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_protocol_version
{
public:
  explicit Init_PmuState_bms_protocol_version(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_hardware_version bms_protocol_version(::aimdk_msgs::msg::PmuState::_bms_protocol_version_type arg)
  {
    msg_.bms_protocol_version = std::move(arg);
    return Init_PmuState_bms_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_serial_number
{
public:
  explicit Init_PmuState_bms_serial_number(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_protocol_version bms_serial_number(::aimdk_msgs::msg::PmuState::_bms_serial_number_type arg)
  {
    msg_.bms_serial_number = std::move(arg);
    return Init_PmuState_bms_protocol_version(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_bms_manufacturer
{
public:
  explicit Init_PmuState_bms_manufacturer(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_serial_number bms_manufacturer(::aimdk_msgs::msg::PmuState::_bms_manufacturer_type arg)
  {
    msg_.bms_manufacturer = std::move(arg);
    return Init_PmuState_bms_serial_number(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_leg_48v_current
{
public:
  explicit Init_PmuState_leg_48v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_bms_manufacturer leg_48v_current(::aimdk_msgs::msg::PmuState::_leg_48v_current_type arg)
  {
    msg_.leg_48v_current = std::move(arg);
    return Init_PmuState_bms_manufacturer(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_arm_48v_current
{
public:
  explicit Init_PmuState_arm_48v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_leg_48v_current arm_48v_current(::aimdk_msgs::msg::PmuState::_arm_48v_current_type arg)
  {
    msg_.arm_48v_current = std::move(arg);
    return Init_PmuState_leg_48v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_ext_24v_current
{
public:
  explicit Init_PmuState_ext_24v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_arm_48v_current ext_24v_current(::aimdk_msgs::msg::PmuState::_ext_24v_current_type arg)
  {
    msg_.ext_24v_current = std::move(arg);
    return Init_PmuState_arm_48v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_ext_12v_current
{
public:
  explicit Init_PmuState_ext_12v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_ext_24v_current ext_12v_current(::aimdk_msgs::msg::PmuState::_ext_12v_current_type arg)
  {
    msg_.ext_12v_current = std::move(arg);
    return Init_PmuState_ext_24v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_orin_12v_current
{
public:
  explicit Init_PmuState_orin_12v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_ext_12v_current orin_12v_current(::aimdk_msgs::msg::PmuState::_orin_12v_current_type arg)
  {
    msg_.orin_12v_current = std::move(arg);
    return Init_PmuState_ext_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_sys_12v_current
{
public:
  explicit Init_PmuState_sys_12v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_orin_12v_current sys_12v_current(::aimdk_msgs::msg::PmuState::_sys_12v_current_type arg)
  {
    msg_.sys_12v_current = std::move(arg);
    return Init_PmuState_orin_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_sys_5v_current
{
public:
  explicit Init_PmuState_sys_5v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_sys_12v_current sys_5v_current(::aimdk_msgs::msg::PmuState::_sys_5v_current_type arg)
  {
    msg_.sys_5v_current = std::move(arg);
    return Init_PmuState_sys_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_soc_5v_current
{
public:
  explicit Init_PmuState_soc_5v_current(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_sys_5v_current soc_5v_current(::aimdk_msgs::msg::PmuState::_soc_5v_current_type arg)
  {
    msg_.soc_5v_current = std::move(arg);
    return Init_PmuState_sys_5v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_leg_48v_voltage
{
public:
  explicit Init_PmuState_leg_48v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_soc_5v_current leg_48v_voltage(::aimdk_msgs::msg::PmuState::_leg_48v_voltage_type arg)
  {
    msg_.leg_48v_voltage = std::move(arg);
    return Init_PmuState_soc_5v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_arm_48v_voltage
{
public:
  explicit Init_PmuState_arm_48v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_leg_48v_voltage arm_48v_voltage(::aimdk_msgs::msg::PmuState::_arm_48v_voltage_type arg)
  {
    msg_.arm_48v_voltage = std::move(arg);
    return Init_PmuState_leg_48v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_ext_24v_voltage
{
public:
  explicit Init_PmuState_ext_24v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_arm_48v_voltage ext_24v_voltage(::aimdk_msgs::msg::PmuState::_ext_24v_voltage_type arg)
  {
    msg_.ext_24v_voltage = std::move(arg);
    return Init_PmuState_arm_48v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_ext_12v_voltage
{
public:
  explicit Init_PmuState_ext_12v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_ext_24v_voltage ext_12v_voltage(::aimdk_msgs::msg::PmuState::_ext_12v_voltage_type arg)
  {
    msg_.ext_12v_voltage = std::move(arg);
    return Init_PmuState_ext_24v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_orin_12v_voltage
{
public:
  explicit Init_PmuState_orin_12v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_ext_12v_voltage orin_12v_voltage(::aimdk_msgs::msg::PmuState::_orin_12v_voltage_type arg)
  {
    msg_.orin_12v_voltage = std::move(arg);
    return Init_PmuState_ext_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_sys_12v_voltage
{
public:
  explicit Init_PmuState_sys_12v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_orin_12v_voltage sys_12v_voltage(::aimdk_msgs::msg::PmuState::_sys_12v_voltage_type arg)
  {
    msg_.sys_12v_voltage = std::move(arg);
    return Init_PmuState_orin_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_sys_5v_voltage
{
public:
  explicit Init_PmuState_sys_5v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_sys_12v_voltage sys_5v_voltage(::aimdk_msgs::msg::PmuState::_sys_5v_voltage_type arg)
  {
    msg_.sys_5v_voltage = std::move(arg);
    return Init_PmuState_sys_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_soc_5v_voltage
{
public:
  explicit Init_PmuState_soc_5v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_sys_5v_voltage soc_5v_voltage(::aimdk_msgs::msg::PmuState::_soc_5v_voltage_type arg)
  {
    msg_.soc_5v_voltage = std::move(arg);
    return Init_PmuState_sys_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_nfc_5v_voltage
{
public:
  explicit Init_PmuState_nfc_5v_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_soc_5v_voltage nfc_5v_voltage(::aimdk_msgs::msg::PmuState::_nfc_5v_voltage_type arg)
  {
    msg_.nfc_5v_voltage = std::move(arg);
    return Init_PmuState_soc_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_vcc_1v2_voltage
{
public:
  explicit Init_PmuState_vcc_1v2_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_nfc_5v_voltage vcc_1v2_voltage(::aimdk_msgs::msg::PmuState::_vcc_1v2_voltage_type arg)
  {
    msg_.vcc_1v2_voltage = std::move(arg);
    return Init_PmuState_nfc_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_vcc_1v8_voltage
{
public:
  explicit Init_PmuState_vcc_1v8_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_vcc_1v2_voltage vcc_1v8_voltage(::aimdk_msgs::msg::PmuState::_vcc_1v8_voltage_type arg)
  {
    msg_.vcc_1v8_voltage = std::move(arg);
    return Init_PmuState_vcc_1v2_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_vcc_3v3_voltage
{
public:
  explicit Init_PmuState_vcc_3v3_voltage(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_vcc_1v8_voltage vcc_3v3_voltage(::aimdk_msgs::msg::PmuState::_vcc_3v3_voltage_type arg)
  {
    msg_.vcc_3v3_voltage = std::move(arg);
    return Init_PmuState_vcc_1v8_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_pmu_bool_status
{
public:
  explicit Init_PmuState_pmu_bool_status(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_vcc_3v3_voltage pmu_bool_status(::aimdk_msgs::msg::PmuState::_pmu_bool_status_type arg)
  {
    msg_.pmu_bool_status = std::move(arg);
    return Init_PmuState_vcc_3v3_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_power_status
{
public:
  explicit Init_PmuState_power_status(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_pmu_bool_status power_status(::aimdk_msgs::msg::PmuState::_power_status_type arg)
  {
    msg_.power_status = std::move(arg);
    return Init_PmuState_pmu_bool_status(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_pmu_software_version
{
public:
  explicit Init_PmuState_pmu_software_version(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_power_status pmu_software_version(::aimdk_msgs::msg::PmuState::_pmu_software_version_type arg)
  {
    msg_.pmu_software_version = std::move(arg);
    return Init_PmuState_power_status(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_pmu_hardware_version
{
public:
  explicit Init_PmuState_pmu_hardware_version(::aimdk_msgs::msg::PmuState & msg)
  : msg_(msg)
  {}
  Init_PmuState_pmu_software_version pmu_hardware_version(::aimdk_msgs::msg::PmuState::_pmu_hardware_version_type arg)
  {
    msg_.pmu_hardware_version = std::move(arg);
    return Init_PmuState_pmu_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

class Init_PmuState_pmu_protocol_version
{
public:
  Init_PmuState_pmu_protocol_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PmuState_pmu_hardware_version pmu_protocol_version(::aimdk_msgs::msg::PmuState::_pmu_protocol_version_type arg)
  {
    msg_.pmu_protocol_version = std::move(arg);
    return Init_PmuState_pmu_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PmuState>()
{
  return aimdk_msgs::msg::builder::Init_PmuState_pmu_protocol_version();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_STATE__BUILDER_HPP_
