// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McPostureState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * 未知姿态
 */
enum
{
  aimdk_msgs__msg__McPostureState__UNKNOWN = 0
};

/// Constant 'STANDING'.
/**
  * 双足站姿
 */
enum
{
  aimdk_msgs__msg__McPostureState__STANDING = 1
};

/// Constant 'LYING_FACE_UP'.
/**
  * 仰卧，面朝上
 */
enum
{
  aimdk_msgs__msg__McPostureState__LYING_FACE_UP = 2
};

/// Constant 'LYING_FACE_DOWN'.
/**
  * 俯卧，面朝下
 */
enum
{
  aimdk_msgs__msg__McPostureState__LYING_FACE_DOWN = 3
};

/// Constant 'SEATED'.
/**
  * 坐姿（零力矩模式下躯干直立且腿部符合坐姿构型）
 */
enum
{
  aimdk_msgs__msg__McPostureState__SEATED = 4
};

/// Constant 'OPEN_BOX'.
/**
  * 开箱姿态
 */
enum
{
  aimdk_msgs__msg__McPostureState__OPEN_BOX = 5
};

/// Struct defined in msg/McPostureState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人姿态检测结果 (security_guard 姿态检测)
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McPostureState
{
  /// 当前姿态
  uint8_t current_posture;
} aimdk_msgs__msg__McPostureState;

// Struct for a sequence of aimdk_msgs__msg__McPostureState.
typedef struct aimdk_msgs__msg__McPostureState__Sequence
{
  aimdk_msgs__msg__McPostureState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McPostureState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_H_
