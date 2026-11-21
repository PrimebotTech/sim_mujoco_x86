// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tag'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "aimdk_msgs/msg/detail/mc_motion_type__struct.h"
// Member 'intr_info'
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.h"

/// Struct defined in msg/McMotion in the package aimdk_msgs.
/**
  * Mc 动作接口
 */
typedef struct aimdk_msgs__msg__McMotion
{
  /// 名称
  rosidl_runtime_c__String tag;
  /// 动作类型
  aimdk_msgs__msg__McMotionType type;
  /// 打断信息
  aimdk_msgs__msg__McMotionIntrInfo intr_info;
} aimdk_msgs__msg__McMotion;

// Struct for a sequence of aimdk_msgs__msg__McMotion.
typedef struct aimdk_msgs__msg__McMotion__Sequence
{
  aimdk_msgs__msg__McMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_H_
