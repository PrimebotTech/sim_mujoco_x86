// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JointInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/joint_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointInfo_protect_config
{
public:
  explicit Init_JointInfo_protect_config(::aimdk_msgs::msg::JointInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JointInfo protect_config(::aimdk_msgs::msg::JointInfo::_protect_config_type arg)
  {
    msg_.protect_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

class Init_JointInfo_mit_params
{
public:
  explicit Init_JointInfo_mit_params(::aimdk_msgs::msg::JointInfo & msg)
  : msg_(msg)
  {}
  Init_JointInfo_protect_config mit_params(::aimdk_msgs::msg::JointInfo::_mit_params_type arg)
  {
    msg_.mit_params = std::move(arg);
    return Init_JointInfo_protect_config(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

class Init_JointInfo_mode
{
public:
  explicit Init_JointInfo_mode(::aimdk_msgs::msg::JointInfo & msg)
  : msg_(msg)
  {}
  Init_JointInfo_mit_params mode(::aimdk_msgs::msg::JointInfo::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointInfo_mit_params(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

class Init_JointInfo_software_version
{
public:
  explicit Init_JointInfo_software_version(::aimdk_msgs::msg::JointInfo & msg)
  : msg_(msg)
  {}
  Init_JointInfo_mode software_version(::aimdk_msgs::msg::JointInfo::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_JointInfo_mode(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

class Init_JointInfo_hardware_version
{
public:
  explicit Init_JointInfo_hardware_version(::aimdk_msgs::msg::JointInfo & msg)
  : msg_(msg)
  {}
  Init_JointInfo_software_version hardware_version(::aimdk_msgs::msg::JointInfo::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_JointInfo_software_version(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

class Init_JointInfo_name
{
public:
  Init_JointInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointInfo_hardware_version name(::aimdk_msgs::msg::JointInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointInfo_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JointInfo>()
{
  return aimdk_msgs::msg::builder::Init_JointInfo_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__BUILDER_HPP_
