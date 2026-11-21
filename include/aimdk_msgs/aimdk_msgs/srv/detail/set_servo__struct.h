// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_H_

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

/// Struct defined in srv/SetServo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetServo_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 位置,范围为0-90度，0度为四足形态的位置，90度为双足形态的位置
  uint8_t position;
  /// 速度，范围为100-1000。该值为每秒运动的步数，1步为0.225度。
  uint16_t speed;
} aimdk_msgs__srv__SetServo_Request;

// Struct for a sequence of aimdk_msgs__srv__SetServo_Request.
typedef struct aimdk_msgs__srv__SetServo_Request__Sequence
{
  aimdk_msgs__srv__SetServo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetServo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetServo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetServo_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonResponse header;
} aimdk_msgs__srv__SetServo_Response;

// Struct for a sequence of aimdk_msgs__srv__SetServo_Response.
typedef struct aimdk_msgs__srv__SetServo_Response__Sequence
{
  aimdk_msgs__srv__SetServo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetServo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_SERVO__STRUCT_H_
