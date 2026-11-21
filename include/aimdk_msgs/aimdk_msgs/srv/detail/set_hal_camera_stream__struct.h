// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetHalCameraStream.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SET'.
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__SET = 0
};

/// Constant 'GET'.
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__GET = 1
};

/// Constant 'CAMERA_0'.
/**
  * 双目左 or 低配单目
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__CAMERA_0 = 1ul
};

/// Constant 'CAMERA_1'.
/**
  * 双目右
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__CAMERA_1 = 2ul
};

/// Constant 'CAMERA_2'.
/**
  * 鱼眼左
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__CAMERA_2 = 4ul
};

/// Constant 'CAMERA_3'.
/**
  * 鱼眼右
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Request__CAMERA_3 = 8ul
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'trace_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetHalCameraStream in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalCameraStream_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 请求唯一标识，用于问题定位
  rosidl_runtime_c__String trace_id;
  /// 请求类型，0: SET 1: GET
  uint8_t req_type;
  ///  目标相机电源控制mask，0关闭 1打开
  /// 预留
  uint32_t power_ctrl_mask;
  /// 目标相机出流控制mask，0关闭 1打开
  uint32_t stream_ctrl_mask;
} aimdk_msgs__srv__SetHalCameraStream_Request;

// Struct for a sequence of aimdk_msgs__srv__SetHalCameraStream_Request.
typedef struct aimdk_msgs__srv__SetHalCameraStream_Request__Sequence
{
  aimdk_msgs__srv__SetHalCameraStream_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalCameraStream_Request__Sequence;


// Constants defined in the message

/// Constant 'REQ_FAILED'.
/**
  * 最近一次请求失败
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Response__REQ_FAILED = 0
};

/// Constant 'REQ_SUCCESS'.
/**
  * 最近一次切换成功
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Response__REQ_SUCCESS = 1
};

/// Constant 'STATE_SWITCHED'.
/**
  * 已经切换完成
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Response__STATE_SWITCHED = 0
};

/// Constant 'STATE_SWITCHING'.
/**
  * 正在切换中
 */
enum
{
  aimdk_msgs__srv__SetHalCameraStream_Response__STATE_SWITCHING = 1
};

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'trace_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetHalCameraStream in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalCameraStream_Response
{
  /// 响应头（结果以 status 为准）
  aimdk_msgs__msg__CommonResponse response;
  /// 本次响应对于的请求id
  rosidl_runtime_c__String trace_id;
  /// 热切换结果，0 失败 1 成功
  uint8_t req_result;
  /// 上一次执行steam_ctrl_mask
  uint32_t target_state_mask;
  /// 当前切换状态
  uint8_t switch_state;
} aimdk_msgs__srv__SetHalCameraStream_Response;

// Struct for a sequence of aimdk_msgs__srv__SetHalCameraStream_Response.
typedef struct aimdk_msgs__srv__SetHalCameraStream_Response__Sequence
{
  aimdk_msgs__srv__SetHalCameraStream_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalCameraStream_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_H_
