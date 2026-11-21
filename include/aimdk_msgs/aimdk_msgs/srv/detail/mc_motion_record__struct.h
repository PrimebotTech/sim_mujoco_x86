// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/McMotionRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RECORD_UPPER'.
/**
  * 上半身
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__RECORD_UPPER = 1l
};

/// Constant 'RECORD_LOWER'.
/**
  * 下半身
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__RECORD_LOWER = 2l
};

/// Constant 'RECORD_ALL'.
/**
  * 全身
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__RECORD_ALL = 3l
};

/// Constant 'OPER_START'.
/**
  * 开始录制
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__OPER_START = 1l
};

/// Constant 'OPER_STOP'.
/**
  * 结束录制
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__OPER_STOP = 2l
};

/// Constant 'OPER_PAUSE'.
/**
  * 暂停录制(产品暂时没提)
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__OPER_PAUSE = 3l
};

/// Constant 'OPER_RESUME'.
/**
  * 继续录制(产品暂时没提)
 */
enum
{
  aimdk_msgs__srv__McMotionRecord_Request__OPER_RESUME = 4l
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'folder_path'
// Member 'file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/McMotionRecord in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__McMotionRecord_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 操作区域部分
  int32_t record_area;
  /// 操作模式部分
  int32_t operation_type;
  /// 录制时长限制
  int32_t max_duration;
  /// 存储路径
  rosidl_runtime_c__String folder_path;
  /// 文件名
  rosidl_runtime_c__String file_name;
} aimdk_msgs__srv__McMotionRecord_Request;

// Struct for a sequence of aimdk_msgs__srv__McMotionRecord_Request.
typedef struct aimdk_msgs__srv__McMotionRecord_Request__Sequence
{
  aimdk_msgs__srv__McMotionRecord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__McMotionRecord_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/McMotionRecord in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__McMotionRecord_Response
{
  /// Response 部分
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__McMotionRecord_Response;

// Struct for a sequence of aimdk_msgs__srv__McMotionRecord_Response.
typedef struct aimdk_msgs__srv__McMotionRecord_Response__Sequence
{
  aimdk_msgs__srv__McMotionRecord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__McMotionRecord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_H_
