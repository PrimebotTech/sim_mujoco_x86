// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/module_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ModuleResourceInfo_sub_channels
{
public:
  explicit Init_ModuleResourceInfo_sub_channels(::aimdk_msgs::msg::ModuleResourceInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ModuleResourceInfo sub_channels(::aimdk_msgs::msg::ModuleResourceInfo::_sub_channels_type arg)
  {
    msg_.sub_channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleResourceInfo msg_;
};

class Init_ModuleResourceInfo_pub_channels
{
public:
  explicit Init_ModuleResourceInfo_pub_channels(::aimdk_msgs::msg::ModuleResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleResourceInfo_sub_channels pub_channels(::aimdk_msgs::msg::ModuleResourceInfo::_pub_channels_type arg)
  {
    msg_.pub_channels = std::move(arg);
    return Init_ModuleResourceInfo_sub_channels(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleResourceInfo msg_;
};

class Init_ModuleResourceInfo_rpc_services
{
public:
  explicit Init_ModuleResourceInfo_rpc_services(::aimdk_msgs::msg::ModuleResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleResourceInfo_pub_channels rpc_services(::aimdk_msgs::msg::ModuleResourceInfo::_rpc_services_type arg)
  {
    msg_.rpc_services = std::move(arg);
    return Init_ModuleResourceInfo_pub_channels(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleResourceInfo msg_;
};

class Init_ModuleResourceInfo_rpc_clients
{
public:
  explicit Init_ModuleResourceInfo_rpc_clients(::aimdk_msgs::msg::ModuleResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleResourceInfo_rpc_services rpc_clients(::aimdk_msgs::msg::ModuleResourceInfo::_rpc_clients_type arg)
  {
    msg_.rpc_clients = std::move(arg);
    return Init_ModuleResourceInfo_rpc_services(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleResourceInfo msg_;
};

class Init_ModuleResourceInfo_module_name
{
public:
  Init_ModuleResourceInfo_module_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModuleResourceInfo_rpc_clients module_name(::aimdk_msgs::msg::ModuleResourceInfo::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_ModuleResourceInfo_rpc_clients(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleResourceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ModuleResourceInfo>()
{
  return aimdk_msgs::msg::builder::Init_ModuleResourceInfo_module_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__BUILDER_HPP_
