// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetDcuInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_H_

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

/// Struct defined in srv/GetDcuInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetDcuInfo_Request
{
  aimdk_msgs__msg__CommonRequest request;
} aimdk_msgs__srv__GetDcuInfo_Request;

// Struct for a sequence of aimdk_msgs__srv__GetDcuInfo_Request.
typedef struct aimdk_msgs__srv__GetDcuInfo_Request__Sequence
{
  aimdk_msgs__srv__GetDcuInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetDcuInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'udcu_fw_ver'
// Member 'udcu_hw_ver'
// Member 'udcu_build_time'
// Member 'ddcu_fw_ver'
// Member 'ddcu_hw_ver'
// Member 'ddcu_build_time'
// Member 'safedcu_fw_ver'
// Member 'safedcu_hw_ver'
// Member 'safedcu_build_time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDcuInfo in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetDcuInfo_Response
{
  aimdk_msgs__msg__CommonResponse response;
  rosidl_runtime_c__String udcu_fw_ver;
  rosidl_runtime_c__String udcu_hw_ver;
  rosidl_runtime_c__String udcu_build_time;
  rosidl_runtime_c__String ddcu_fw_ver;
  rosidl_runtime_c__String ddcu_hw_ver;
  rosidl_runtime_c__String ddcu_build_time;
  rosidl_runtime_c__String safedcu_fw_ver;
  rosidl_runtime_c__String safedcu_hw_ver;
  rosidl_runtime_c__String safedcu_build_time;
} aimdk_msgs__srv__GetDcuInfo_Response;

// Struct for a sequence of aimdk_msgs__srv__GetDcuInfo_Response.
typedef struct aimdk_msgs__srv__GetDcuInfo_Response__Sequence
{
  aimdk_msgs__srv__GetDcuInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetDcuInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_H_
