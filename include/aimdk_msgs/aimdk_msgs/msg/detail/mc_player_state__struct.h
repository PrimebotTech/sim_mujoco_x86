// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McPlayerState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_PLAYER_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_PLAYER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
/**
  * 无上肢动作
 */
enum
{
  aimdk_msgs__msg__McPlayerState__IDLE = 0ul
};

/// Constant 'PRE_PLAYING'.
/**
  * IDLE 过渡至下一动作
 */
enum
{
  aimdk_msgs__msg__McPlayerState__PRE_PLAYING = 1ul
};

/// Constant 'PLAYING'.
/**
  * 上肢动作正在播放
 */
enum
{
  aimdk_msgs__msg__McPlayerState__PLAYING = 2ul
};

/// Constant 'INTERRUPTING'.
/**
  * 打断当前动作过渡至下一动作
 */
enum
{
  aimdk_msgs__msg__McPlayerState__INTERRUPTING = 3ul
};

/// Constant 'ERROR'.
/**
  * 播放错误状态
 */
enum
{
  aimdk_msgs__msg__McPlayerState__ERROR = 4ul
};

/// Struct defined in msg/McPlayerState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 上肢动作运行状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McPlayerState
{
  uint32_t value;
} aimdk_msgs__msg__McPlayerState;

// Struct for a sequence of aimdk_msgs__msg__McPlayerState.
typedef struct aimdk_msgs__msg__McPlayerState__Sequence
{
  aimdk_msgs__msg__McPlayerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McPlayerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_PLAYER_STATE__STRUCT_H_
