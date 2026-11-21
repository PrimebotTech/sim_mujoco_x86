// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aimdk_msgs/msg/detail/module_resource_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aimdk_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ModuleResourceInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aimdk_msgs::msg::ModuleResourceInfo(_init);
}

void ModuleResourceInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aimdk_msgs::msg::ModuleResourceInfo *>(message_memory);
  typed_message->~ModuleResourceInfo();
}

size_t size_function__ModuleResourceInfo__rpc_clients(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModuleResourceInfo__rpc_clients(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ModuleResourceInfo__rpc_clients(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModuleResourceInfo__rpc_clients(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::ModuleRpcInfo *>(
    get_const_function__ModuleResourceInfo__rpc_clients(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::ModuleRpcInfo *>(untyped_value);
  value = item;
}

void assign_function__ModuleResourceInfo__rpc_clients(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::ModuleRpcInfo *>(
    get_function__ModuleResourceInfo__rpc_clients(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::ModuleRpcInfo *>(untyped_value);
  item = value;
}

void resize_function__ModuleResourceInfo__rpc_clients(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ModuleResourceInfo__rpc_services(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModuleResourceInfo__rpc_services(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ModuleResourceInfo__rpc_services(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModuleResourceInfo__rpc_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::ModuleRpcInfo *>(
    get_const_function__ModuleResourceInfo__rpc_services(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::ModuleRpcInfo *>(untyped_value);
  value = item;
}

void assign_function__ModuleResourceInfo__rpc_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::ModuleRpcInfo *>(
    get_function__ModuleResourceInfo__rpc_services(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::ModuleRpcInfo *>(untyped_value);
  item = value;
}

void resize_function__ModuleResourceInfo__rpc_services(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleRpcInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ModuleResourceInfo__pub_channels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModuleResourceInfo__pub_channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ModuleResourceInfo__pub_channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModuleResourceInfo__pub_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::ModuleChannelInfo *>(
    get_const_function__ModuleResourceInfo__pub_channels(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::ModuleChannelInfo *>(untyped_value);
  value = item;
}

void assign_function__ModuleResourceInfo__pub_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::ModuleChannelInfo *>(
    get_function__ModuleResourceInfo__pub_channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::ModuleChannelInfo *>(untyped_value);
  item = value;
}

void resize_function__ModuleResourceInfo__pub_channels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ModuleResourceInfo__sub_channels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModuleResourceInfo__sub_channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ModuleResourceInfo__sub_channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModuleResourceInfo__sub_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::ModuleChannelInfo *>(
    get_const_function__ModuleResourceInfo__sub_channels(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::ModuleChannelInfo *>(untyped_value);
  value = item;
}

void assign_function__ModuleResourceInfo__sub_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::ModuleChannelInfo *>(
    get_function__ModuleResourceInfo__sub_channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::ModuleChannelInfo *>(untyped_value);
  item = value;
}

void resize_function__ModuleResourceInfo__sub_channels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::ModuleChannelInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ModuleResourceInfo_message_member_array[5] = {
  {
    "module_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::ModuleResourceInfo, module_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpc_clients",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::ModuleRpcInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::ModuleResourceInfo, rpc_clients),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModuleResourceInfo__rpc_clients,  // size() function pointer
    get_const_function__ModuleResourceInfo__rpc_clients,  // get_const(index) function pointer
    get_function__ModuleResourceInfo__rpc_clients,  // get(index) function pointer
    fetch_function__ModuleResourceInfo__rpc_clients,  // fetch(index, &value) function pointer
    assign_function__ModuleResourceInfo__rpc_clients,  // assign(index, value) function pointer
    resize_function__ModuleResourceInfo__rpc_clients  // resize(index) function pointer
  },
  {
    "rpc_services",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::ModuleRpcInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::ModuleResourceInfo, rpc_services),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModuleResourceInfo__rpc_services,  // size() function pointer
    get_const_function__ModuleResourceInfo__rpc_services,  // get_const(index) function pointer
    get_function__ModuleResourceInfo__rpc_services,  // get(index) function pointer
    fetch_function__ModuleResourceInfo__rpc_services,  // fetch(index, &value) function pointer
    assign_function__ModuleResourceInfo__rpc_services,  // assign(index, value) function pointer
    resize_function__ModuleResourceInfo__rpc_services  // resize(index) function pointer
  },
  {
    "pub_channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::ModuleChannelInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::ModuleResourceInfo, pub_channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModuleResourceInfo__pub_channels,  // size() function pointer
    get_const_function__ModuleResourceInfo__pub_channels,  // get_const(index) function pointer
    get_function__ModuleResourceInfo__pub_channels,  // get(index) function pointer
    fetch_function__ModuleResourceInfo__pub_channels,  // fetch(index, &value) function pointer
    assign_function__ModuleResourceInfo__pub_channels,  // assign(index, value) function pointer
    resize_function__ModuleResourceInfo__pub_channels  // resize(index) function pointer
  },
  {
    "sub_channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::ModuleChannelInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::ModuleResourceInfo, sub_channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModuleResourceInfo__sub_channels,  // size() function pointer
    get_const_function__ModuleResourceInfo__sub_channels,  // get_const(index) function pointer
    get_function__ModuleResourceInfo__sub_channels,  // get(index) function pointer
    fetch_function__ModuleResourceInfo__sub_channels,  // fetch(index, &value) function pointer
    assign_function__ModuleResourceInfo__sub_channels,  // assign(index, value) function pointer
    resize_function__ModuleResourceInfo__sub_channels  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ModuleResourceInfo_message_members = {
  "aimdk_msgs::msg",  // message namespace
  "ModuleResourceInfo",  // message name
  5,  // number of fields
  sizeof(aimdk_msgs::msg::ModuleResourceInfo),
  ModuleResourceInfo_message_member_array,  // message members
  ModuleResourceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ModuleResourceInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ModuleResourceInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ModuleResourceInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aimdk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aimdk_msgs::msg::ModuleResourceInfo>()
{
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::ModuleResourceInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aimdk_msgs, msg, ModuleResourceInfo)() {
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::ModuleResourceInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
