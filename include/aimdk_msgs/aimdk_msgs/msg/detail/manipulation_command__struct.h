// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ManipulationCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ManipulationCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__ManipulationCommand
{
  rosidl_runtime_c__String name;
  double position;
  double velocity;
  double effort;
} aimdk_msgs__msg__ManipulationCommand;

// Struct for a sequence of aimdk_msgs__msg__ManipulationCommand.
typedef struct aimdk_msgs__msg__ManipulationCommand__Sequence
{
  aimdk_msgs__msg__ManipulationCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ManipulationCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__STRUCT_H_
