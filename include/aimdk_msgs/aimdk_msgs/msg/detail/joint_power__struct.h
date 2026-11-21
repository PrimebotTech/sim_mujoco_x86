// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JointPower.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__STRUCT_H_

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

/// Struct defined in msg/JointPower in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__JointPower
{
  /// 消息头信息
  aimdk_msgs__msg__MessageHeader header;
  /// 实际供电状态：1-上电，2-下电
  uint8_t motor_power_state;
} aimdk_msgs__msg__JointPower;

// Struct for a sequence of aimdk_msgs__msg__JointPower.
typedef struct aimdk_msgs__msg__JointPower__Sequence
{
  aimdk_msgs__msg__JointPower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JointPower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__STRUCT_H_
