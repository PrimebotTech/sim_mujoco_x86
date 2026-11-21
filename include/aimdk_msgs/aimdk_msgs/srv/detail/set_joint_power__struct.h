// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetJointPower.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWER_ON'.
/**
  * 电机上电
 */
enum
{
  aimdk_msgs__srv__SetJointPower_Request__POWER_ON = 1
};

/// Constant 'POWER_OFF'.
/**
  * 电机下电
 */
enum
{
  aimdk_msgs__srv__SetJointPower_Request__POWER_OFF = 2
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'input_source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointPower in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetJointPower_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 调用请求的模块名
  rosidl_runtime_c__String input_source;
  /// 命令
  uint8_t command;
} aimdk_msgs__srv__SetJointPower_Request;

// Struct for a sequence of aimdk_msgs__srv__SetJointPower_Request.
typedef struct aimdk_msgs__srv__SetJointPower_Request__Sequence
{
  aimdk_msgs__srv__SetJointPower_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetJointPower_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetJointPower in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetJointPower_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonResponse header;
} aimdk_msgs__srv__SetJointPower_Response;

// Struct for a sequence of aimdk_msgs__srv__SetJointPower_Response.
typedef struct aimdk_msgs__srv__SetJointPower_Response__Sequence
{
  aimdk_msgs__srv__SetJointPower_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetJointPower_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_JOINT_POWER__STRUCT_H_
