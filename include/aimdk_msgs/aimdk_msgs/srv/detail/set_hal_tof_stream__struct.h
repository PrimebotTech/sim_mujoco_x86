// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetHalTofStream.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAMERA_ALL'.
/**
  * 全部 5 路 TOF（默认）
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_ALL = 31ul
};

/// Constant 'CAMERA_TOF_0'.
/**
  * main tof
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_TOF_0 = 1ul
};

/// Constant 'CAMERA_TOF_1'.
/**
  * front tof
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_TOF_1 = 2ul
};

/// Constant 'CAMERA_TOF_2'.
/**
  * rear tof
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_TOF_2 = 4ul
};

/// Constant 'CAMERA_TOF_3'.
/**
  * left tof
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_TOF_3 = 8ul
};

/// Constant 'CAMERA_TOF_4'.
/**
  * right tof
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Request__CAMERA_TOF_4 = 16ul
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'trace_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetHalTofStream in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalTofStream_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 请求唯一标识，用于问题定位
  rosidl_runtime_c__String trace_id;
  ///  目标相机电源控制mask，0关闭 1打开
  /// 预留
  uint32_t power_ctrl_mask;
  /// 目标相机出流控制mask，0关闭 1打开
  uint32_t stream_ctrl_mask;
} aimdk_msgs__srv__SetHalTofStream_Request;

// Struct for a sequence of aimdk_msgs__srv__SetHalTofStream_Request.
typedef struct aimdk_msgs__srv__SetHalTofStream_Request__Sequence
{
  aimdk_msgs__srv__SetHalTofStream_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalTofStream_Request__Sequence;


// Constants defined in the message

/// Constant 'SWITCH_FAILED'.
/**
  * 最近一次请求的切换失败
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Response__SWITCH_FAILED = 0
};

/// Constant 'SWITCH_SUCCESS'.
/**
  * 最近一次切换成功
 */
enum
{
  aimdk_msgs__srv__SetHalTofStream_Response__SWITCH_SUCCESS = 1
};

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'trace_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetHalTofStream in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalTofStream_Response
{
  /// 响应头（结果以 status 为准）
  aimdk_msgs__msg__CommonResponse response;
  /// 本次响应对于的请求id
  rosidl_runtime_c__String trace_id;
  /// 热切换结果，0 失败 1 成功
  uint8_t switch_state;
} aimdk_msgs__srv__SetHalTofStream_Response;

// Struct for a sequence of aimdk_msgs__srv__SetHalTofStream_Response.
typedef struct aimdk_msgs__srv__SetHalTofStream_Response__Sequence
{
  aimdk_msgs__srv__SetHalTofStream_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalTofStream_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_TOF_STREAM__STRUCT_H_
