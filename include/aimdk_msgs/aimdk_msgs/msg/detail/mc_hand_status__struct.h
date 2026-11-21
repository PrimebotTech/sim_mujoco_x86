// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McHandStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_HAND_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_HAND_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OMNI_HAND'.
/**
  * 灵巧手
 */
enum
{
  aimdk_msgs__msg__McHandStatus__OMNI_HAND = 1000l
};

/// Constant 'OMNI_PICKER'.
/**
  * 夹爪
 */
enum
{
  aimdk_msgs__msg__McHandStatus__OMNI_PICKER = 2000l
};

/// Struct defined in msg/McHandStatus in the package aimdk_msgs.
/**
  * 手部状态
 */
typedef struct aimdk_msgs__msg__McHandStatus
{
  int32_t value;
} aimdk_msgs__msg__McHandStatus;

// Struct for a sequence of aimdk_msgs__msg__McHandStatus.
typedef struct aimdk_msgs__msg__McHandStatus__Sequence
{
  aimdk_msgs__msg__McHandStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McHandStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_HAND_STATUS__STRUCT_H_
