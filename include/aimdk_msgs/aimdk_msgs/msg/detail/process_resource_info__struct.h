// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'process_name'
#include "rosidl_runtime_c/string.h"
// Member 'threads'
#include "aimdk_msgs/msg/detail/thread_resource_info__struct.h"

/// Struct defined in msg/ProcessResourceInfo in the package aimdk_msgs.
/**
  * 进程ID
 */
typedef struct aimdk_msgs__msg__ProcessResourceInfo
{
  uint64_t process_id;
  /// 进程名称
  rosidl_runtime_c__String process_name;
  /// 当前进程内存使用量(kb)
  uint64_t process_mem_usage;
  /// 当前进程内存使用率
  double process_mem_usage_ratio;
  /// 当前进程cpu使用率
  double process_cpu_usage_ratio;
  /// 当前进程线程数
  uint64_t thread_count;
  aimdk_msgs__msg__ThreadResourceInfo__Sequence threads;
} aimdk_msgs__msg__ProcessResourceInfo;

// Struct for a sequence of aimdk_msgs__msg__ProcessResourceInfo.
typedef struct aimdk_msgs__msg__ProcessResourceInfo__Sequence
{
  aimdk_msgs__msg__ProcessResourceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ProcessResourceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_H_
