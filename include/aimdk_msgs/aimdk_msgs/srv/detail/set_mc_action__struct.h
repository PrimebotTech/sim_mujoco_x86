// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetMcAction.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_ACTION__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_ACTION__STRUCT_H_

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
// Member 'source'
#include "rosidl_runtime_c/string.h"
// Member 'command'
#include "aimdk_msgs/msg/detail/mc_action_command__struct.h"

/// Struct defined in srv/SetMcAction in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcAction_Request
{
  aimdk_msgs__msg__RequestHeader header;
  /// 触发源 定义见 McTaskSource.msg
  rosidl_runtime_c__String source;
  /// Action命令
  aimdk_msgs__msg__McActionCommand command;
} aimdk_msgs__srv__SetMcAction_Request;

// Struct for a sequence of aimdk_msgs__srv__SetMcAction_Request.
typedef struct aimdk_msgs__srv__SetMcAction_Request__Sequence
{
  aimdk_msgs__srv__SetMcAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcAction_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"

/// Struct defined in srv/SetMcAction in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcAction_Response
{
  aimdk_msgs__msg__CommonTaskResponse response;
} aimdk_msgs__srv__SetMcAction_Response;

// Struct for a sequence of aimdk_msgs__srv__SetMcAction_Response.
typedef struct aimdk_msgs__srv__SetMcAction_Response__Sequence
{
  aimdk_msgs__srv__SetMcAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcAction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_ACTION__STRUCT_H_
