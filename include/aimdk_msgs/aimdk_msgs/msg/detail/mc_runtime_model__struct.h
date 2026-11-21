// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_hand_status'
// Member 'right_hand_status'
#include "aimdk_msgs/msg/detail/mc_hand_status__struct.h"

/// Struct defined in msg/McRuntimeModel in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 运行模型信息
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McRuntimeModel
{
  /// 腰部状态
  bool waist_status;
  /// 左手手部状态
  aimdk_msgs__msg__McHandStatus left_hand_status;
  /// 右手手部状态
  aimdk_msgs__msg__McHandStatus right_hand_status;
} aimdk_msgs__msg__McRuntimeModel;

// Struct for a sequence of aimdk_msgs__msg__McRuntimeModel.
typedef struct aimdk_msgs__msg__McRuntimeModel__Sequence
{
  aimdk_msgs__msg__McRuntimeModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McRuntimeModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_H_
