// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/ManipulationCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'manipulations'
#include "aimdk_msgs/msg/detail/manipulation_command__struct.h"

/// Struct defined in msg/ManipulationCommandArray in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__ManipulationCommandArray
{
  aimdk_msgs__msg__MessageHeader header;
  aimdk_msgs__msg__ManipulationCommand__Sequence manipulations;
} aimdk_msgs__msg__ManipulationCommandArray;

// Struct for a sequence of aimdk_msgs__msg__ManipulationCommandArray.
typedef struct aimdk_msgs__msg__ManipulationCommandArray__Sequence
{
  aimdk_msgs__msg__ManipulationCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__ManipulationCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_H_
