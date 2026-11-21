// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetModuleInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_module_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModuleInfo_Request_module_id
{
public:
  explicit Init_GetModuleInfo_Request_module_id(::aimdk_msgs::srv::GetModuleInfo_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetModuleInfo_Request module_id(::aimdk_msgs::srv::GetModuleInfo_Request::_module_id_type arg)
  {
    msg_.module_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetModuleInfo_Request msg_;
};

class Init_GetModuleInfo_Request_request
{
public:
  Init_GetModuleInfo_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModuleInfo_Request_module_id request(::aimdk_msgs::srv::GetModuleInfo_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetModuleInfo_Request_module_id(msg_);
  }

private:
  ::aimdk_msgs::srv::GetModuleInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetModuleInfo_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetModuleInfo_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModuleInfo_Response_modules
{
public:
  explicit Init_GetModuleInfo_Response_modules(::aimdk_msgs::srv::GetModuleInfo_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetModuleInfo_Response modules(::aimdk_msgs::srv::GetModuleInfo_Response::_modules_type arg)
  {
    msg_.modules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetModuleInfo_Response msg_;
};

class Init_GetModuleInfo_Response_response
{
public:
  Init_GetModuleInfo_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModuleInfo_Response_modules response(::aimdk_msgs::srv::GetModuleInfo_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetModuleInfo_Response_modules(msg_);
  }

private:
  ::aimdk_msgs::srv::GetModuleInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetModuleInfo_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetModuleInfo_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__BUILDER_HPP_
