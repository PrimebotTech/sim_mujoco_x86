// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McFsmState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_FSM_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_FSM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * 未知状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__UNKNOWN = 0ul
};

/// Constant 'STARTING'.
/**
  * 预备状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__STARTING = 1ul
};

/// Constant 'STABLE'.
/**
  * 原地稳定状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__STABLE = 2ul
};

/// Constant 'MOVING'.
/**
  * 行走状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__MOVING = 3ul
};

/// Constant 'SAFE'.
/**
  * 安全状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__SAFE = 4ul
};

/// Constant 'SPECIAL'.
/**
  * 特殊状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__SPECIAL = 5ul
};

/// Constant 'TEST'.
/**
  * 测试状态
 */
enum
{
  aimdk_msgs__msg__McFsmState__TEST = 6ul
};

/// Struct defined in msg/McFsmState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 有限状态机状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McFsmState
{
  uint32_t current_state;
} aimdk_msgs__msg__McFsmState;

// Struct for a sequence of aimdk_msgs__msg__McFsmState.
typedef struct aimdk_msgs__msg__McFsmState__Sequence
{
  aimdk_msgs__msg__McFsmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McFsmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_FSM_STATE__STRUCT_H_
