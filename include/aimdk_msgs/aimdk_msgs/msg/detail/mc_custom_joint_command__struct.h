// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McCustomJointCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__STRUCT_H_

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
// Member 'joints'
#include "aimdk_msgs/msg/detail/joint_command__struct.h"

/// Struct defined in msg/McCustomJointCommand in the package aimdk_msgs.
/**
  * 消息头
 */
typedef struct aimdk_msgs__msg__McCustomJointCommand
{
  aimdk_msgs__msg__MessageHeader header;
  /// 上肢关节目标命令数组（mc内部自动按 name 匹配对应关节数据）
  aimdk_msgs__msg__JointCommand__Sequence joints;
} aimdk_msgs__msg__McCustomJointCommand;

// Struct for a sequence of aimdk_msgs__msg__McCustomJointCommand.
typedef struct aimdk_msgs__msg__McCustomJointCommand__Sequence
{
  aimdk_msgs__msg__McCustomJointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McCustomJointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__STRUCT_H_
