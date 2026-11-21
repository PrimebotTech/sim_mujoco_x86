// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McMimicGravityState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/McMimicGravityState in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McMimicGravityState
{
  bool enabled;
  float reference_gravity[3];
  float current_gravity[3];
  float deviation_deg;
} aimdk_msgs__msg__McMimicGravityState;

// Struct for a sequence of aimdk_msgs__msg__McMimicGravityState.
typedef struct aimdk_msgs__msg__McMimicGravityState__Sequence
{
  aimdk_msgs__msg__McMimicGravityState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McMimicGravityState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_H_
