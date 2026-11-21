// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetPmuFanRpm.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_PMU_FAN_RPM__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_PMU_FAN_RPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_pmu_fan_rpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPmuFanRpm_Request_request
{
public:
  Init_GetPmuFanRpm_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetPmuFanRpm_Request request(::aimdk_msgs::srv::GetPmuFanRpm_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuFanRpm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetPmuFanRpm_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetPmuFanRpm_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPmuFanRpm_Response_rpm
{
public:
  explicit Init_GetPmuFanRpm_Response_rpm(::aimdk_msgs::srv::GetPmuFanRpm_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetPmuFanRpm_Response rpm(::aimdk_msgs::srv::GetPmuFanRpm_Response::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuFanRpm_Response msg_;
};

class Init_GetPmuFanRpm_Response_result
{
public:
  explicit Init_GetPmuFanRpm_Response_result(::aimdk_msgs::srv::GetPmuFanRpm_Response & msg)
  : msg_(msg)
  {}
  Init_GetPmuFanRpm_Response_rpm result(::aimdk_msgs::srv::GetPmuFanRpm_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetPmuFanRpm_Response_rpm(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuFanRpm_Response msg_;
};

class Init_GetPmuFanRpm_Response_response
{
public:
  Init_GetPmuFanRpm_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPmuFanRpm_Response_result response(::aimdk_msgs::srv::GetPmuFanRpm_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetPmuFanRpm_Response_result(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuFanRpm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetPmuFanRpm_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetPmuFanRpm_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_PMU_FAN_RPM__BUILDER_HPP_
