// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McRLDebug.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__STRUCT_H_

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
// Member 'obs_vec'
// Member 'action_vec'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/McRLDebug in the package aimdk_msgs.
/**
  * RL debug信息msg
 */
typedef struct aimdk_msgs__msg__McRLDebug
{
  /// 消息头
  aimdk_msgs__msg__MessageHeader header;
  /// 观测数组
  rosidl_runtime_c__float__Sequence obs_vec;
  /// 行为数组
  rosidl_runtime_c__float__Sequence action_vec;
} aimdk_msgs__msg__McRLDebug;

// Struct for a sequence of aimdk_msgs__msg__McRLDebug.
typedef struct aimdk_msgs__msg__McRLDebug__Sequence
{
  aimdk_msgs__msg__McRLDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McRLDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RL_DEBUG__STRUCT_H_
