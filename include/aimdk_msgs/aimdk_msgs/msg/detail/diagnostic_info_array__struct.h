// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/DiagnosticInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_H_

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
// Member 'diagnostics'
#include "aimdk_msgs/msg/detail/diagnostic_info__struct.h"

/// Struct defined in msg/DiagnosticInfoArray in the package aimdk_msgs.
/**
  * 消息头
 */
typedef struct aimdk_msgs__msg__DiagnosticInfoArray
{
  aimdk_msgs__msg__MessageHeader header;
  aimdk_msgs__msg__DiagnosticInfo__Sequence diagnostics;
} aimdk_msgs__msg__DiagnosticInfoArray;

// Struct for a sequence of aimdk_msgs__msg__DiagnosticInfoArray.
typedef struct aimdk_msgs__msg__DiagnosticInfoArray__Sequence
{
  aimdk_msgs__msg__DiagnosticInfoArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__DiagnosticInfoArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_H_
