// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetPowerDown.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_power_down__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPowerDown_Request_power_reboot_interval
{
public:
  explicit Init_SetPowerDown_Request_power_reboot_interval(::aimdk_msgs::srv::SetPowerDown_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetPowerDown_Request power_reboot_interval(::aimdk_msgs::srv::SetPowerDown_Request::_power_reboot_interval_type arg)
  {
    msg_.power_reboot_interval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPowerDown_Request msg_;
};

class Init_SetPowerDown_Request_input_source
{
public:
  explicit Init_SetPowerDown_Request_input_source(::aimdk_msgs::srv::SetPowerDown_Request & msg)
  : msg_(msg)
  {}
  Init_SetPowerDown_Request_power_reboot_interval input_source(::aimdk_msgs::srv::SetPowerDown_Request::_input_source_type arg)
  {
    msg_.input_source = std::move(arg);
    return Init_SetPowerDown_Request_power_reboot_interval(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPowerDown_Request msg_;
};

class Init_SetPowerDown_Request_command
{
public:
  explicit Init_SetPowerDown_Request_command(::aimdk_msgs::srv::SetPowerDown_Request & msg)
  : msg_(msg)
  {}
  Init_SetPowerDown_Request_input_source command(::aimdk_msgs::srv::SetPowerDown_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SetPowerDown_Request_input_source(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPowerDown_Request msg_;
};

class Init_SetPowerDown_Request_request
{
public:
  Init_SetPowerDown_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPowerDown_Request_command request(::aimdk_msgs::srv::SetPowerDown_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPowerDown_Request_command(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPowerDown_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPowerDown_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetPowerDown_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPowerDown_Response_response
{
public:
  Init_SetPowerDown_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetPowerDown_Response response(::aimdk_msgs::srv::SetPowerDown_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetPowerDown_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetPowerDown_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetPowerDown_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__BUILDER_HPP_
