// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetPmuFanDuty.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_PMU_FAN_DUTY__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_PMU_FAN_DUTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_pmu_fan_duty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPmuFanDuty_Request_duty
{
public:
  explicit Init_SetPmuFanDuty_Request_duty(::aimdk_msgs::srv::SetPmuFanDuty_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetPmuFanDuty_Request duty(::aimdk_msgs::srv::SetPmuFanDuty_Request::_duty_type arg)
  {
    msg_.duty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuFanDuty_Request msg_;
};

class Init_SetPmuFanDuty_Request_request
{
public:
  Init_SetPmuFanDuty_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPmuFanDuty_Request_duty request(::aimdk_msgs::srv::SetPmuFanDuty_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPmuFanDuty_Request_duty(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuFanDuty_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPmuFanDuty_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetPmuFanDuty_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPmuFanDuty_Response_result
{
public:
  explicit Init_SetPmuFanDuty_Response_result(::aimdk_msgs::srv::SetPmuFanDuty_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetPmuFanDuty_Response result(::aimdk_msgs::srv::SetPmuFanDuty_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuFanDuty_Response msg_;
};

class Init_SetPmuFanDuty_Response_response
{
public:
  Init_SetPmuFanDuty_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPmuFanDuty_Response_result response(::aimdk_msgs::srv::SetPmuFanDuty_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetPmuFanDuty_Response_result(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuFanDuty_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPmuFanDuty_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetPmuFanDuty_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_PMU_FAN_DUTY__BUILDER_HPP_
