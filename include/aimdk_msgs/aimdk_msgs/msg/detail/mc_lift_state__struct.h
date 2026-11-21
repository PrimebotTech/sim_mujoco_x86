// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McLiftState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/McLiftState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * Lift detector detailed state
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McLiftState
{
  /// Whether lift has been triggered and latched by the detector.
  bool is_lifted;
  /// Lift probability after logit smoothing and sigmoid.
  float probability;
  /// Probability threshold used by the detector.
  float threshold;
} aimdk_msgs__msg__McLiftState;

// Struct for a sequence of aimdk_msgs__msg__McLiftState.
typedef struct aimdk_msgs__msg__McLiftState__Sequence
{
  aimdk_msgs__msg__McLiftState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McLiftState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__STRUCT_H_
