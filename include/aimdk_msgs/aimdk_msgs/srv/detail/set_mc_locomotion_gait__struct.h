// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetMcLocomotionGait.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__STRUCT_H_

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
// Member 'gait'
#include "aimdk_msgs/msg/detail/mc_locomotion_gait_type__struct.h"

/// Struct defined in srv/SetMcLocomotionGait in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcLocomotionGait_Request
{
  aimdk_msgs__msg__RequestHeader header;
  /// 步态
  aimdk_msgs__msg__McLocomotionGaitType gait;
} aimdk_msgs__srv__SetMcLocomotionGait_Request;

// Struct for a sequence of aimdk_msgs__srv__SetMcLocomotionGait_Request.
typedef struct aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence
{
  aimdk_msgs__srv__SetMcLocomotionGait_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetMcLocomotionGait in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcLocomotionGait_Response
{
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__SetMcLocomotionGait_Response;

// Struct for a sequence of aimdk_msgs__srv__SetMcLocomotionGait_Response.
typedef struct aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence
{
  aimdk_msgs__srv__SetMcLocomotionGait_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__STRUCT_H_
