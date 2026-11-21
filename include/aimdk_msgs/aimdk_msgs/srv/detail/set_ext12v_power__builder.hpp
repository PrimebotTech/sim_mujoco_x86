// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetExt12vPower.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_EXT12V_POWER__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_EXT12V_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_ext12v_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetExt12vPower_Request_enable
{
public:
  explicit Init_SetExt12vPower_Request_enable(::aimdk_msgs::srv::SetExt12vPower_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetExt12vPower_Request enable(::aimdk_msgs::srv::SetExt12vPower_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetExt12vPower_Request msg_;
};

class Init_SetExt12vPower_Request_request
{
public:
  Init_SetExt12vPower_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExt12vPower_Request_enable request(::aimdk_msgs::srv::SetExt12vPower_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetExt12vPower_Request_enable(msg_);
  }

private:
  ::aimdk_msgs::srv::SetExt12vPower_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetExt12vPower_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetExt12vPower_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetExt12vPower_Response_response
{
public:
  Init_SetExt12vPower_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetExt12vPower_Response response(::aimdk_msgs::srv::SetExt12vPower_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetExt12vPower_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetExt12vPower_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetExt12vPower_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_EXT12V_POWER__BUILDER_HPP_
