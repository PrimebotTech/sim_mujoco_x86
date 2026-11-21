// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetNeckLight.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_NECK_LIGHT__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_NECK_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_neck_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetNeckLight_Request_brightness
{
public:
  explicit Init_SetNeckLight_Request_brightness(::aimdk_msgs::srv::SetNeckLight_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetNeckLight_Request brightness(::aimdk_msgs::srv::SetNeckLight_Request::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetNeckLight_Request msg_;
};

class Init_SetNeckLight_Request_enable
{
public:
  explicit Init_SetNeckLight_Request_enable(::aimdk_msgs::srv::SetNeckLight_Request & msg)
  : msg_(msg)
  {}
  Init_SetNeckLight_Request_brightness enable(::aimdk_msgs::srv::SetNeckLight_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_SetNeckLight_Request_brightness(msg_);
  }

private:
  ::aimdk_msgs::srv::SetNeckLight_Request msg_;
};

class Init_SetNeckLight_Request_request
{
public:
  Init_SetNeckLight_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNeckLight_Request_enable request(::aimdk_msgs::srv::SetNeckLight_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetNeckLight_Request_enable(msg_);
  }

private:
  ::aimdk_msgs::srv::SetNeckLight_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetNeckLight_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetNeckLight_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetNeckLight_Response_header
{
public:
  Init_SetNeckLight_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetNeckLight_Response header(::aimdk_msgs::srv::SetNeckLight_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetNeckLight_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetNeckLight_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetNeckLight_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_NECK_LIGHT__BUILDER_HPP_
