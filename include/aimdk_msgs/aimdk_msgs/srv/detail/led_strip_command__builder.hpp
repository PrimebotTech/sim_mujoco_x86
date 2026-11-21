// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/LedStripCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/led_strip_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_LedStripCommand_Request_period
{
public:
  explicit Init_LedStripCommand_Request_period(::aimdk_msgs::srv::LedStripCommand_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::LedStripCommand_Request period(::aimdk_msgs::srv::LedStripCommand_Request::_period_type arg)
  {
    msg_.period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

class Init_LedStripCommand_Request_b
{
public:
  explicit Init_LedStripCommand_Request_b(::aimdk_msgs::srv::LedStripCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedStripCommand_Request_period b(::aimdk_msgs::srv::LedStripCommand_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LedStripCommand_Request_period(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

class Init_LedStripCommand_Request_g
{
public:
  explicit Init_LedStripCommand_Request_g(::aimdk_msgs::srv::LedStripCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedStripCommand_Request_b g(::aimdk_msgs::srv::LedStripCommand_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_LedStripCommand_Request_b(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

class Init_LedStripCommand_Request_r
{
public:
  explicit Init_LedStripCommand_Request_r(::aimdk_msgs::srv::LedStripCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedStripCommand_Request_g r(::aimdk_msgs::srv::LedStripCommand_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_LedStripCommand_Request_g(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

class Init_LedStripCommand_Request_led_strip_mode
{
public:
  explicit Init_LedStripCommand_Request_led_strip_mode(::aimdk_msgs::srv::LedStripCommand_Request & msg)
  : msg_(msg)
  {}
  Init_LedStripCommand_Request_r led_strip_mode(::aimdk_msgs::srv::LedStripCommand_Request::_led_strip_mode_type arg)
  {
    msg_.led_strip_mode = std::move(arg);
    return Init_LedStripCommand_Request_r(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

class Init_LedStripCommand_Request_request
{
public:
  Init_LedStripCommand_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedStripCommand_Request_led_strip_mode request(::aimdk_msgs::srv::LedStripCommand_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LedStripCommand_Request_led_strip_mode(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::LedStripCommand_Request>()
{
  return aimdk_msgs::srv::builder::Init_LedStripCommand_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_LedStripCommand_Response_header
{
public:
  Init_LedStripCommand_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::LedStripCommand_Response header(::aimdk_msgs::srv::LedStripCommand_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::LedStripCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::LedStripCommand_Response>()
{
  return aimdk_msgs::srv::builder::Init_LedStripCommand_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__BUILDER_HPP_
