// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServo_Request_speed
{
public:
  explicit Init_SetServo_Request_speed(::aimdk_msgs::srv::SetServo_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetServo_Request speed(::aimdk_msgs::srv::SetServo_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetServo_Request msg_;
};

class Init_SetServo_Request_position
{
public:
  explicit Init_SetServo_Request_position(::aimdk_msgs::srv::SetServo_Request & msg)
  : msg_(msg)
  {}
  Init_SetServo_Request_speed position(::aimdk_msgs::srv::SetServo_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetServo_Request_speed(msg_);
  }

private:
  ::aimdk_msgs::srv::SetServo_Request msg_;
};

class Init_SetServo_Request_request
{
public:
  Init_SetServo_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServo_Request_position request(::aimdk_msgs::srv::SetServo_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetServo_Request_position(msg_);
  }

private:
  ::aimdk_msgs::srv::SetServo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetServo_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetServo_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServo_Response_header
{
public:
  Init_SetServo_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetServo_Response header(::aimdk_msgs::srv::SetServo_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetServo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetServo_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetServo_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_
