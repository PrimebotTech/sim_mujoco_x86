// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/FluxGetRecordStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FluxGetRecordStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__FluxGetRecordStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} aimdk_msgs__srv__FluxGetRecordStatus_Request;

// Struct for a sequence of aimdk_msgs__srv__FluxGetRecordStatus_Request.
typedef struct aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence
{
  aimdk_msgs__srv__FluxGetRecordStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FluxGetRecordStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__FluxGetRecordStatus_Response
{
  /// 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
  int8_t recording;
  /// 录制持续秒数（未录制时为 0）
  int64_t duration_sec;
  /// 录制来源 "app" / "agent" / "" (未录制时为空)
  rosidl_runtime_c__String source;
} aimdk_msgs__srv__FluxGetRecordStatus_Response;

// Struct for a sequence of aimdk_msgs__srv__FluxGetRecordStatus_Response.
typedef struct aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence
{
  aimdk_msgs__srv__FluxGetRecordStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__STRUCT_H_
