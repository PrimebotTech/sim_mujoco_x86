// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_H_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'exception_list'
#include "hds_msgs/msg/detail/exception__struct.h"

/// Struct defined in msg/ExceptionChannel in the package hds_msgs.
/**
  * ms时间辍
 */
typedef struct hds_msgs__msg__ExceptionChannel
{
  uint64_t timestamp;
  /// 异常类型
  hds_msgs__msg__Exception__Sequence exception_list;
} hds_msgs__msg__ExceptionChannel;

// Struct for a sequence of hds_msgs__msg__ExceptionChannel.
typedef struct hds_msgs__msg__ExceptionChannel__Sequence
{
  hds_msgs__msg__ExceptionChannel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hds_msgs__msg__ExceptionChannel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_H_
