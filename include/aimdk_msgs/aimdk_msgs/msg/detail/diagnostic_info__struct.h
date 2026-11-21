// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/DiagnosticInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/diagnostic_type__struct.h"
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DiagnosticInfo in the package aimdk_msgs.
/**
  * ns 时间辍
 */
typedef struct aimdk_msgs__msg__DiagnosticInfo
{
  uint64_t timestamp;
  /// 异常类型
  aimdk_msgs__msg__DiagnosticType type;
  /// 模块ID
  uint8_t module_id;
  /// 模块诊断码
  uint32_t code;
  /// 模块诊断码
  uint64_t diag_code;
  /// 模块诊断信息
  rosidl_runtime_c__String info;
} aimdk_msgs__msg__DiagnosticInfo;

// Struct for a sequence of aimdk_msgs__msg__DiagnosticInfo.
typedef struct aimdk_msgs__msg__DiagnosticInfo__Sequence
{
  aimdk_msgs__msg__DiagnosticInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__DiagnosticInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_H_
