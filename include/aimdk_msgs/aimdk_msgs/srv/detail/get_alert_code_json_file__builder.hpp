// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetAlertCodeJsonFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_alert_code_json_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAlertCodeJsonFile_Request_header
{
public:
  Init_GetAlertCodeJsonFile_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetAlertCodeJsonFile_Request header(::aimdk_msgs::srv::GetAlertCodeJsonFile_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetAlertCodeJsonFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetAlertCodeJsonFile_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetAlertCodeJsonFile_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAlertCodeJsonFile_Response_alert_code_json
{
public:
  explicit Init_GetAlertCodeJsonFile_Response_alert_code_json(::aimdk_msgs::srv::GetAlertCodeJsonFile_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetAlertCodeJsonFile_Response alert_code_json(::aimdk_msgs::srv::GetAlertCodeJsonFile_Response::_alert_code_json_type arg)
  {
    msg_.alert_code_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetAlertCodeJsonFile_Response msg_;
};

class Init_GetAlertCodeJsonFile_Response_header
{
public:
  Init_GetAlertCodeJsonFile_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAlertCodeJsonFile_Response_alert_code_json header(::aimdk_msgs::srv::GetAlertCodeJsonFile_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetAlertCodeJsonFile_Response_alert_code_json(msg_);
  }

private:
  ::aimdk_msgs::srv::GetAlertCodeJsonFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetAlertCodeJsonFile_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetAlertCodeJsonFile_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__BUILDER_HPP_
