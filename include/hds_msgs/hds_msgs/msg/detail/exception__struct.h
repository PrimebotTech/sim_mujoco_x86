// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hds_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_NORMAL'.
/**
  * 异常类型定义#####################
  * 正常类型 该类型异常需要周期性上报
 */
enum
{
  hds_msgs__msg__Exception__TYPE_NORMAL = 0
};

/// Constant 'TYPE_TRIGGER_APPEAR'.
/**
  * 触发式异常 设置异常为产生状态
 */
enum
{
  hds_msgs__msg__Exception__TYPE_TRIGGER_APPEAR = 1
};

/// Constant 'TYPE_TRIGGER_DISAPPEAR'.
/**
  * 触发式异常 设置异常为消失状态
 */
enum
{
  hds_msgs__msg__Exception__TYPE_TRIGGER_DISAPPEAR = 2
};

// Include directives for member types
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Exception in the package hds_msgs.
/**
  * ms时间辍
 */
typedef struct hds_msgs__msg__Exception
{
  uint64_t timestamp;
  /// 异常类型
  uint8_t type;
  /// 模块ID
  uint8_t module_id;
  /// 模块异常码
  uint32_t code;
  /// 异常信息
  rosidl_runtime_c__String info;
} hds_msgs__msg__Exception;

// Struct for a sequence of hds_msgs__msg__Exception.
typedef struct hds_msgs__msg__Exception__Sequence
{
  hds_msgs__msg__Exception * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hds_msgs__msg__Exception__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_
