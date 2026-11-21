// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetPmuSN.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PMU_SN'.
/**
  * 目标设备是PMU
 */
enum
{
  aimdk_msgs__srv__GetPmuSN_Request__PMU_SN = 0
};

/// Constant 'LORA_SN'.
/**
  * 目标设备是LORA
 */
enum
{
  aimdk_msgs__srv__GetPmuSN_Request__LORA_SN = 1
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"

/// Struct defined in srv/GetPmuSN in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetPmuSN_Request
{
  aimdk_msgs__msg__CommonRequest request;
  uint8_t device;
} aimdk_msgs__srv__GetPmuSN_Request;

// Struct for a sequence of aimdk_msgs__srv__GetPmuSN_Request.
typedef struct aimdk_msgs__srv__GetPmuSN_Request__Sequence
{
  aimdk_msgs__srv__GetPmuSN_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetPmuSN_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/GetPmuSN in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetPmuSN_Response
{
  aimdk_msgs__msg__CommonResponse response;
  /// 设置是否成功
  uint16_t result;
  uint8_t serial_number[19];
} aimdk_msgs__srv__GetPmuSN_Response;

// Struct for a sequence of aimdk_msgs__srv__GetPmuSN_Response.
typedef struct aimdk_msgs__srv__GetPmuSN_Response__Sequence
{
  aimdk_msgs__srv__GetPmuSN_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetPmuSN_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_PMU_SN__STRUCT_H_
