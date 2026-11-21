// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ModuleInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'module_id'
#include "rosidl_runtime_c/string.h"
// Member 'info'
#include "aimdk_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/ModuleInfo in the package aimdk_msgs.
/**
  * --------------------------------------------------------------------------------------------------------------
  * 模块信息 (ModuleInfo)
  *
  * 字段说明:
  *   header:    消息头 (时间戳、坐标系、序列号等)
  *   module_id: 模块唯一标识符
  *   info:      模块属性键值对列表
  *
  * --------------------------------------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__ModuleInfo
{
  /// 消息头信息
  aimdk_msgs__msg__MessageHeader header;
  /// 模块唯一ID
  rosidl_runtime_c__String module_id;
  /// 模块信息键值对列表
  aimdk_msgs__msg__KeyValue__Sequence info;
} aimdk_msgs__msg__ModuleInfo;

// Struct for a sequence of aimdk_msgs__msg__ModuleInfo.
typedef struct aimdk_msgs__msg__ModuleInfo__Sequence
{
  aimdk_msgs__msg__ModuleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ModuleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__STRUCT_H_
