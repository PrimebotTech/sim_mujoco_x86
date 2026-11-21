// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetModuleInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'module_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetModuleInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetModuleInfo_Request
{
  /// ---------------- 请求 ----------------
  aimdk_msgs__msg__CommonRequest request;
  rosidl_runtime_c__String module_id;
} aimdk_msgs__srv__GetModuleInfo_Request;

// Struct for a sequence of aimdk_msgs__srv__GetModuleInfo_Request.
typedef struct aimdk_msgs__srv__GetModuleInfo_Request__Sequence
{
  aimdk_msgs__srv__GetModuleInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetModuleInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'modules'
#include "aimdk_msgs/msg/detail/module_info__struct.h"

/// Struct defined in srv/GetModuleInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetModuleInfo_Response
{
  /// ---------------- 响应 ----------------
  aimdk_msgs__msg__CommonResponse response;
  aimdk_msgs__msg__ModuleInfo__Sequence modules;
} aimdk_msgs__srv__GetModuleInfo_Response;

// Struct for a sequence of aimdk_msgs__srv__GetModuleInfo_Response.
typedef struct aimdk_msgs__srv__GetModuleInfo_Response__Sequence
{
  aimdk_msgs__srv__GetModuleInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetModuleInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MODULE_INFO__STRUCT_H_
