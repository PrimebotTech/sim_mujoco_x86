// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/DiagnosticType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
/**
  * 正常类型 该类型异常需要周期性上报
 */
enum
{
  aimdk_msgs__msg__DiagnosticType__NORMAL = 0l
};

/// Constant 'TRIGGER_APPEAR'.
/**
  * 触发式异常 设置异常为产生状态
 */
enum
{
  aimdk_msgs__msg__DiagnosticType__TRIGGER_APPEAR = 1l
};

/// Constant 'TRIGGER_DISAPPEAR'.
/**
  * 触发式异常 设置异常为消失状态
 */
enum
{
  aimdk_msgs__msg__DiagnosticType__TRIGGER_DISAPPEAR = 2l
};

/// Struct defined in msg/DiagnosticType in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__DiagnosticType
{
  int32_t value;
} aimdk_msgs__msg__DiagnosticType;

// Struct for a sequence of aimdk_msgs__msg__DiagnosticType.
typedef struct aimdk_msgs__msg__DiagnosticType__Sequence
{
  aimdk_msgs__msg__DiagnosticType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__DiagnosticType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_TYPE__STRUCT_H_
