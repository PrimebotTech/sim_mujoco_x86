// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetDcuMotorPowerState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__STRUCT_H_

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

/// Struct defined in srv/SetDcuMotorPowerState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetDcuMotorPowerState_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 从站序号 1 2
  uint8_t dcu_type;
  /// 对应状态
  uint8_t state;
} aimdk_msgs__srv__SetDcuMotorPowerState_Request;

// Struct for a sequence of aimdk_msgs__srv__SetDcuMotorPowerState_Request.
typedef struct aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence
{
  aimdk_msgs__srv__SetDcuMotorPowerState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetDcuMotorPowerState in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetDcuMotorPowerState_Response
{
  aimdk_msgs__msg__CommonResponse response;
  uint8_t ret;
} aimdk_msgs__srv__SetDcuMotorPowerState_Response;

// Struct for a sequence of aimdk_msgs__srv__SetDcuMotorPowerState_Response.
typedef struct aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence
{
  aimdk_msgs__srv__SetDcuMotorPowerState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_DCU_MOTOR_POWER_STATE__STRUCT_H_
