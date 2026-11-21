// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/EventProbeInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__STRUCT_H_

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
// Member 'list'
#include "aimdk_msgs/msg/detail/event_probe_info__struct.h"

/// Struct defined in msg/EventProbeInfoArray in the package aimdk_msgs.
/**
  * 消息头
 */
typedef struct aimdk_msgs__msg__EventProbeInfoArray
{
  aimdk_msgs__msg__MessageHeader header;
  aimdk_msgs__msg__EventProbeInfo__Sequence list;
} aimdk_msgs__msg__EventProbeInfoArray;

// Struct for a sequence of aimdk_msgs__msg__EventProbeInfoArray.
typedef struct aimdk_msgs__msg__EventProbeInfoArray__Sequence
{
  aimdk_msgs__msg__EventProbeInfoArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__EventProbeInfoArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__STRUCT_H_
