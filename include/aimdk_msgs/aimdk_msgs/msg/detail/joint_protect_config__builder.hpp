// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/joint_protect_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointProtectConfig_l2_voltage_recover
{
public:
  explicit Init_JointProtectConfig_l2_voltage_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JointProtectConfig l2_voltage_recover(::aimdk_msgs::msg::JointProtectConfig::_l2_voltage_recover_type arg)
  {
    msg_.l2_voltage_recover = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l2_voltage_protect
{
public:
  explicit Init_JointProtectConfig_l2_voltage_protect(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_voltage_recover l2_voltage_protect(::aimdk_msgs::msg::JointProtectConfig::_l2_voltage_protect_type arg)
  {
    msg_.l2_voltage_protect = std::move(arg);
    return Init_JointProtectConfig_l2_voltage_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l2_current_recover
{
public:
  explicit Init_JointProtectConfig_l2_current_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_voltage_protect l2_current_recover(::aimdk_msgs::msg::JointProtectConfig::_l2_current_recover_type arg)
  {
    msg_.l2_current_recover = std::move(arg);
    return Init_JointProtectConfig_l2_voltage_protect(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l2_current_protect
{
public:
  explicit Init_JointProtectConfig_l2_current_protect(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_current_recover l2_current_protect(::aimdk_msgs::msg::JointProtectConfig::_l2_current_protect_type arg)
  {
    msg_.l2_current_protect = std::move(arg);
    return Init_JointProtectConfig_l2_current_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l2_mos_recover
{
public:
  explicit Init_JointProtectConfig_l2_mos_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_current_protect l2_mos_recover(::aimdk_msgs::msg::JointProtectConfig::_l2_mos_recover_type arg)
  {
    msg_.l2_mos_recover = std::move(arg);
    return Init_JointProtectConfig_l2_current_protect(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l2_mos_protect
{
public:
  explicit Init_JointProtectConfig_l2_mos_protect(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_mos_recover l2_mos_protect(::aimdk_msgs::msg::JointProtectConfig::_l2_mos_protect_type arg)
  {
    msg_.l2_mos_protect = std::move(arg);
    return Init_JointProtectConfig_l2_mos_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_voltage_recover
{
public:
  explicit Init_JointProtectConfig_l1_voltage_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l2_mos_protect l1_voltage_recover(::aimdk_msgs::msg::JointProtectConfig::_l1_voltage_recover_type arg)
  {
    msg_.l1_voltage_recover = std::move(arg);
    return Init_JointProtectConfig_l2_mos_protect(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_voltage_protect
{
public:
  explicit Init_JointProtectConfig_l1_voltage_protect(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l1_voltage_recover l1_voltage_protect(::aimdk_msgs::msg::JointProtectConfig::_l1_voltage_protect_type arg)
  {
    msg_.l1_voltage_protect = std::move(arg);
    return Init_JointProtectConfig_l1_voltage_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_current_recover
{
public:
  explicit Init_JointProtectConfig_l1_current_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l1_voltage_protect l1_current_recover(::aimdk_msgs::msg::JointProtectConfig::_l1_current_recover_type arg)
  {
    msg_.l1_current_recover = std::move(arg);
    return Init_JointProtectConfig_l1_voltage_protect(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_current_protect
{
public:
  explicit Init_JointProtectConfig_l1_current_protect(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l1_current_recover l1_current_protect(::aimdk_msgs::msg::JointProtectConfig::_l1_current_protect_type arg)
  {
    msg_.l1_current_protect = std::move(arg);
    return Init_JointProtectConfig_l1_current_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_mos_recover
{
public:
  explicit Init_JointProtectConfig_l1_mos_recover(::aimdk_msgs::msg::JointProtectConfig & msg)
  : msg_(msg)
  {}
  Init_JointProtectConfig_l1_current_protect l1_mos_recover(::aimdk_msgs::msg::JointProtectConfig::_l1_mos_recover_type arg)
  {
    msg_.l1_mos_recover = std::move(arg);
    return Init_JointProtectConfig_l1_current_protect(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

class Init_JointProtectConfig_l1_mos_protect
{
public:
  Init_JointProtectConfig_l1_mos_protect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointProtectConfig_l1_mos_recover l1_mos_protect(::aimdk_msgs::msg::JointProtectConfig::_l1_mos_protect_type arg)
  {
    msg_.l1_mos_protect = std::move(arg);
    return Init_JointProtectConfig_l1_mos_recover(msg_);
  }

private:
  ::aimdk_msgs::msg::JointProtectConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JointProtectConfig>()
{
  return aimdk_msgs::msg::builder::Init_JointProtectConfig_l1_mos_protect();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__BUILDER_HPP_
