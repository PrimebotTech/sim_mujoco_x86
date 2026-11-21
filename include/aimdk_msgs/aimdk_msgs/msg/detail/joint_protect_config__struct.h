// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointProtectConfig in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__JointProtectConfig
{
  int16_t l1_mos_protect;
  int16_t l1_mos_recover;
  int16_t l1_current_protect;
  int16_t l1_current_recover;
  int16_t l1_voltage_protect;
  int16_t l1_voltage_recover;
  int16_t l2_mos_protect;
  int16_t l2_mos_recover;
  int16_t l2_current_protect;
  int16_t l2_current_recover;
  int16_t l2_voltage_protect;
  int16_t l2_voltage_recover;
} aimdk_msgs__msg__JointProtectConfig;

// Struct for a sequence of aimdk_msgs__msg__JointProtectConfig.
typedef struct aimdk_msgs__msg__JointProtectConfig__Sequence
{
  aimdk_msgs__msg__JointProtectConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JointProtectConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_H_
