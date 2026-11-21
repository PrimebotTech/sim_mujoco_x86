// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetNeckLightState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__STRUCT_H_

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

/// Struct defined in srv/GetNeckLightState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetNeckLightState_Request
{
  aimdk_msgs__msg__CommonRequest request;
} aimdk_msgs__srv__GetNeckLightState_Request;

// Struct for a sequence of aimdk_msgs__srv__GetNeckLightState_Request.
typedef struct aimdk_msgs__srv__GetNeckLightState_Request__Sequence
{
  aimdk_msgs__srv__GetNeckLightState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetNeckLightState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/GetNeckLightState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetNeckLightState_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonResponse header;
  /// 开关: true开, false关
  bool enable;
  /// 亮度: 0-100 百分比
  uint8_t brightness;
} aimdk_msgs__srv__GetNeckLightState_Response;

// Struct for a sequence of aimdk_msgs__srv__GetNeckLightState_Response.
typedef struct aimdk_msgs__srv__GetNeckLightState_Response__Sequence
{
  aimdk_msgs__srv__GetNeckLightState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetNeckLightState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_NECK_LIGHT_STATE__STRUCT_H_
