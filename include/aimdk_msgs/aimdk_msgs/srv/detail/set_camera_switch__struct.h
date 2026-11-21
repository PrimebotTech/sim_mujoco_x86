// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetCameraSwitch.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__STRUCT_H_

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

/// Struct defined in srv/SetCameraSwitch in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetCameraSwitch_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 请求相机开关状态
  /// true(open)
  /// false(close)
  bool camera_enabled;
} aimdk_msgs__srv__SetCameraSwitch_Request;

// Struct for a sequence of aimdk_msgs__srv__SetCameraSwitch_Request.
typedef struct aimdk_msgs__srv__SetCameraSwitch_Request__Sequence
{
  aimdk_msgs__srv__SetCameraSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetCameraSwitch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetCameraSwitch in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetCameraSwitch_Response
{
  /// ----------------------------------------------------
  /// response
  /// 响应头
  aimdk_msgs__msg__CommonResponse response;
  /// 当前相机开关状态
  bool camera_enabled;
} aimdk_msgs__srv__SetCameraSwitch_Response;

// Struct for a sequence of aimdk_msgs__srv__SetCameraSwitch_Response.
typedef struct aimdk_msgs__srv__SetCameraSwitch_Response__Sequence
{
  aimdk_msgs__srv__SetCameraSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetCameraSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__STRUCT_H_
