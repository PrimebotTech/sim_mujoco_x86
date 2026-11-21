// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetJointPowerState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_JOINT_POWER_STATE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_JOINT_POWER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_joint_power_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPowerState_Request_request
{
public:
  Init_GetJointPowerState_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetJointPowerState_Request request(::aimdk_msgs::srv::GetJointPowerState_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetJointPowerState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetJointPowerState_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetJointPowerState_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPowerState_Response_power_state
{
public:
  explicit Init_GetJointPowerState_Response_power_state(::aimdk_msgs::srv::GetJointPowerState_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetJointPowerState_Response power_state(::aimdk_msgs::srv::GetJointPowerState_Response::_power_state_type arg)
  {
    msg_.power_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetJointPowerState_Response msg_;
};

class Init_GetJointPowerState_Response_header
{
public:
  Init_GetJointPowerState_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointPowerState_Response_power_state header(::aimdk_msgs::srv::GetJointPowerState_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetJointPowerState_Response_power_state(msg_);
  }

private:
  ::aimdk_msgs::srv::GetJointPowerState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetJointPowerState_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetJointPowerState_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_JOINT_POWER_STATE__BUILDER_HPP_
