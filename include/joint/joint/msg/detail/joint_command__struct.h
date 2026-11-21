// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from joint:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
#define JOINT__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joints'
#include "joint/msg/detail/command__struct.h"

/// Struct defined in msg/JointCommand in the package joint.
typedef struct joint__msg__JointCommand
{
  std_msgs__msg__Header header;
  joint__msg__Command__Sequence joints;
} joint__msg__JointCommand;

// Struct for a sequence of joint__msg__JointCommand.
typedef struct joint__msg__JointCommand__Sequence
{
  joint__msg__JointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} joint__msg__JointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JOINT__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
