// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JointInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__STRUCT_H_

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
// Member 'joints'
#include "aimdk_msgs/msg/detail/joint_info__struct.h"

/// Struct defined in msg/JointInfoArray in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__JointInfoArray
{
  aimdk_msgs__msg__MessageHeader header;
  aimdk_msgs__msg__JointInfo__Sequence joints;
} aimdk_msgs__msg__JointInfoArray;

// Struct for a sequence of aimdk_msgs__msg__JointInfoArray.
typedef struct aimdk_msgs__msg__JointInfoArray__Sequence
{
  aimdk_msgs__msg__JointInfoArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JointInfoArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__STRUCT_H_
