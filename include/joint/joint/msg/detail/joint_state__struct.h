// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from joint:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define JOINT__MSG__DETAIL__JOINT_STATE__STRUCT_H_

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
#include "joint/msg/detail/state__struct.h"

/// Struct defined in msg/JointState in the package joint.
typedef struct joint__msg__JointState
{
  std_msgs__msg__Header header;
  joint__msg__State__Sequence joints;
} joint__msg__JointState;

// Struct for a sequence of joint__msg__JointState.
typedef struct joint__msg__JointState__Sequence
{
  joint__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} joint__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JOINT__MSG__DETAIL__JOINT_STATE__STRUCT_H_
