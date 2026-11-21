// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ModuleChannelInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'type'
// Member 'backends'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ModuleChannelInfo in the package aimdk_msgs.
/**
  * 话题名
 */
typedef struct aimdk_msgs__msg__ModuleChannelInfo
{
  rosidl_runtime_c__String name;
  /// 类型名
  rosidl_runtime_c__String type;
  /// 当前频率（Hz）
  double frequency;
  /// 最小时间差(ms)
  double min_time_diff;
  /// 最大时间差(ms)
  double max_time_diff;
  /// 标准差(ms)
  double std_dev;
  /// 统计滑动窗口大小(ms)
  int32_t window_size;
  /// 超时阈值(ms)
  double timeout_threshold;
  /// 是否活跃(只要收到过一帧消息，则置为true，未收到则为false)
  bool is_active;
  /// 通讯后端
  rosidl_runtime_c__String__Sequence backends;
} aimdk_msgs__msg__ModuleChannelInfo;

// Struct for a sequence of aimdk_msgs__msg__ModuleChannelInfo.
typedef struct aimdk_msgs__msg__ModuleChannelInfo__Sequence
{
  aimdk_msgs__msg__ModuleChannelInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ModuleChannelInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_H_
