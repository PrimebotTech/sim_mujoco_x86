// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McSquatStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/McSquatStatus in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 下蹲动作运行状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McSquatStatus
{
  /// 是否处于下蹲状态
  bool enable;
  /// 下蹲高度偏置
  double offset;
  /// 下蹲上下限位
  uint32_t squat_limit;
} aimdk_msgs__msg__McSquatStatus;

// Struct for a sequence of aimdk_msgs__msg__McSquatStatus.
typedef struct aimdk_msgs__msg__McSquatStatus__Sequence
{
  aimdk_msgs__msg__McSquatStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McSquatStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_H_
