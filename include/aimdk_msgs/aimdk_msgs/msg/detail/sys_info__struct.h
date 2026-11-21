// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/SysInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SYS_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__SYS_INFO__STRUCT_H_

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

/// Struct defined in msg/SysInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__SysInfo
{
  /// 数据头
  aimdk_msgs__msg__MessageHeader header;
  /// ORIN 温度信息
  /// cpu温度
  float soc1_cpu_temperature;
} aimdk_msgs__msg__SysInfo;

// Struct for a sequence of aimdk_msgs__msg__SysInfo.
typedef struct aimdk_msgs__msg__SysInfo__Sequence
{
  aimdk_msgs__msg__SysInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__SysInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__SYS_INFO__STRUCT_H_
