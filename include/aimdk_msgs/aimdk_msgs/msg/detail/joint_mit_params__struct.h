// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointMitParams in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__JointMitParams
{
  int16_t pos_max;
  int16_t pos_min;
  int16_t vel_max;
  int16_t vel_min;
  int16_t tor_max;
  int16_t tor_min;
  int16_t kp_max;
  int16_t kp_min;
  int16_t kd_max;
  int16_t kd_min;
} aimdk_msgs__msg__JointMitParams;

// Struct for a sequence of aimdk_msgs__msg__JointMitParams.
typedef struct aimdk_msgs__msg__JointMitParams__Sequence
{
  aimdk_msgs__msg__JointMitParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JointMitParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_H_
