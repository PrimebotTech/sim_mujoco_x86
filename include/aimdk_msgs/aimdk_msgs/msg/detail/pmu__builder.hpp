// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/Pmu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pmu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_Pmu_temp_soc
{
public:
  explicit Init_Pmu_temp_soc(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::Pmu temp_soc(::aimdk_msgs::msg::Pmu::_temp_soc_type arg)
  {
    msg_.temp_soc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_temp_emmc
{
public:
  explicit Init_Pmu_temp_emmc(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_soc temp_emmc(::aimdk_msgs::msg::Pmu::_temp_emmc_type arg)
  {
    msg_.temp_emmc = std::move(arg);
    return Init_Pmu_temp_soc(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_temp_12to5
{
public:
  explicit Init_Pmu_temp_12to5(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_emmc temp_12to5(::aimdk_msgs::msg::Pmu::_temp_12to5_type arg)
  {
    msg_.temp_12to5 = std::move(arg);
    return Init_Pmu_temp_emmc(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_temp_12v_ext_mos
{
public:
  explicit Init_Pmu_temp_12v_ext_mos(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_12to5 temp_12v_ext_mos(::aimdk_msgs::msg::Pmu::_temp_12v_ext_mos_type arg)
  {
    msg_.temp_12v_ext_mos = std::move(arg);
    return Init_Pmu_temp_12to5(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_temp_48to12_orin_bottom
{
public:
  explicit Init_Pmu_temp_48to12_orin_bottom(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_12v_ext_mos temp_48to12_orin_bottom(::aimdk_msgs::msg::Pmu::_temp_48to12_orin_bottom_type arg)
  {
    msg_.temp_48to12_orin_bottom = std::move(arg);
    return Init_Pmu_temp_12v_ext_mos(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_temp_48to12_orin_left
{
public:
  explicit Init_Pmu_temp_48to12_orin_left(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_48to12_orin_bottom temp_48to12_orin_left(::aimdk_msgs::msg::Pmu::_temp_48to12_orin_left_type arg)
  {
    msg_.temp_48to12_orin_left = std::move(arg);
    return Init_Pmu_temp_48to12_orin_bottom(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_leg_48v_current
{
public:
  explicit Init_Pmu_leg_48v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_temp_48to12_orin_left leg_48v_current(::aimdk_msgs::msg::Pmu::_leg_48v_current_type arg)
  {
    msg_.leg_48v_current = std::move(arg);
    return Init_Pmu_temp_48to12_orin_left(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_arm_48v_current
{
public:
  explicit Init_Pmu_arm_48v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_leg_48v_current arm_48v_current(::aimdk_msgs::msg::Pmu::_arm_48v_current_type arg)
  {
    msg_.arm_48v_current = std::move(arg);
    return Init_Pmu_leg_48v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_ext_24v_current
{
public:
  explicit Init_Pmu_ext_24v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_arm_48v_current ext_24v_current(::aimdk_msgs::msg::Pmu::_ext_24v_current_type arg)
  {
    msg_.ext_24v_current = std::move(arg);
    return Init_Pmu_arm_48v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_ext_12v_current
{
public:
  explicit Init_Pmu_ext_12v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_ext_24v_current ext_12v_current(::aimdk_msgs::msg::Pmu::_ext_12v_current_type arg)
  {
    msg_.ext_12v_current = std::move(arg);
    return Init_Pmu_ext_24v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_soc1_12v_current
{
public:
  explicit Init_Pmu_soc1_12v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_ext_12v_current soc1_12v_current(::aimdk_msgs::msg::Pmu::_soc1_12v_current_type arg)
  {
    msg_.soc1_12v_current = std::move(arg);
    return Init_Pmu_ext_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys_12v_current
{
public:
  explicit Init_Pmu_sys_12v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_soc1_12v_current sys_12v_current(::aimdk_msgs::msg::Pmu::_sys_12v_current_type arg)
  {
    msg_.sys_12v_current = std::move(arg);
    return Init_Pmu_soc1_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys_5v_current
{
public:
  explicit Init_Pmu_sys_5v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys_12v_current sys_5v_current(::aimdk_msgs::msg::Pmu::_sys_5v_current_type arg)
  {
    msg_.sys_5v_current = std::move(arg);
    return Init_Pmu_sys_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys2_12v_current
{
public:
  explicit Init_Pmu_sys2_12v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys_5v_current sys2_12v_current(::aimdk_msgs::msg::Pmu::_sys2_12v_current_type arg)
  {
    msg_.sys2_12v_current = std::move(arg);
    return Init_Pmu_sys_5v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_periph_5v_current
{
public:
  explicit Init_Pmu_periph_5v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys2_12v_current periph_5v_current(::aimdk_msgs::msg::Pmu::_periph_5v_current_type arg)
  {
    msg_.periph_5v_current = std::move(arg);
    return Init_Pmu_sys2_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_soc0_5v_current
{
public:
  explicit Init_Pmu_soc0_5v_current(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_periph_5v_current soc0_5v_current(::aimdk_msgs::msg::Pmu::_soc0_5v_current_type arg)
  {
    msg_.soc0_5v_current = std::move(arg);
    return Init_Pmu_periph_5v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_leg_48v_voltage
{
public:
  explicit Init_Pmu_leg_48v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_soc0_5v_current leg_48v_voltage(::aimdk_msgs::msg::Pmu::_leg_48v_voltage_type arg)
  {
    msg_.leg_48v_voltage = std::move(arg);
    return Init_Pmu_soc0_5v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_arm_48v_voltage
{
public:
  explicit Init_Pmu_arm_48v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_leg_48v_voltage arm_48v_voltage(::aimdk_msgs::msg::Pmu::_arm_48v_voltage_type arg)
  {
    msg_.arm_48v_voltage = std::move(arg);
    return Init_Pmu_leg_48v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_ext_24v_voltage
{
public:
  explicit Init_Pmu_ext_24v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_arm_48v_voltage ext_24v_voltage(::aimdk_msgs::msg::Pmu::_ext_24v_voltage_type arg)
  {
    msg_.ext_24v_voltage = std::move(arg);
    return Init_Pmu_arm_48v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_ext_12v_voltage
{
public:
  explicit Init_Pmu_ext_12v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_ext_24v_voltage ext_12v_voltage(::aimdk_msgs::msg::Pmu::_ext_12v_voltage_type arg)
  {
    msg_.ext_12v_voltage = std::move(arg);
    return Init_Pmu_ext_24v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_soc1_12v_voltage
{
public:
  explicit Init_Pmu_soc1_12v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_ext_12v_voltage soc1_12v_voltage(::aimdk_msgs::msg::Pmu::_soc1_12v_voltage_type arg)
  {
    msg_.soc1_12v_voltage = std::move(arg);
    return Init_Pmu_ext_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys_12v_voltage
{
public:
  explicit Init_Pmu_sys_12v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_soc1_12v_voltage sys_12v_voltage(::aimdk_msgs::msg::Pmu::_sys_12v_voltage_type arg)
  {
    msg_.sys_12v_voltage = std::move(arg);
    return Init_Pmu_soc1_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys_5v_voltage
{
public:
  explicit Init_Pmu_sys_5v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys_12v_voltage sys_5v_voltage(::aimdk_msgs::msg::Pmu::_sys_5v_voltage_type arg)
  {
    msg_.sys_5v_voltage = std::move(arg);
    return Init_Pmu_sys_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_soc0_5v_voltage
{
public:
  explicit Init_Pmu_soc0_5v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys_5v_voltage soc0_5v_voltage(::aimdk_msgs::msg::Pmu::_soc0_5v_voltage_type arg)
  {
    msg_.soc0_5v_voltage = std::move(arg);
    return Init_Pmu_sys_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_sys2_12v_voltage
{
public:
  explicit Init_Pmu_sys2_12v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_soc0_5v_voltage sys2_12v_voltage(::aimdk_msgs::msg::Pmu::_sys2_12v_voltage_type arg)
  {
    msg_.sys2_12v_voltage = std::move(arg);
    return Init_Pmu_soc0_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_lcd_voltage
{
public:
  explicit Init_Pmu_lcd_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_sys2_12v_voltage lcd_voltage(::aimdk_msgs::msg::Pmu::_lcd_voltage_type arg)
  {
    msg_.lcd_voltage = std::move(arg);
    return Init_Pmu_sys2_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_periph_5v_voltage
{
public:
  explicit Init_Pmu_periph_5v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_lcd_voltage periph_5v_voltage(::aimdk_msgs::msg::Pmu::_periph_5v_voltage_type arg)
  {
    msg_.periph_5v_voltage = std::move(arg);
    return Init_Pmu_lcd_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_nfc_5v_voltage
{
public:
  explicit Init_Pmu_nfc_5v_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_periph_5v_voltage nfc_5v_voltage(::aimdk_msgs::msg::Pmu::_nfc_5v_voltage_type arg)
  {
    msg_.nfc_5v_voltage = std::move(arg);
    return Init_Pmu_periph_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_vcc_1v2_voltage
{
public:
  explicit Init_Pmu_vcc_1v2_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_nfc_5v_voltage vcc_1v2_voltage(::aimdk_msgs::msg::Pmu::_vcc_1v2_voltage_type arg)
  {
    msg_.vcc_1v2_voltage = std::move(arg);
    return Init_Pmu_nfc_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_vcc_1v8_voltage
{
public:
  explicit Init_Pmu_vcc_1v8_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_vcc_1v2_voltage vcc_1v8_voltage(::aimdk_msgs::msg::Pmu::_vcc_1v8_voltage_type arg)
  {
    msg_.vcc_1v8_voltage = std::move(arg);
    return Init_Pmu_vcc_1v2_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_vcc_3v3_voltage
{
public:
  explicit Init_Pmu_vcc_3v3_voltage(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_vcc_1v8_voltage vcc_3v3_voltage(::aimdk_msgs::msg::Pmu::_vcc_3v3_voltage_type arg)
  {
    msg_.vcc_3v3_voltage = std::move(arg);
    return Init_Pmu_vcc_1v8_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_status
{
public:
  explicit Init_Pmu_status(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_vcc_3v3_voltage status(::aimdk_msgs::msg::Pmu::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Pmu_vcc_3v3_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_status_word
{
public:
  explicit Init_Pmu_status_word(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_status status_word(::aimdk_msgs::msg::Pmu::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_Pmu_status(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_orin_hardware_version
{
public:
  explicit Init_Pmu_orin_hardware_version(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_status_word orin_hardware_version(::aimdk_msgs::msg::Pmu::_orin_hardware_version_type arg)
  {
    msg_.orin_hardware_version = std::move(arg);
    return Init_Pmu_status_word(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_software_version
{
public:
  explicit Init_Pmu_software_version(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_orin_hardware_version software_version(::aimdk_msgs::msg::Pmu::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_Pmu_orin_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_hardware_version
{
public:
  explicit Init_Pmu_hardware_version(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_software_version hardware_version(::aimdk_msgs::msg::Pmu::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_Pmu_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_protocol_version
{
public:
  explicit Init_Pmu_protocol_version(::aimdk_msgs::msg::Pmu & msg)
  : msg_(msg)
  {}
  Init_Pmu_hardware_version protocol_version(::aimdk_msgs::msg::Pmu::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_Pmu_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

class Init_Pmu_header
{
public:
  Init_Pmu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pmu_protocol_version header(::aimdk_msgs::msg::Pmu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Pmu_protocol_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Pmu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::Pmu>()
{
  return aimdk_msgs::msg::builder::Init_Pmu_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU__BUILDER_HPP_
