// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EmergencyState in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__EmergencyState
{
  int32_t emergency_state;
} aimdk_msgs__msg__EmergencyState;

// Struct for a sequence of aimdk_msgs__msg__EmergencyState.
typedef struct aimdk_msgs__msg__EmergencyState__Sequence
{
  aimdk_msgs__msg__EmergencyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__EmergencyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
