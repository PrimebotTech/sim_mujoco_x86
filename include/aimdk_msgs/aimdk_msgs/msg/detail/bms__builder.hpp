// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__BMS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__BMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/bms__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_Bms_cycle_total_capacity
{
public:
  explicit Init_Bms_cycle_total_capacity(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::Bms cycle_total_capacity(::aimdk_msgs::msg::Bms::_cycle_total_capacity_type arg)
  {
    msg_.cycle_total_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_cycle_count
{
public:
  explicit Init_Bms_cycle_count(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_cycle_total_capacity cycle_count(::aimdk_msgs::msg::Bms::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_Bms_cycle_total_capacity(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_remaining_capacity_percentage
{
public:
  explicit Init_Bms_remaining_capacity_percentage(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_cycle_count remaining_capacity_percentage(::aimdk_msgs::msg::Bms::_remaining_capacity_percentage_type arg)
  {
    msg_.remaining_capacity_percentage = std::move(arg);
    return Init_Bms_cycle_count(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_remaining_capacity
{
public:
  explicit Init_Bms_remaining_capacity(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_remaining_capacity_percentage remaining_capacity(::aimdk_msgs::msg::Bms::_remaining_capacity_type arg)
  {
    msg_.remaining_capacity = std::move(arg);
    return Init_Bms_remaining_capacity_percentage(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_temperature
{
public:
  explicit Init_Bms_temperature(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_remaining_capacity temperature(::aimdk_msgs::msg::Bms::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Bms_remaining_capacity(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_power
{
public:
  explicit Init_Bms_power(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_temperature power(::aimdk_msgs::msg::Bms::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_Bms_temperature(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_current
{
public:
  explicit Init_Bms_current(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_power current(::aimdk_msgs::msg::Bms::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Bms_power(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_voltage
{
public:
  explicit Init_Bms_voltage(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_current voltage(::aimdk_msgs::msg::Bms::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_Bms_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_balance_line_resistance
{
public:
  explicit Init_Bms_balance_line_resistance(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_voltage balance_line_resistance(::aimdk_msgs::msg::Bms::_balance_line_resistance_type arg)
  {
    msg_.balance_line_resistance = std::move(arg);
    return Init_Bms_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_status
{
public:
  explicit Init_Bms_status(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_balance_line_resistance status(::aimdk_msgs::msg::Bms::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Bms_balance_line_resistance(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_power_request
{
public:
  explicit Init_Bms_power_request(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_status power_request(::aimdk_msgs::msg::Bms::_power_request_type arg)
  {
    msg_.power_request = std::move(arg);
    return Init_Bms_status(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_software_version
{
public:
  explicit Init_Bms_software_version(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_power_request software_version(::aimdk_msgs::msg::Bms::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_Bms_power_request(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_hardware_version
{
public:
  explicit Init_Bms_hardware_version(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_software_version hardware_version(::aimdk_msgs::msg::Bms::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_Bms_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_protocol_version
{
public:
  explicit Init_Bms_protocol_version(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_hardware_version protocol_version(::aimdk_msgs::msg::Bms::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_Bms_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_serial_number
{
public:
  explicit Init_Bms_serial_number(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_protocol_version serial_number(::aimdk_msgs::msg::Bms::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_Bms_protocol_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_manufacturer
{
public:
  explicit Init_Bms_manufacturer(::aimdk_msgs::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_serial_number manufacturer(::aimdk_msgs::msg::Bms::_manufacturer_type arg)
  {
    msg_.manufacturer = std::move(arg);
    return Init_Bms_serial_number(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

class Init_Bms_header
{
public:
  Init_Bms_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bms_manufacturer header(::aimdk_msgs::msg::Bms::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bms_manufacturer(msg_);
  }

private:
  ::aimdk_msgs::msg::Bms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::Bms>()
{
  return aimdk_msgs::msg::builder::Init_Bms_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__BMS__BUILDER_HPP_
