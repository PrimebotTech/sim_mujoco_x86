// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ThreadResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'thread_name'
// Member 'cpu_sched_policy'
#include "rosidl_runtime_c/string.h"
// Member 'bounding_cpus'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ThreadResourceInfo in the package aimdk_msgs.
/**
  * 线程ID
 */
typedef struct aimdk_msgs__msg__ThreadResourceInfo
{
  uint64_t thread_id;
  /// 线程名称
  rosidl_runtime_c__String thread_name;
  /// 当前线程cpu使用率
  double cpu_usage_ratio;
  /// 当前进程调度策略
  rosidl_runtime_c__String cpu_sched_policy;
  /// 当前进程调度优先级
  int32_t cpu_sched_priority;
  /// 当前进程绑定cpu
  rosidl_runtime_c__int32__Sequence bounding_cpus;
} aimdk_msgs__msg__ThreadResourceInfo;

// Struct for a sequence of aimdk_msgs__msg__ThreadResourceInfo.
typedef struct aimdk_msgs__msg__ThreadResourceInfo__Sequence
{
  aimdk_msgs__msg__ThreadResourceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ThreadResourceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_H_
