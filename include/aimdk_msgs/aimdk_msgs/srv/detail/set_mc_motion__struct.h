// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetMcMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIMIC_QY'.
/**
  * 自有模型
 */
enum
{
  aimdk_msgs__srv__SetMcMotion_Request__MIMIC_QY = 1l
};

/// Constant 'MIMIC_LC'.
/**
  * 灵创模型
 */
enum
{
  aimdk_msgs__srv__SetMcMotion_Request__MIMIC_LC = 2l
};

/// Constant 'PRELOAD'.
/**
  * 预先加载
 */
enum
{
  aimdk_msgs__srv__SetMcMotion_Request__PRELOAD = 1l
};

/// Constant 'EXECUTION'.
/**
  * 开始执行
 */
enum
{
  aimdk_msgs__srv__SetMcMotion_Request__EXECUTION = 2l
};

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__struct.h"
// Member 'source'
// Member 'motion'
// Member 'model'
// Member 'resource'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMcMotion in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcMotion_Request
{
  /// 请求头
  aimdk_msgs__msg__RequestHeader header;
  /// 触发源 定义见 McTaskSource.msg
  rosidl_runtime_c__String source;
  /// 资源类型
  int32_t type;
  /// 全身动作名称，若motion为空，加载model中resource; 反之，从本地加载执行资源。
  rosidl_runtime_c__String motion;
  /// onnx 模型绝对路径
  rosidl_runtime_c__String model;
  /// 资源绝对路径，比如轨迹参考
  rosidl_runtime_c__String resource;
  /// 是否打断(给后面animation接口合并预留)
  bool interrupt;
  /// 操作类型
  int32_t operation;
} aimdk_msgs__srv__SetMcMotion_Request;

// Struct for a sequence of aimdk_msgs__srv__SetMcMotion_Request.
typedef struct aimdk_msgs__srv__SetMcMotion_Request__Sequence
{
  aimdk_msgs__srv__SetMcMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcMotion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.h"

/// Struct defined in srv/SetMcMotion in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetMcMotion_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonTaskResponse response;
} aimdk_msgs__srv__SetMcMotion_Response;

// Struct for a sequence of aimdk_msgs__srv__SetMcMotion_Response.
typedef struct aimdk_msgs__srv__SetMcMotion_Response__Sequence
{
  aimdk_msgs__srv__SetMcMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetMcMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__STRUCT_H_
