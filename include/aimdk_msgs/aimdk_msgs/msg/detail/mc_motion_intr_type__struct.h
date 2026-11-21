// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMotionIntrType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTR_NO'.
/**
  * 不支持打断
 */
enum
{
  aimdk_msgs__msg__McMotionIntrType__INTR_NO = 0l
};

/// Constant 'INTR_FREE'.
/**
  * 自由打断，任意时刻
 */
enum
{
  aimdk_msgs__msg__McMotionIntrType__INTR_FREE = 1l
};

/// Constant 'INTR_BREAKPOINT'.
/**
  * 断点打断
 */
enum
{
  aimdk_msgs__msg__McMotionIntrType__INTR_BREAKPOINT = 2l
};

/// Struct defined in msg/McMotionIntrType in the package aimdk_msgs.
/**
  * 定义枚举字段
 */
typedef struct aimdk_msgs__msg__McMotionIntrType
{
  int32_t value;
} aimdk_msgs__msg__McMotionIntrType;

// Struct for a sequence of aimdk_msgs__msg__McMotionIntrType.
typedef struct aimdk_msgs__msg__McMotionIntrType__Sequence
{
  aimdk_msgs__msg__McMotionIntrType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMotionIntrType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_TYPE__STRUCT_H_
