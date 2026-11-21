// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'input_source'
#include "aimdk_msgs/msg/detail/mc_input_source__struct.h"
// Member 'action_info'
#include "aimdk_msgs/msg/detail/mc_action_info__struct.h"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.h"
// Member 'motion_status'
#include "aimdk_msgs/msg/detail/mc_motion_status__struct.h"
// Member 'fsm_state'
#include "aimdk_msgs/msg/detail/mc_fsm_state__struct.h"
// Member 'form_state'
#include "aimdk_msgs/msg/detail/mc_form_state__struct.h"
// Member 'posture'
#include "aimdk_msgs/msg/detail/mc_posture__struct.h"
// Member 'lift_state'
#include "aimdk_msgs/msg/detail/mc_lift_state__struct.h"
// Member 'task_info'
#include "aimdk_msgs/msg/detail/mc_task_info__struct.h"
// Member 'held_state'
#include "aimdk_msgs/msg/detail/mc_hand_held_state__struct.h"
// Member 'posture_state'
#include "aimdk_msgs/msg/detail/mc_posture_state__struct.h"

/// Struct defined in msg/McCommonState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McCommonState
{
  aimdk_msgs__msg__MessageHeader header;
  /// ------------ 输入源信息 ------------ #
  aimdk_msgs__msg__McInputSource input_source;
  /// ----------- Action 信息 ----------- #
  aimdk_msgs__msg__McActionInfo action_info;
  /// --------- 机器运行模型信息 ---------- #
  aimdk_msgs__msg__McRuntimeModel runtime_model;
  /// --------- 动作运行信息 ---------- #
  aimdk_msgs__msg__McMotionStatus motion_status;
  /// --------- 有限状态机状态 ---------- #
  aimdk_msgs__msg__McFsmState fsm_state;
  /// --------- 机器人形态信息 ---------- #
  aimdk_msgs__msg__McFormState form_state;
  /// --------- 机器人姿态信息 ---------- #
  aimdk_msgs__msg__McPosture posture;
  /// ----------机器人是否处于运动状态 ----------
  bool is_moving;
  /// ----------机器人是否摔倒（防摔检测触发后置 true；重新解锁站立防摔检测时置 false）----------
  bool is_fallen;
  /// ---------- 机器人提起检测状态 ---------- #
  aimdk_msgs__msg__McLiftState lift_state;
  /// ---------- rpc 请求 执行状态 ----------
  aimdk_msgs__msg__McTaskInfo task_info;
  /// ---------- 机器人牵手状态 ---------- #
  aimdk_msgs__msg__McHandHeldState held_state;
  /// ---------- 机器人姿态检测结果 (站立/坐姿/仰卧/俯卧/未知) ---------- #
  aimdk_msgs__msg__McPostureState posture_state;
} aimdk_msgs__msg__McCommonState;

// Struct for a sequence of aimdk_msgs__msg__McCommonState.
typedef struct aimdk_msgs__msg__McCommonState__Sequence
{
  aimdk_msgs__msg__McCommonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McCommonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_
