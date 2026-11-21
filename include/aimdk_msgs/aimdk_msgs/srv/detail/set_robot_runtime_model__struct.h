// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetRobotRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_H_

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
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.h"

/// Struct defined in srv/SetRobotRuntimeModel in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetRobotRuntimeModel_Request
{
  aimdk_msgs__msg__RequestHeader header;
  aimdk_msgs__msg__McRuntimeModel runtime_model;
} aimdk_msgs__srv__SetRobotRuntimeModel_Request;

// Struct for a sequence of aimdk_msgs__srv__SetRobotRuntimeModel_Request.
typedef struct aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence
{
  aimdk_msgs__srv__SetRobotRuntimeModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"

/// Struct defined in srv/SetRobotRuntimeModel in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetRobotRuntimeModel_Response
{
  aimdk_msgs__msg__CommonTaskResponse response;
} aimdk_msgs__srv__SetRobotRuntimeModel_Response;

// Struct for a sequence of aimdk_msgs__srv__SetRobotRuntimeModel_Response.
typedef struct aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence
{
  aimdk_msgs__srv__SetRobotRuntimeModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_H_
