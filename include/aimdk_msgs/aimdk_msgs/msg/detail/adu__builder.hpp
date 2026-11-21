// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/Adu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ADU__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ADU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/adu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_Adu_fan2_feedback_speed
{
public:
  explicit Init_Adu_fan2_feedback_speed(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::Adu fan2_feedback_speed(::aimdk_msgs::msg::Adu::_fan2_feedback_speed_type arg)
  {
    msg_.fan2_feedback_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_fan2_target_speed
{
public:
  explicit Init_Adu_fan2_target_speed(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_fan2_feedback_speed fan2_target_speed(::aimdk_msgs::msg::Adu::_fan2_target_speed_type arg)
  {
    msg_.fan2_target_speed = std::move(arg);
    return Init_Adu_fan2_feedback_speed(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_fan1_feedback_speed
{
public:
  explicit Init_Adu_fan1_feedback_speed(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_fan2_target_speed fan1_feedback_speed(::aimdk_msgs::msg::Adu::_fan1_feedback_speed_type arg)
  {
    msg_.fan1_feedback_speed = std::move(arg);
    return Init_Adu_fan2_target_speed(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_fan1_target_speed
{
public:
  explicit Init_Adu_fan1_target_speed(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_fan1_feedback_speed fan1_target_speed(::aimdk_msgs::msg::Adu::_fan1_target_speed_type arg)
  {
    msg_.fan1_target_speed = std::move(arg);
    return Init_Adu_fan1_feedback_speed(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_ntc_temperature
{
public:
  explicit Init_Adu_ntc_temperature(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_fan1_target_speed ntc_temperature(::aimdk_msgs::msg::Adu::_ntc_temperature_type arg)
  {
    msg_.ntc_temperature = std::move(arg);
    return Init_Adu_fan1_target_speed(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_hardware_voltage
{
public:
  explicit Init_Adu_board_hardware_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_ntc_temperature board_hardware_voltage(::aimdk_msgs::msg::Adu::_board_hardware_voltage_type arg)
  {
    msg_.board_hardware_voltage = std::move(arg);
    return Init_Adu_ntc_temperature(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_temperature_voltage
{
public:
  explicit Init_Adu_board_temperature_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_hardware_voltage board_temperature_voltage(::aimdk_msgs::msg::Adu::_board_temperature_voltage_type arg)
  {
    msg_.board_temperature_voltage = std::move(arg);
    return Init_Adu_board_hardware_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_system_12v_current
{
public:
  explicit Init_Adu_system_12v_current(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_temperature_voltage system_12v_current(::aimdk_msgs::msg::Adu::_system_12v_current_type arg)
  {
    msg_.system_12v_current = std::move(arg);
    return Init_Adu_board_temperature_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_3v8_voltage
{
public:
  explicit Init_Adu_board_3v8_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_system_12v_current board_3v8_voltage(::aimdk_msgs::msg::Adu::_board_3v8_voltage_type arg)
  {
    msg_.board_3v8_voltage = std::move(arg);
    return Init_Adu_system_12v_current(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_1v8_voltage
{
public:
  explicit Init_Adu_board_1v8_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_3v8_voltage board_1v8_voltage(::aimdk_msgs::msg::Adu::_board_1v8_voltage_type arg)
  {
    msg_.board_1v8_voltage = std::move(arg);
    return Init_Adu_board_3v8_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_1v2_voltage
{
public:
  explicit Init_Adu_board_1v2_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_1v8_voltage board_1v2_voltage(::aimdk_msgs::msg::Adu::_board_1v2_voltage_type arg)
  {
    msg_.board_1v2_voltage = std::move(arg);
    return Init_Adu_board_1v8_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_3v3_voltage
{
public:
  explicit Init_Adu_board_3v3_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_1v2_voltage board_3v3_voltage(::aimdk_msgs::msg::Adu::_board_3v3_voltage_type arg)
  {
    msg_.board_3v3_voltage = std::move(arg);
    return Init_Adu_board_1v2_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_5v_voltage
{
public:
  explicit Init_Adu_board_5v_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_3v3_voltage board_5v_voltage(::aimdk_msgs::msg::Adu::_board_5v_voltage_type arg)
  {
    msg_.board_5v_voltage = std::move(arg);
    return Init_Adu_board_3v3_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_board_12v_voltage
{
public:
  explicit Init_Adu_board_12v_voltage(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_5v_voltage board_12v_voltage(::aimdk_msgs::msg::Adu::_board_12v_voltage_type arg)
  {
    msg_.board_12v_voltage = std::move(arg);
    return Init_Adu_board_5v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_error_code
{
public:
  explicit Init_Adu_error_code(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_board_12v_voltage error_code(::aimdk_msgs::msg::Adu::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Adu_board_12v_voltage(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_status_word
{
public:
  explicit Init_Adu_status_word(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_error_code status_word(::aimdk_msgs::msg::Adu::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_Adu_error_code(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_software_version
{
public:
  explicit Init_Adu_software_version(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_status_word software_version(::aimdk_msgs::msg::Adu::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_Adu_status_word(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_hardware_version
{
public:
  explicit Init_Adu_hardware_version(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_software_version hardware_version(::aimdk_msgs::msg::Adu::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_Adu_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_protocol_version
{
public:
  explicit Init_Adu_protocol_version(::aimdk_msgs::msg::Adu & msg)
  : msg_(msg)
  {}
  Init_Adu_hardware_version protocol_version(::aimdk_msgs::msg::Adu::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_Adu_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

class Init_Adu_header
{
public:
  Init_Adu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Adu_protocol_version header(::aimdk_msgs::msg::Adu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Adu_protocol_version(msg_);
  }

private:
  ::aimdk_msgs::msg::Adu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::Adu>()
{
  return aimdk_msgs::msg::builder::Init_Adu_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ADU__BUILDER_HPP_
