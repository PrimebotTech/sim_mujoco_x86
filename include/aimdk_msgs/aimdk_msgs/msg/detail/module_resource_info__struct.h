// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module_name'
#include "rosidl_runtime_c/string.h"
// Member 'rpc_clients'
// Member 'rpc_services'
#include "aimdk_msgs/msg/detail/module_rpc_info__struct.h"
// Member 'pub_channels'
// Member 'sub_channels'
#include "aimdk_msgs/msg/detail/module_channel_info__struct.h"

/// Struct defined in msg/ModuleResourceInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__ModuleResourceInfo
{
  rosidl_runtime_c__String module_name;
  /// 模块rpc客户端信息
  aimdk_msgs__msg__ModuleRpcInfo__Sequence rpc_clients;
  /// 模块service channel信息
  aimdk_msgs__msg__ModuleRpcInfo__Sequence rpc_services;
  /// 模块pub channel信息
  aimdk_msgs__msg__ModuleChannelInfo__Sequence pub_channels;
  /// 模块sub channel信息
  aimdk_msgs__msg__ModuleChannelInfo__Sequence sub_channels;
} aimdk_msgs__msg__ModuleResourceInfo;

// Struct for a sequence of aimdk_msgs__msg__ModuleResourceInfo.
typedef struct aimdk_msgs__msg__ModuleResourceInfo__Sequence
{
  aimdk_msgs__msg__ModuleResourceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ModuleResourceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_H_
