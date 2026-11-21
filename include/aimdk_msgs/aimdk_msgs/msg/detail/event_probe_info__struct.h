// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/EventProbeInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EA_STATUS_DEFAULT'.
enum
{
  aimdk_msgs__msg__EventProbeInfo__EA_STATUS_DEFAULT = 0
};

/// Constant 'EA_STATUS_START'.
enum
{
  aimdk_msgs__msg__EventProbeInfo__EA_STATUS_START = 1
};

/// Constant 'EA_STATUS_END'.
enum
{
  aimdk_msgs__msg__EventProbeInfo__EA_STATUS_END = 2
};

// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/event_probe_type__struct.h"
// Member 'desc'
#include "rosidl_runtime_c/string.h"
// Member 'attrs'
#include "aimdk_msgs/msg/detail/event_probe_attr__struct.h"

/// Struct defined in msg/EventProbeInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__EventProbeInfo
{
  /// 事件状态
  uint8_t status;
  /// 事件时间戳
  uint64_t timestamp;
  /// 事件类型
  aimdk_msgs__msg__EventProbeType type;
  /// 模块ID
  uint8_t module_id;
  /// 事件ID
  uint32_t event_id;
  /// 模块时间码
  uint64_t event_code;
  /// 模块事件信息
  rosidl_runtime_c__String desc;
  /// 事件属性
  aimdk_msgs__msg__EventProbeAttr__Sequence attrs;
} aimdk_msgs__msg__EventProbeInfo;

// Struct for a sequence of aimdk_msgs__msg__EventProbeInfo.
typedef struct aimdk_msgs__msg__EventProbeInfo__Sequence
{
  aimdk_msgs__msg__EventProbeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__EventProbeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_H_
