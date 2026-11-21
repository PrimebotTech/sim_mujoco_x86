// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetMcMotions.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__STRUCT_H_

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
// Member 'form_state'
#include "aimdk_msgs/msg/detail/mc_form_state__struct.h"

/// Struct defined in srv/GetMcMotions in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcMotions_Request
{
  aimdk_msgs__msg__RequestHeader header;
  /// 动作形态，通过指定形态过滤动作
  aimdk_msgs__msg__McFormState form_state;
} aimdk_msgs__srv__GetMcMotions_Request;

// Struct for a sequence of aimdk_msgs__srv__GetMcMotions_Request.
typedef struct aimdk_msgs__srv__GetMcMotions_Request__Sequence
{
  aimdk_msgs__srv__GetMcMotions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcMotions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"
// Member 'motion'
#include "aimdk_msgs/msg/detail/mc_motion__struct.h"

/// Struct defined in srv/GetMcMotions in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcMotions_Response
{
  aimdk_msgs__msg__CommonTaskResponse response;
  /// 当前存在的动作列表
  aimdk_msgs__msg__McMotion__Sequence motion;
} aimdk_msgs__srv__GetMcMotions_Response;

// Struct for a sequence of aimdk_msgs__srv__GetMcMotions_Response.
typedef struct aimdk_msgs__srv__GetMcMotions_Response__Sequence
{
  aimdk_msgs__srv__GetMcMotions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcMotions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__STRUCT_H_
