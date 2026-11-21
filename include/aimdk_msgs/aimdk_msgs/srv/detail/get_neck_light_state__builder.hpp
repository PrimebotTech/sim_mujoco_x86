// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetNeckLightState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_neck_light_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNeckLightState_Request_request
{
public:
  Init_GetNeckLightState_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetNeckLightState_Request request(::aimdk_msgs::srv::GetNeckLightState_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetNeckLightState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetNeckLightState_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetNeckLightState_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNeckLightState_Response_brightness
{
public:
  explicit Init_GetNeckLightState_Response_brightness(::aimdk_msgs::srv::GetNeckLightState_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetNeckLightState_Response brightness(::aimdk_msgs::srv::GetNeckLightState_Response::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetNeckLightState_Response msg_;
};

class Init_GetNeckLightState_Response_enable
{
public:
  explicit Init_GetNeckLightState_Response_enable(::aimdk_msgs::srv::GetNeckLightState_Response & msg)
  : msg_(msg)
  {}
  Init_GetNeckLightState_Response_brightness enable(::aimdk_msgs::srv::GetNeckLightState_Response::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_GetNeckLightState_Response_brightness(msg_);
  }

private:
  ::aimdk_msgs::srv::GetNeckLightState_Response msg_;
};

class Init_GetNeckLightState_Response_header
{
public:
  Init_GetNeckLightState_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNeckLightState_Response_enable header(::aimdk_msgs::srv::GetNeckLightState_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetNeckLightState_Response_enable(msg_);
  }

private:
  ::aimdk_msgs::srv::GetNeckLightState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetNeckLightState_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetNeckLightState_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__BUILDER_HPP_
