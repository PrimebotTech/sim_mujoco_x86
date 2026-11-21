// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JointInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_H_

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
// Member 'hardware_version'
// Member 'software_version'
#include "rosidl_runtime_c/string.h"
// Member 'mit_params'
#include "aimdk_msgs/msg/detail/joint_mit_params__struct.h"
// Member 'protect_config'
#include "aimdk_msgs/msg/detail/joint_protect_config__struct.h"

/// Struct defined in msg/JointInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__JointInfo
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String hardware_version;
  rosidl_runtime_c__String software_version;
  uint8_t mode;
  aimdk_msgs__msg__JointMitParams mit_params;
  aimdk_msgs__msg__JointProtectConfig protect_config;
} aimdk_msgs__msg__JointInfo;

// Struct for a sequence of aimdk_msgs__msg__JointInfo.
typedef struct aimdk_msgs__msg__JointInfo__Sequence
{
  aimdk_msgs__msg__JointInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JointInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_H_
