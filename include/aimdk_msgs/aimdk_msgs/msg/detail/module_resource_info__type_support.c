// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/module_resource_info__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/module_resource_info__functions.h"
#include "aimdk_msgs/msg/detail/module_resource_info__struct.h"


// Include directives for member types
// Member `module_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `rpc_clients`
// Member `rpc_services`
#include "aimdk_msgs/msg/module_rpc_info.h"
// Member `rpc_clients`
// Member `rpc_services`
#include "aimdk_msgs/msg/detail/module_rpc_info__rosidl_typesupport_introspection_c.h"
// Member `pub_channels`
// Member `sub_channels`
#include "aimdk_msgs/msg/module_channel_info.h"
// Member `pub_channels`
// Member `sub_channels`
#include "aimdk_msgs/msg/detail/module_channel_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__ModuleResourceInfo__init(message_memory);
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_fini_function(void * message_memory)
{
  aimdk_msgs__msg__ModuleResourceInfo__fini(message_memory);
}

size_t aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__rpc_clients(
  const void * untyped_member)
{
  const aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_clients(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_clients(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__rpc_clients(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__ModuleRpcInfo * item =
    ((const aimdk_msgs__msg__ModuleRpcInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_clients(untyped_member, index));
  aimdk_msgs__msg__ModuleRpcInfo * value =
    (aimdk_msgs__msg__ModuleRpcInfo *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__rpc_clients(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__ModuleRpcInfo * item =
    ((aimdk_msgs__msg__ModuleRpcInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_clients(untyped_member, index));
  const aimdk_msgs__msg__ModuleRpcInfo * value =
    (const aimdk_msgs__msg__ModuleRpcInfo *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__rpc_clients(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(member);
  return aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__rpc_services(
  const void * untyped_member)
{
  const aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_services(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_services(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__rpc_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__ModuleRpcInfo * item =
    ((const aimdk_msgs__msg__ModuleRpcInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_services(untyped_member, index));
  aimdk_msgs__msg__ModuleRpcInfo * value =
    (aimdk_msgs__msg__ModuleRpcInfo *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__rpc_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__ModuleRpcInfo * item =
    ((aimdk_msgs__msg__ModuleRpcInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_services(untyped_member, index));
  const aimdk_msgs__msg__ModuleRpcInfo * value =
    (const aimdk_msgs__msg__ModuleRpcInfo *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__rpc_services(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__ModuleRpcInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleRpcInfo__Sequence *)(untyped_member);
  aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(member);
  return aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__pub_channels(
  const void * untyped_member)
{
  const aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__pub_channels(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__pub_channels(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__pub_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__ModuleChannelInfo * item =
    ((const aimdk_msgs__msg__ModuleChannelInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__pub_channels(untyped_member, index));
  aimdk_msgs__msg__ModuleChannelInfo * value =
    (aimdk_msgs__msg__ModuleChannelInfo *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__pub_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__ModuleChannelInfo * item =
    ((aimdk_msgs__msg__ModuleChannelInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__pub_channels(untyped_member, index));
  const aimdk_msgs__msg__ModuleChannelInfo * value =
    (const aimdk_msgs__msg__ModuleChannelInfo *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__pub_channels(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(member);
  return aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__sub_channels(
  const void * untyped_member)
{
  const aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__sub_channels(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (const aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__sub_channels(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__sub_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__ModuleChannelInfo * item =
    ((const aimdk_msgs__msg__ModuleChannelInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__sub_channels(untyped_member, index));
  aimdk_msgs__msg__ModuleChannelInfo * value =
    (aimdk_msgs__msg__ModuleChannelInfo *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__sub_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__ModuleChannelInfo * item =
    ((aimdk_msgs__msg__ModuleChannelInfo *)
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__sub_channels(untyped_member, index));
  const aimdk_msgs__msg__ModuleChannelInfo * value =
    (const aimdk_msgs__msg__ModuleChannelInfo *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__sub_channels(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * member =
    (aimdk_msgs__msg__ModuleChannelInfo__Sequence *)(untyped_member);
  aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(member);
  return aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array[5] = {
  {
    "module_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ModuleResourceInfo, module_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpc_clients",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ModuleResourceInfo, rpc_clients),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__rpc_clients,  // size() function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_clients,  // get_const(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_clients,  // get(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__rpc_clients,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__rpc_clients,  // assign(index, value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__rpc_clients  // resize(index) function pointer
  },
  {
    "rpc_services",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ModuleResourceInfo, rpc_services),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__rpc_services,  // size() function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__rpc_services,  // get_const(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__rpc_services,  // get(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__rpc_services,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__rpc_services,  // assign(index, value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__rpc_services  // resize(index) function pointer
  },
  {
    "pub_channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ModuleResourceInfo, pub_channels),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__pub_channels,  // size() function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__pub_channels,  // get_const(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__pub_channels,  // get(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__pub_channels,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__pub_channels,  // assign(index, value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__pub_channels  // resize(index) function pointer
  },
  {
    "sub_channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ModuleResourceInfo, sub_channels),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__size_function__ModuleResourceInfo__sub_channels,  // size() function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ModuleResourceInfo__sub_channels,  // get_const(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__get_function__ModuleResourceInfo__sub_channels,  // get(index) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ModuleResourceInfo__sub_channels,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__assign_function__ModuleResourceInfo__sub_channels,  // assign(index, value) function pointer
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__resize_function__ModuleResourceInfo__sub_channels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "ModuleResourceInfo",  // message name
  5,  // number of fields
  sizeof(aimdk_msgs__msg__ModuleResourceInfo),
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array,  // message members
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ModuleResourceInfo)() {
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ModuleRpcInfo)();
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ModuleRpcInfo)();
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ModuleChannelInfo)();
  aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ModuleChannelInfo)();
  if (!aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__ModuleResourceInfo__rosidl_typesupport_introspection_c__ModuleResourceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
