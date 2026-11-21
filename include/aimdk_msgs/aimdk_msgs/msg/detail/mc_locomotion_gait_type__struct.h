// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McLocomotionGaitType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_GAIT_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_GAIT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WALK'.
/**
  * 步态: 走
 */
enum
{
  aimdk_msgs__msg__McLocomotionGaitType__WALK = 0l
};

/// Constant 'STANCE'.
/**
  * 步态: 站
 */
enum
{
  aimdk_msgs__msg__McLocomotionGaitType__STANCE = 1l
};

/// Constant 'STATIC_WALK'.
/**
  * 步态: 原地踏步
 */
enum
{
  aimdk_msgs__msg__McLocomotionGaitType__STATIC_WALK = 2l
};

/// Struct defined in msg/McLocomotionGaitType in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McLocomotionGaitType
{
  int32_t value;
} aimdk_msgs__msg__McLocomotionGaitType;

// Struct for a sequence of aimdk_msgs__msg__McLocomotionGaitType.
typedef struct aimdk_msgs__msg__McLocomotionGaitType__Sequence
{
  aimdk_msgs__msg__McLocomotionGaitType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McLocomotionGaitType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_GAIT_TYPE__STRUCT_H_
