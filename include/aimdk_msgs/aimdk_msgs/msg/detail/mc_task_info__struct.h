// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McTaskInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_TASK_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_TASK_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/McTaskInfo in the package aimdk_msgs.
/**
  * 任务 ID (0 表示未曾接收过任何请求)
 */
typedef struct aimdk_msgs__msg__McTaskInfo
{
  uint64_t task_id;
} aimdk_msgs__msg__McTaskInfo;

// Struct for a sequence of aimdk_msgs__msg__McTaskInfo.
typedef struct aimdk_msgs__msg__McTaskInfo__Sequence
{
  aimdk_msgs__msg__McTaskInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McTaskInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_TASK_INFO__STRUCT_H_
