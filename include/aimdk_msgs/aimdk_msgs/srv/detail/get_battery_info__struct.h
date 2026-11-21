// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetBatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__STRUCT_H_

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

/// Struct defined in srv/GetBatteryInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetBatteryInfo_Request
{
  aimdk_msgs__msg__CommonRequest request;
} aimdk_msgs__srv__GetBatteryInfo_Request;

// Struct for a sequence of aimdk_msgs__srv__GetBatteryInfo_Request.
typedef struct aimdk_msgs__srv__GetBatteryInfo_Request__Sequence
{
  aimdk_msgs__srv__GetBatteryInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetBatteryInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'manufacturer'
// Member 'serial_number'
// Member 'protocol_version'
// Member 'hardware_version'
// Member 'software_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBatteryInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetBatteryInfo_Response
{
  aimdk_msgs__msg__CommonResponse response;
  /// 版本信息
  /// 厂家信息
  rosidl_runtime_c__String manufacturer;
  /// 序列号
  rosidl_runtime_c__String serial_number;
  /// 协议版本
  rosidl_runtime_c__String protocol_version;
  /// 硬件版本
  rosidl_runtime_c__String hardware_version;
  /// 软件版本
  rosidl_runtime_c__String software_version;
} aimdk_msgs__srv__GetBatteryInfo_Response;

// Struct for a sequence of aimdk_msgs__srv__GetBatteryInfo_Response.
typedef struct aimdk_msgs__srv__GetBatteryInfo_Response__Sequence
{
  aimdk_msgs__srv__GetBatteryInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetBatteryInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_BATTERY_INFO__STRUCT_H_
