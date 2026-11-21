// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetHalRgbdPowerSave.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_hal_rgbd_power_save__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHalRgbdPowerSave_Request_trigger_reason
{
public:
  explicit Init_SetHalRgbdPowerSave_Request_trigger_reason(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Request trigger_reason(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request::_trigger_reason_type arg)
  {
    msg_.trigger_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Request msg_;
};

class Init_SetHalRgbdPowerSave_Request_trigger_type
{
public:
  explicit Init_SetHalRgbdPowerSave_Request_trigger_type(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request & msg)
  : msg_(msg)
  {}
  Init_SetHalRgbdPowerSave_Request_trigger_reason trigger_type(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request::_trigger_type_type arg)
  {
    msg_.trigger_type = std::move(arg);
    return Init_SetHalRgbdPowerSave_Request_trigger_reason(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Request msg_;
};

class Init_SetHalRgbdPowerSave_Request_camera_mask
{
public:
  explicit Init_SetHalRgbdPowerSave_Request_camera_mask(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request & msg)
  : msg_(msg)
  {}
  Init_SetHalRgbdPowerSave_Request_trigger_type camera_mask(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request::_camera_mask_type arg)
  {
    msg_.camera_mask = std::move(arg);
    return Init_SetHalRgbdPowerSave_Request_trigger_type(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Request msg_;
};

class Init_SetHalRgbdPowerSave_Request_request
{
public:
  Init_SetHalRgbdPowerSave_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHalRgbdPowerSave_Request_camera_mask request(::aimdk_msgs::srv::SetHalRgbdPowerSave_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetHalRgbdPowerSave_Request_camera_mask(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetHalRgbdPowerSave_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetHalRgbdPowerSave_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHalRgbdPowerSave_Response_response
{
public:
  Init_SetHalRgbdPowerSave_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Response response(::aimdk_msgs::srv::SetHalRgbdPowerSave_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalRgbdPowerSave_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetHalRgbdPowerSave_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetHalRgbdPowerSave_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__BUILDER_HPP_
