// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/VolumeChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/volume_type__struct.h"

/// Struct defined in msg/VolumeChange in the package aimdk_msgs.
/**
  * 音量类型
 */
typedef struct aimdk_msgs__msg__VolumeChange
{
  aimdk_msgs__msg__VolumeType type;
  /// 当前音量（0~100）
  uint32_t audio_volume;
} aimdk_msgs__msg__VolumeChange;

// Struct for a sequence of aimdk_msgs__msg__VolumeChange.
typedef struct aimdk_msgs__msg__VolumeChange__Sequence
{
  aimdk_msgs__msg__VolumeChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__VolumeChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__STRUCT_H_
