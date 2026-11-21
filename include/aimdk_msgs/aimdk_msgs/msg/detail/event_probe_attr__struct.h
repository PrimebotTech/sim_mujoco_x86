// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/EventProbeAttr.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EA_TYPE_DOUBLE'.
enum
{
  aimdk_msgs__msg__EventProbeAttr__EA_TYPE_DOUBLE = 0
};

/// Constant 'EA_TYPE_INT'.
enum
{
  aimdk_msgs__msg__EventProbeAttr__EA_TYPE_INT = 1
};

/// Constant 'EA_TYPE_STRING'.
enum
{
  aimdk_msgs__msg__EventProbeAttr__EA_TYPE_STRING = 2
};

/// Constant 'EA_TYPE_BOOL'.
enum
{
  aimdk_msgs__msg__EventProbeAttr__EA_TYPE_BOOL = 3
};

// Include directives for member types
// Member 'key'
// Member 'value_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EventProbeAttr in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__EventProbeAttr
{
  /// key
  rosidl_runtime_c__String key;
  /// 根据类型解析具体的数据
  uint8_t type;
  /// 以下几种类型数据的值只会存在一个
  /// 整形数据
  int64_t value_int;
  /// 浮点型数据
  double value_double;
  /// 字符串类型数据
  rosidl_runtime_c__String value_string;
  /// 布尔类型数据
  bool value_bool;
} aimdk_msgs__msg__EventProbeAttr;

// Struct for a sequence of aimdk_msgs__msg__EventProbeAttr.
typedef struct aimdk_msgs__msg__EventProbeAttr__Sequence
{
  aimdk_msgs__msg__EventProbeAttr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__EventProbeAttr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_H_
