// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

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

/// Struct defined in msg/MotorStatus in the package aimdk_msgs.
/**
  * 电机状态消息
 */
typedef struct aimdk_msgs__msg__MotorStatus
{
  aimdk_msgs__msg__MessageHeader header;
  /// 电机使能状态：true 全部电机使能成功, false 电机不供电/未使能/部分电机使能失败
  /// 暂不检测运行过程中电机掉使能
  bool motor_enable;
} aimdk_msgs__msg__MotorStatus;

// Struct for a sequence of aimdk_msgs__msg__MotorStatus.
typedef struct aimdk_msgs__msg__MotorStatus__Sequence
{
  aimdk_msgs__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
