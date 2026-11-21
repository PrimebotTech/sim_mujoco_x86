// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/MotorTest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__STRUCT_H_

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
// Member 'request_payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MotorTest in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__MotorTest_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 从站序号 1 2  3
  uint8_t dcu_type;
  /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
  uint8_t can_channel;
  /// can通信id
  uint8_t can_id;
  /// payload len
  uint8_t payload_len;
  /// payload
  rosidl_runtime_c__uint8__Sequence request_payload;
} aimdk_msgs__srv__MotorTest_Request;

// Struct for a sequence of aimdk_msgs__srv__MotorTest_Request.
typedef struct aimdk_msgs__srv__MotorTest_Request__Sequence
{
  aimdk_msgs__srv__MotorTest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__MotorTest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'response_payload'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MotorTest in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__MotorTest_Response
{
  aimdk_msgs__msg__CommonResponse response;
  /// 从站序号 1 2  3
  uint8_t dcu_type;
  /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
  uint8_t can_channel;
  /// can通信id
  uint8_t can_id;
  /// payload len
  uint8_t payload_len;
  /// payload
  rosidl_runtime_c__uint8__Sequence response_payload;
} aimdk_msgs__srv__MotorTest_Response;

// Struct for a sequence of aimdk_msgs__srv__MotorTest_Response.
typedef struct aimdk_msgs__srv__MotorTest_Response__Sequence
{
  aimdk_msgs__srv__MotorTest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__MotorTest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__STRUCT_H_
