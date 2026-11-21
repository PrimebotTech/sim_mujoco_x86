// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetMcTaskState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_TASK_STATE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_TASK_STATE__STRUCT_H_

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
#include "aimdk_msgs/msg/detail/common_task_request__struct.h"

/// Struct defined in srv/GetMcTaskState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcTaskState_Request
{
  aimdk_msgs__msg__CommonTaskRequest request;
} aimdk_msgs__srv__GetMcTaskState_Request;

// Struct for a sequence of aimdk_msgs__srv__GetMcTaskState_Request.
typedef struct aimdk_msgs__srv__GetMcTaskState_Request__Sequence
{
  aimdk_msgs__srv__GetMcTaskState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcTaskState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"

/// Struct defined in srv/GetMcTaskState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcTaskState_Response
{
  aimdk_msgs__msg__CommonTaskResponse response;
} aimdk_msgs__srv__GetMcTaskState_Response;

// Struct for a sequence of aimdk_msgs__srv__GetMcTaskState_Response.
typedef struct aimdk_msgs__srv__GetMcTaskState_Response__Sequence
{
  aimdk_msgs__srv__GetMcTaskState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcTaskState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_TASK_STATE__STRUCT_H_
