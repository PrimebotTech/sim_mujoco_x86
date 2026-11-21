// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ModuleRpcInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_RPC_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_RPC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/module_rpc_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ModuleRpcInfo_backends
{
public:
  explicit Init_ModuleRpcInfo_backends(::aimdk_msgs::msg::ModuleRpcInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ModuleRpcInfo backends(::aimdk_msgs::msg::ModuleRpcInfo::_backends_type arg)
  {
    msg_.backends = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleRpcInfo msg_;
};

class Init_ModuleRpcInfo_res_type
{
public:
  explicit Init_ModuleRpcInfo_res_type(::aimdk_msgs::msg::ModuleRpcInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleRpcInfo_backends res_type(::aimdk_msgs::msg::ModuleRpcInfo::_res_type_type arg)
  {
    msg_.res_type = std::move(arg);
    return Init_ModuleRpcInfo_backends(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleRpcInfo msg_;
};

class Init_ModuleRpcInfo_req_type
{
public:
  explicit Init_ModuleRpcInfo_req_type(::aimdk_msgs::msg::ModuleRpcInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleRpcInfo_res_type req_type(::aimdk_msgs::msg::ModuleRpcInfo::_req_type_type arg)
  {
    msg_.req_type = std::move(arg);
    return Init_ModuleRpcInfo_res_type(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleRpcInfo msg_;
};

class Init_ModuleRpcInfo_name
{
public:
  Init_ModuleRpcInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModuleRpcInfo_req_type name(::aimdk_msgs::msg::ModuleRpcInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ModuleRpcInfo_req_type(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleRpcInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ModuleRpcInfo>()
{
  return aimdk_msgs::msg::builder::Init_ModuleRpcInfo_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_RPC_INFO__BUILDER_HPP_
