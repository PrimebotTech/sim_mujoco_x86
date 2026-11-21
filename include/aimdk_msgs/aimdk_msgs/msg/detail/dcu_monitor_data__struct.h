// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/DcuMonitorData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__STRUCT_H_

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
// Member 'monitor_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DcuMonitorData in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__DcuMonitorData
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__double__Sequence monitor_data;
} aimdk_msgs__msg__DcuMonitorData;

// Struct for a sequence of aimdk_msgs__msg__DcuMonitorData.
typedef struct aimdk_msgs__msg__DcuMonitorData__Sequence
{
  aimdk_msgs__msg__DcuMonitorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__DcuMonitorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__STRUCT_H_
