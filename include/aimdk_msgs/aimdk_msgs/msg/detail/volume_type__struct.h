// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/VolumeType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__VOLUME_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__VOLUME_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEAKRE_BUILT_IN'.
/**
  * 本体扬声器
 */
enum
{
  aimdk_msgs__msg__VolumeType__SPEAKRE_BUILT_IN = 0
};

/// Constant 'MIC'.
/**
  * 麦克风
 */
enum
{
  aimdk_msgs__msg__VolumeType__MIC = 16
};

/// Struct defined in msg/VolumeType in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__VolumeType
{
  uint8_t value;
} aimdk_msgs__msg__VolumeType;

// Struct for a sequence of aimdk_msgs__msg__VolumeType.
typedef struct aimdk_msgs__msg__VolumeType__Sequence
{
  aimdk_msgs__msg__VolumeType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__VolumeType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__VOLUME_TYPE__STRUCT_H_
