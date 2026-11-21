// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package aimdk_msgs.
/**
  * --------------------------------------------------------------------------------------------------------------
  * 通用键值对
  * 说明:
  *   - key: 唯一/语义字段名
  *   - value: 文本值；需要结构化可放 JSON 片段
  * --------------------------------------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} aimdk_msgs__msg__KeyValue;

// Struct for a sequence of aimdk_msgs__msg__KeyValue.
typedef struct aimdk_msgs__msg__KeyValue__Sequence
{
  aimdk_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
