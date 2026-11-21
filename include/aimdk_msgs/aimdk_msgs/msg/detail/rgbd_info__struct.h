// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/RgbdInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__STRUCT_H_

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

/// Struct defined in msg/RgbdInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__RgbdInfo
{
  aimdk_msgs__msg__MessageHeader header;
  uint16_t exposure;
  float temperature;
} aimdk_msgs__msg__RgbdInfo;

// Struct for a sequence of aimdk_msgs__msg__RgbdInfo.
typedef struct aimdk_msgs__msg__RgbdInfo__Sequence
{
  aimdk_msgs__msg__RgbdInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__RgbdInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__STRUCT_H_
