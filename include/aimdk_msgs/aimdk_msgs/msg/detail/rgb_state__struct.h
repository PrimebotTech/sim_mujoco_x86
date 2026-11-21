// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/RGBState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__RGB_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__RGB_STATE__STRUCT_H_

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

/// Struct defined in msg/RGBState in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__RGBState
{
  /// 消息头信息
  aimdk_msgs__msg__MessageHeader header;
  /// 当前显示模式
  uint8_t display_mode;
  /// 红色分量，自定义模式下生效
  uint8_t r;
  /// 绿色分量，自定义模式下生效
  uint8_t g;
  /// 蓝色分量，自定义模式下生效
  uint8_t b;
  /// 周期，自定义模式下生效。单位ms，0表示常亮，非0值表示点亮或者熄灭的保持时间
  uint16_t period;
} aimdk_msgs__msg__RGBState;

// Struct for a sequence of aimdk_msgs__msg__RGBState.
typedef struct aimdk_msgs__msg__RGBState__Sequence
{
  aimdk_msgs__msg__RGBState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__RGBState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__RGB_STATE__STRUCT_H_
