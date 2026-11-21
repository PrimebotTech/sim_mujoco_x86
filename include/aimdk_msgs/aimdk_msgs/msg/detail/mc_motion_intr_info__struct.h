// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMotionIntrInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'intr_type'
#include "aimdk_msgs/msg/detail/mc_motion_intr_type__struct.h"
// Member 'breakpoint_steps'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/McMotionIntrInfo in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 动作断点信息
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McMotionIntrInfo
{
  /// 打断类型
  aimdk_msgs__msg__McMotionIntrType intr_type;
  /// 断点列表
  rosidl_runtime_c__int32__Sequence breakpoint_steps;
} aimdk_msgs__msg__McMotionIntrInfo;

// Struct for a sequence of aimdk_msgs__msg__McMotionIntrInfo.
typedef struct aimdk_msgs__msg__McMotionIntrInfo__Sequence
{
  aimdk_msgs__msg__McMotionIntrInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMotionIntrInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_H_
