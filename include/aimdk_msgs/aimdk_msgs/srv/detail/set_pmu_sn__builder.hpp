// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetPmuSN.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_PMU_SN__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_PMU_SN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_pmu_sn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPmuSN_Request_serial_number
{
public:
  explicit Init_SetPmuSN_Request_serial_number(::aimdk_msgs::srv::SetPmuSN_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetPmuSN_Request serial_number(::aimdk_msgs::srv::SetPmuSN_Request::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuSN_Request msg_;
};

class Init_SetPmuSN_Request_device
{
public:
  explicit Init_SetPmuSN_Request_device(::aimdk_msgs::srv::SetPmuSN_Request & msg)
  : msg_(msg)
  {}
  Init_SetPmuSN_Request_serial_number device(::aimdk_msgs::srv::SetPmuSN_Request::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_SetPmuSN_Request_serial_number(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuSN_Request msg_;
};

class Init_SetPmuSN_Request_request
{
public:
  Init_SetPmuSN_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPmuSN_Request_device request(::aimdk_msgs::srv::SetPmuSN_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPmuSN_Request_device(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuSN_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPmuSN_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetPmuSN_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPmuSN_Response_result
{
public:
  explicit Init_SetPmuSN_Response_result(::aimdk_msgs::srv::SetPmuSN_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetPmuSN_Response result(::aimdk_msgs::srv::SetPmuSN_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuSN_Response msg_;
};

class Init_SetPmuSN_Response_response
{
public:
  Init_SetPmuSN_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPmuSN_Response_result response(::aimdk_msgs::srv::SetPmuSN_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetPmuSN_Response_result(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPmuSN_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPmuSN_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetPmuSN_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_PMU_SN__BUILDER_HPP_
