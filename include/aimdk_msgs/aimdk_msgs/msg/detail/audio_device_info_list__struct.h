// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/AudioDeviceInfoList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_list'
// Member 'output_list'
#include "aimdk_msgs/msg/detail/audio_device_info__struct.h"

/// Struct defined in msg/AudioDeviceInfoList in the package aimdk_msgs.
/**
  * 音频设备列表
 */
typedef struct aimdk_msgs__msg__AudioDeviceInfoList
{
  aimdk_msgs__msg__AudioDeviceInfo__Sequence input_list;
  aimdk_msgs__msg__AudioDeviceInfo__Sequence output_list;
} aimdk_msgs__msg__AudioDeviceInfoList;

// Struct for a sequence of aimdk_msgs__msg__AudioDeviceInfoList.
typedef struct aimdk_msgs__msg__AudioDeviceInfoList__Sequence
{
  aimdk_msgs__msg__AudioDeviceInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__AudioDeviceInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_H_
