// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetAlertCodeJsonFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__STRUCT_H_

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
#include "aimdk_msgs/msg/detail/common_request__struct.h"

/// Struct defined in srv/GetAlertCodeJsonFile in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetAlertCodeJsonFile_Request
{
  /// ----------------------------------------------------
  /// 请求头
  aimdk_msgs__msg__CommonRequest header;
} aimdk_msgs__srv__GetAlertCodeJsonFile_Request;

// Struct for a sequence of aimdk_msgs__srv__GetAlertCodeJsonFile_Request.
typedef struct aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence
{
  aimdk_msgs__srv__GetAlertCodeJsonFile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'alert_code_json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetAlertCodeJsonFile in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetAlertCodeJsonFile_Response
{
  /// ----------------------------------------------------
  /// 响应头
  aimdk_msgs__msg__CommonResponse header;
  /// ----------------------------------------------------
  /// json文件转成字符串返回
  rosidl_runtime_c__String alert_code_json;
} aimdk_msgs__srv__GetAlertCodeJsonFile_Response;

// Struct for a sequence of aimdk_msgs__srv__GetAlertCodeJsonFile_Response.
typedef struct aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence
{
  aimdk_msgs__srv__GetAlertCodeJsonFile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_ALERT_CODE_JSON_FILE__STRUCT_H_
