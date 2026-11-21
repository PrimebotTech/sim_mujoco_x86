// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/RegisterCustomMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion'
// Member 'res_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RegisterCustomMotion in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__RegisterCustomMotion_Request
{
  /// 动作名称
  rosidl_runtime_c__String motion;
  /// 资源路径
  rosidl_runtime_c__String res_path;
  /// 注册动作是否落盘(暂时不可用)
  bool write_to_disk;
} aimdk_msgs__srv__RegisterCustomMotion_Request;

// Struct for a sequence of aimdk_msgs__srv__RegisterCustomMotion_Request.
typedef struct aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence
{
  aimdk_msgs__srv__RegisterCustomMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"

/// Struct defined in srv/RegisterCustomMotion in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__RegisterCustomMotion_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonTaskResponse response;
} aimdk_msgs__srv__RegisterCustomMotion_Response;

// Struct for a sequence of aimdk_msgs__srv__RegisterCustomMotion_Response.
typedef struct aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence
{
  aimdk_msgs__srv__RegisterCustomMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_H_
