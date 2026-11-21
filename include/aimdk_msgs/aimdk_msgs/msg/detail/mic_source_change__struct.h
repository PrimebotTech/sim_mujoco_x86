// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/MicSourceChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MicSourceChange in the package aimdk_msgs.
/**
  * 0-内置麦
  * 1-外置麦
 */
typedef struct aimdk_msgs__msg__MicSourceChange
{
  uint32_t mic_source;
  /// product id
  uint32_t pid;
  /// vendor id
  uint32_t vid;
} aimdk_msgs__msg__MicSourceChange;

// Struct for a sequence of aimdk_msgs__msg__MicSourceChange.
typedef struct aimdk_msgs__msg__MicSourceChange__Sequence
{
  aimdk_msgs__msg__MicSourceChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__MicSourceChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_H_
