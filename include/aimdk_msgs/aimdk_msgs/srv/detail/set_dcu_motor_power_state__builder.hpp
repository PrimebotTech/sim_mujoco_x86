// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetDcuMotorPowerState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_dcu_motor_power_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDcuMotorPowerState_Request_state
{
public:
  explicit Init_SetDcuMotorPowerState_Request_state(::aimdk_msgs::srv::SetDcuMotorPowerState_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Request state(::aimdk_msgs::srv::SetDcuMotorPowerState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Request msg_;
};

class Init_SetDcuMotorPowerState_Request_dcu_type
{
public:
  explicit Init_SetDcuMotorPowerState_Request_dcu_type(::aimdk_msgs::srv::SetDcuMotorPowerState_Request & msg)
  : msg_(msg)
  {}
  Init_SetDcuMotorPowerState_Request_state dcu_type(::aimdk_msgs::srv::SetDcuMotorPowerState_Request::_dcu_type_type arg)
  {
    msg_.dcu_type = std::move(arg);
    return Init_SetDcuMotorPowerState_Request_state(msg_);
  }

private:
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Request msg_;
};

class Init_SetDcuMotorPowerState_Request_request
{
public:
  Init_SetDcuMotorPowerState_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDcuMotorPowerState_Request_dcu_type request(::aimdk_msgs::srv::SetDcuMotorPowerState_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetDcuMotorPowerState_Request_dcu_type(msg_);
  }

private:
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetDcuMotorPowerState_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetDcuMotorPowerState_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDcuMotorPowerState_Response_ret
{
public:
  explicit Init_SetDcuMotorPowerState_Response_ret(::aimdk_msgs::srv::SetDcuMotorPowerState_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Response ret(::aimdk_msgs::srv::SetDcuMotorPowerState_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Response msg_;
};

class Init_SetDcuMotorPowerState_Response_response
{
public:
  Init_SetDcuMotorPowerState_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDcuMotorPowerState_Response_ret response(::aimdk_msgs::srv::SetDcuMotorPowerState_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetDcuMotorPowerState_Response_ret(msg_);
  }

private:
  ::aimdk_msgs::srv::SetDcuMotorPowerState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetDcuMotorPowerState_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetDcuMotorPowerState_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__BUILDER_HPP_
