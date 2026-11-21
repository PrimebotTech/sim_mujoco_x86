// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetJointPower.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_joint_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointPower_Request_command
{
public:
  explicit Init_SetJointPower_Request_command(::aimdk_msgs::srv::SetJointPower_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetJointPower_Request command(::aimdk_msgs::srv::SetJointPower_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetJointPower_Request msg_;
};

class Init_SetJointPower_Request_input_source
{
public:
  explicit Init_SetJointPower_Request_input_source(::aimdk_msgs::srv::SetJointPower_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPower_Request_command input_source(::aimdk_msgs::srv::SetJointPower_Request::_input_source_type arg)
  {
    msg_.input_source = std::move(arg);
    return Init_SetJointPower_Request_command(msg_);
  }

private:
  ::aimdk_msgs::srv::SetJointPower_Request msg_;
};

class Init_SetJointPower_Request_request
{
public:
  Init_SetJointPower_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPower_Request_input_source request(::aimdk_msgs::srv::SetJointPower_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointPower_Request_input_source(msg_);
  }

private:
  ::aimdk_msgs::srv::SetJointPower_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetJointPower_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetJointPower_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointPower_Response_header
{
public:
  Init_SetJointPower_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetJointPower_Response header(::aimdk_msgs::srv::SetJointPower_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetJointPower_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetJointPower_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetJointPower_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__BUILDER_HPP_
