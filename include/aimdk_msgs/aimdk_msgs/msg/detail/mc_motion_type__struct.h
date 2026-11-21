// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMotionType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
/**
  * NONE
 */
enum
{
  aimdk_msgs__msg__McMotionType__NONE = 0l
};

/// Constant 'ANIMATION'.
/**
  * 动画，上肢动作
 */
enum
{
  aimdk_msgs__msg__McMotionType__ANIMATION = 1l
};

/// Constant 'MIMIC'.
/**
  * 模仿
 */
enum
{
  aimdk_msgs__msg__McMotionType__MIMIC = 2l
};

/// Constant 'FOUNDATION'.
/**
  * 基座
 */
enum
{
  aimdk_msgs__msg__McMotionType__FOUNDATION = 3l
};

/// Constant 'MIMIC_OPENSOURCE'.
/**
  * 运动跟踪
 */
enum
{
  aimdk_msgs__msg__McMotionType__MIMIC_OPENSOURCE = 4l
};

/// Struct defined in msg/McMotionType in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McMotionType
{
  int32_t value;
} aimdk_msgs__msg__McMotionType;

// Struct for a sequence of aimdk_msgs__msg__McMotionType.
typedef struct aimdk_msgs__msg__McMotionType__Sequence
{
  aimdk_msgs__msg__McMotionType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMotionType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_TYPE__STRUCT_H_
