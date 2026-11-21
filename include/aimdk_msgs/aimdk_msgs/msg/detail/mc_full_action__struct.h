// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McFullAction.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PASSIVE_DEFAULT'.
/**
  * 被动模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__PASSIVE_DEFAULT = 1l
};

/// Constant 'QUADRUPED_TO_BIPED'.
/**
  * 四足切换两足形态
 */
enum
{
  aimdk_msgs__msg__McFullAction__QUADRUPED_TO_BIPED = 2l
};

/// Constant 'BIPED_TO_QUADRUPED'.
/**
  * 两足切换四足形态
 */
enum
{
  aimdk_msgs__msg__McFullAction__BIPED_TO_QUADRUPED = 3l
};

/// Constant 'QUADRUPED_RECOVERY'.
/**
  * 倒地四足站起
 */
enum
{
  aimdk_msgs__msg__McFullAction__QUADRUPED_RECOVERY = 100l
};

/// Constant 'QUADRUPED_STAND_DEFAULT'.
/**
  * 四足站立模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__QUADRUPED_STAND_DEFAULT = 101l
};

/// Constant 'QUADRUPED_LOCOMOTION_DEFAULT'.
/**
  * 四足行走/奔跑模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__QUADRUPED_LOCOMOTION_DEFAULT = 102l
};

/// Constant 'QUADRUPED_LOCOMOTION_TERRAIN'.
/**
  * 四足越障行走模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__QUADRUPED_LOCOMOTION_TERRAIN = 103l
};

/// Constant 'BIPED_RECOVERY'.
/**
  * 倒地两足站起
 */
enum
{
  aimdk_msgs__msg__McFullAction__BIPED_RECOVERY = 200l
};

/// Constant 'BIPED_STAND_DEFAULT'.
/**
  * 两足站立模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__BIPED_STAND_DEFAULT = 201l
};

/// Constant 'BIPED_LOCOMOTION_DEFAULT'.
/**
  * 两足行走/奔跑模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__BIPED_LOCOMOTION_DEFAULT = 202l
};

/// Constant 'BIPED_LOCOMOTION_TERRAIN'.
/**
  * 两足越障行走模式
 */
enum
{
  aimdk_msgs__msg__McFullAction__BIPED_LOCOMOTION_TERRAIN = 203l
};

/// Struct defined in msg/McFullAction in the package aimdk_msgs.
/**
  * 定义枚举字段
 */
typedef struct aimdk_msgs__msg__McFullAction
{
  int32_t value;
} aimdk_msgs__msg__McFullAction;

// Struct for a sequence of aimdk_msgs__msg__McFullAction.
typedef struct aimdk_msgs__msg__McFullAction__Sequence
{
  aimdk_msgs__msg__McFullAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McFullAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_H_
