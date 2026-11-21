// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McFormState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__STRUCT_H_

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
  * 未知形态
 */
enum
{
  aimdk_msgs__msg__McFormState__UNKNOWN = 0
};

/// Constant 'QUADRUPEDAL'.
/**
  * 四足形态
 */
enum
{
  aimdk_msgs__msg__McFormState__QUADRUPEDAL = 1
};

/// Constant 'BIPEDAL'.
/**
  * 双足形态
 */
enum
{
  aimdk_msgs__msg__McFormState__BIPEDAL = 2
};

/// Struct defined in msg/McFormState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 机器人形态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McFormState
{
  uint8_t current_form;
} aimdk_msgs__msg__McFormState;

// Struct for a sequence of aimdk_msgs__msg__McFormState.
typedef struct aimdk_msgs__msg__McFormState__Sequence
{
  aimdk_msgs__msg__McFormState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McFormState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__STRUCT_H_
