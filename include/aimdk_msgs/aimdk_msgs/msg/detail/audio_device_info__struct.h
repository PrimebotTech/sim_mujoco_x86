// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/AudioDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_addr'
// Member 'device_type'
// Member 'device_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AudioDeviceInfo in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 一块音频设备的信息
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__AudioDeviceInfo
{
  /// 设备索引号
  /// -1: auto mode
  int32_t id;
  /// 设备标志符
  /// builtin_mic builtin_speaker
  rosidl_runtime_c__String device_addr;
  /// 设备类型
  /// builtin bluetooth
  rosidl_runtime_c__String device_type;
  /// 设备名称
  /// snd_card_name bluetooth
  rosidl_runtime_c__String device_name;
  /// 是否处于选中状态
  bool is_sel;
} aimdk_msgs__msg__AudioDeviceInfo;

// Struct for a sequence of aimdk_msgs__msg__AudioDeviceInfo.
typedef struct aimdk_msgs__msg__AudioDeviceInfo__Sequence
{
  aimdk_msgs__msg__AudioDeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__AudioDeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__STRUCT_H_
