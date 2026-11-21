// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetBatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_battery_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBatteryInfo_Request_request
{
public:
  Init_GetBatteryInfo_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetBatteryInfo_Request request(::aimdk_msgs::srv::GetBatteryInfo_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetBatteryInfo_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetBatteryInfo_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBatteryInfo_Response_software_version
{
public:
  explicit Init_GetBatteryInfo_Response_software_version(::aimdk_msgs::srv::GetBatteryInfo_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetBatteryInfo_Response software_version(::aimdk_msgs::srv::GetBatteryInfo_Response::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

class Init_GetBatteryInfo_Response_hardware_version
{
public:
  explicit Init_GetBatteryInfo_Response_hardware_version(::aimdk_msgs::srv::GetBatteryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetBatteryInfo_Response_software_version hardware_version(::aimdk_msgs::srv::GetBatteryInfo_Response::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_GetBatteryInfo_Response_software_version(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

class Init_GetBatteryInfo_Response_protocol_version
{
public:
  explicit Init_GetBatteryInfo_Response_protocol_version(::aimdk_msgs::srv::GetBatteryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetBatteryInfo_Response_hardware_version protocol_version(::aimdk_msgs::srv::GetBatteryInfo_Response::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_GetBatteryInfo_Response_hardware_version(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

class Init_GetBatteryInfo_Response_serial_number
{
public:
  explicit Init_GetBatteryInfo_Response_serial_number(::aimdk_msgs::srv::GetBatteryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetBatteryInfo_Response_protocol_version serial_number(::aimdk_msgs::srv::GetBatteryInfo_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_GetBatteryInfo_Response_protocol_version(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

class Init_GetBatteryInfo_Response_manufacturer
{
public:
  explicit Init_GetBatteryInfo_Response_manufacturer(::aimdk_msgs::srv::GetBatteryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetBatteryInfo_Response_serial_number manufacturer(::aimdk_msgs::srv::GetBatteryInfo_Response::_manufacturer_type arg)
  {
    msg_.manufacturer = std::move(arg);
    return Init_GetBatteryInfo_Response_serial_number(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

class Init_GetBatteryInfo_Response_response
{
public:
  Init_GetBatteryInfo_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBatteryInfo_Response_manufacturer response(::aimdk_msgs::srv::GetBatteryInfo_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetBatteryInfo_Response_manufacturer(msg_);
  }

private:
  ::aimdk_msgs::srv::GetBatteryInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetBatteryInfo_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetBatteryInfo_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__BUILDER_HPP_
