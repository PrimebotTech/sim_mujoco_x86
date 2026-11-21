// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/CommonTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__STRUCT_H_

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
#include "aimdk_msgs/msg/detail/request_header__struct.h"

/// Struct defined in msg/CommonTaskRequest in the package aimdk_msgs.
/**
  * 请求头
 */
typedef struct aimdk_msgs__msg__CommonTaskRequest
{
  aimdk_msgs__msg__RequestHeader header;
  /// 任务ID
  uint64_t task_id;
} aimdk_msgs__msg__CommonTaskRequest;

// Struct for a sequence of aimdk_msgs__msg__CommonTaskRequest.
typedef struct aimdk_msgs__msg__CommonTaskRequest__Sequence
{
  aimdk_msgs__msg__CommonTaskRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__CommonTaskRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__STRUCT_H_
