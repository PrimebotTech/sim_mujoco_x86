// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_

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

/// Struct defined in msg/ServoCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__ServoCommand
{
  /// 消息头信息
  aimdk_msgs__msg__MessageHeader header;
  /// 头部舵机控制角度，单位 rad，0-pi/2
  float position;
} aimdk_msgs__msg__ServoCommand;

// Struct for a sequence of aimdk_msgs__msg__ServoCommand.
typedef struct aimdk_msgs__msg__ServoCommand__Sequence
{
  aimdk_msgs__msg__ServoCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ServoCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
