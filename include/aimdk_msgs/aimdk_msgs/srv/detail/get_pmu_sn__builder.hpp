// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetPmuSN.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_pmu_sn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPmuSN_Request_device
{
public:
  explicit Init_GetPmuSN_Request_device(::aimdk_msgs::srv::GetPmuSN_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetPmuSN_Request device(::aimdk_msgs::srv::GetPmuSN_Request::_device_type arg)
  {
    msg_.device = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuSN_Request msg_;
};

class Init_GetPmuSN_Request_request
{
public:
  Init_GetPmuSN_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPmuSN_Request_device request(::aimdk_msgs::srv::GetPmuSN_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPmuSN_Request_device(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuSN_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetPmuSN_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetPmuSN_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPmuSN_Response_serial_number
{
public:
  explicit Init_GetPmuSN_Response_serial_number(::aimdk_msgs::srv::GetPmuSN_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetPmuSN_Response serial_number(::aimdk_msgs::srv::GetPmuSN_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuSN_Response msg_;
};

class Init_GetPmuSN_Response_result
{
public:
  explicit Init_GetPmuSN_Response_result(::aimdk_msgs::srv::GetPmuSN_Response & msg)
  : msg_(msg)
  {}
  Init_GetPmuSN_Response_serial_number result(::aimdk_msgs::srv::GetPmuSN_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetPmuSN_Response_serial_number(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuSN_Response msg_;
};

class Init_GetPmuSN_Response_response
{
public:
  Init_GetPmuSN_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPmuSN_Response_result response(::aimdk_msgs::srv::GetPmuSN_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetPmuSN_Response_result(msg_);
  }

private:
  ::aimdk_msgs::srv::GetPmuSN_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetPmuSN_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetPmuSN_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__BUILDER_HPP_
