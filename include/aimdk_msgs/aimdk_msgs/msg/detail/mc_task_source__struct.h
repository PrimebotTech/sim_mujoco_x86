// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McTaskSource.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_TASK_SOURCE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_TASK_SOURCE__STRUCT_H_

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
  * 未知/未指定
 */
enum
{
  aimdk_msgs__msg__McTaskSource__UNKNOWN = 0l
};

/// Constant 'APP'.
/**
  * APP
 */
enum
{
  aimdk_msgs__msg__McTaskSource__APP = 1l
};

/// Constant 'CLOUD'.
/**
  * 云端
 */
enum
{
  aimdk_msgs__msg__McTaskSource__CLOUD = 2l
};

/// Constant 'RC'.
/**
  * 遥控器
 */
enum
{
  aimdk_msgs__msg__McTaskSource__RC = 3l
};

/// Constant 'SDK_RPC'.
/**
  * SDK/RPC 直接调用
 */
enum
{
  aimdk_msgs__msg__McTaskSource__SDK_RPC = 4l
};

/// Constant 'AGENT'.
/**
  * agent
 */
enum
{
  aimdk_msgs__msg__McTaskSource__AGENT = 5l
};

/// Constant 'TASK_ENGINE'.
/**
  * task engine 自动任务
 */
enum
{
  aimdk_msgs__msg__McTaskSource__TASK_ENGINE = 6l
};

/// Constant 'MC_INTERNAL'.
/**
  * MC 内部自动切换（如 Moving → Stable 稳态复位）
 */
enum
{
  aimdk_msgs__msg__McTaskSource__MC_INTERNAL = 7l
};

/// Constant 'INSTA360'.
/**
  * Insta360
 */
enum
{
  aimdk_msgs__msg__McTaskSource__INSTA360 = 8l
};

/// Constant 'OTHER'.
/**
  * 其他
 */
enum
{
  aimdk_msgs__msg__McTaskSource__OTHER = 255l
};

/// Struct defined in msg/McTaskSource in the package aimdk_msgs.
/**
  * 定义 Action 触发源
 */
typedef struct aimdk_msgs__msg__McTaskSource
{
  int32_t value;
} aimdk_msgs__msg__McTaskSource;

// Struct for a sequence of aimdk_msgs__msg__McTaskSource.
typedef struct aimdk_msgs__msg__McTaskSource__Sequence
{
  aimdk_msgs__msg__McTaskSource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McTaskSource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_TASK_SOURCE__STRUCT_H_
