// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'player_state'
#include "aimdk_msgs/msg/detail/mc_player_state__struct.h"
// Member 'control_area'
#include "aimdk_msgs/msg/detail/mc_control_area__struct.h"
// Member 'motion'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "aimdk_msgs/msg/detail/mc_motion_type__struct.h"
// Member 'intr_info'
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.h"
// Member 'gravity_state'
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__struct.h"

/// Struct defined in msg/McMotionStatus in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 动作运行信息
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McMotionStatus
{
  /// 动作运行状态
  aimdk_msgs__msg__McPlayerState player_state;
  /// 控制区域
  aimdk_msgs__msg__McControlArea control_area;
  /// 动作名称
  rosidl_runtime_c__String motion;
  /// 动作类型
  aimdk_msgs__msg__McMotionType type;
  /// 动作断点信息
  aimdk_msgs__msg__McMotionIntrInfo intr_info;
  /// 当前动作执行进度
  int32_t current_steps;
  /// 全身动作重力向量状态
  aimdk_msgs__msg__McMimicGravityState gravity_state;
} aimdk_msgs__msg__McMotionStatus;

// Struct for a sequence of aimdk_msgs__msg__McMotionStatus.
typedef struct aimdk_msgs__msg__McMotionStatus__Sequence
{
  aimdk_msgs__msg__McMotionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMotionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_H_
