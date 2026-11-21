// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/HALCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__STRUCT_H_

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
// Member 'command'
// Member 'param_keys'
// Member 'param_values'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HALCameraCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__HALCameraCommand_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 命令名（点分层级），例如：
  ///   stream.enable    → 开启某路 NV12 发布
  ///   stream.disable   → 关闭某路 NV12 发布
  ///   （预留：set.fps、set.resolution、snapshot.trigger ...）
  rosidl_runtime_c__String command;
  /// KV 参数列表（param_keys[i] 对应 param_values[i]）
  /// 示例 stream.enable: keys=["topic"], values=["/aima/hal/camera/bgr_camera_l/nv12"]
  rosidl_runtime_c__String__Sequence param_keys;
  rosidl_runtime_c__String__Sequence param_values;
} aimdk_msgs__srv__HALCameraCommand_Request;

// Struct for a sequence of aimdk_msgs__srv__HALCameraCommand_Request.
typedef struct aimdk_msgs__srv__HALCameraCommand_Request__Sequence
{
  aimdk_msgs__srv__HALCameraCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__HALCameraCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'result_keys'
// Member 'result_values'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HALCameraCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__HALCameraCommand_Response
{
  /// response
  aimdk_msgs__msg__CommonResponse response;
  /// 可选返回值（供需要回传数据的命令使用，如 get.fps 返回当前帧率）
  rosidl_runtime_c__String__Sequence result_keys;
  rosidl_runtime_c__String__Sequence result_values;
} aimdk_msgs__srv__HALCameraCommand_Response;

// Struct for a sequence of aimdk_msgs__srv__HALCameraCommand_Response.
typedef struct aimdk_msgs__srv__HALCameraCommand_Response__Sequence
{
  aimdk_msgs__srv__HALCameraCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__HALCameraCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__STRUCT_H_
