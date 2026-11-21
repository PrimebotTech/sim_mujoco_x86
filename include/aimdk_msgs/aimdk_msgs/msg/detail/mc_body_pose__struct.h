// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McBodyPose.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_H_

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
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/McBodyPose in the package aimdk_msgs.
/**
  * 消息头
 */
typedef struct aimdk_msgs__msg__McBodyPose
{
  aimdk_msgs__msg__MessageHeader header;
  /// 输入源
  rosidl_runtime_c__String source;
  /// 站立高度 (站直/下蹲)， 正值站立， 负值下蹲
  /// 单位：m，距离地面的高度
  double stand_height;
  /// 身体前倾/后倾, 正值前倾， 负值后倾
  /// 单位：rad
  double bend_forward;
  /// 身体侧弯, 正值左侧弯， 负值右侧弯
  /// 单位：rad
  double bend_sideways;
  /// 腰部旋转， 正值左转， 负值右转
  /// 单位：rad
  double twist_waist;
  /// 点头/抬头，正值低头，负值抬头
  /// 单位：rad
  double raise_head;
  /// 头部旋转，正值左转，负值右转
  /// 单位：rad
  double turn_head;
} aimdk_msgs__msg__McBodyPose;

// Struct for a sequence of aimdk_msgs__msg__McBodyPose.
typedef struct aimdk_msgs__msg__McBodyPose__Sequence
{
  aimdk_msgs__msg__McBodyPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McBodyPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_H_
