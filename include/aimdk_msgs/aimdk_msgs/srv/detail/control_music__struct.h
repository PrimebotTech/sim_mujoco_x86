// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/ControlMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROL_TYPE_NONE'.
/**
  * control_type 枚举
  * 空类型
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_NONE = 0l
};

/// Constant 'CONTROL_TYPE_PLAY'.
/**
  * 播放
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_PLAY = 1l
};

/// Constant 'CONTROL_TYPE_STOP'.
/**
  * 停止
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_STOP = 2l
};

/// Constant 'CONTROL_TYPE_PAUSE'.
/**
  * 暂停
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_PAUSE = 3l
};

/// Constant 'CONTROL_TYPE_RESUME'.
/**
  * 恢复
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_RESUME = 4l
};

/// Constant 'CONTROL_TYPE_PREVIOUS'.
/**
  * 上一首
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_PREVIOUS = 5l
};

/// Constant 'CONTROL_TYPE_NEXT'.
/**
  * 下一首
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_NEXT = 6l
};

/// Constant 'CONTROL_TYPE_DEBUG'.
/**
  * 调试
 */
enum
{
  aimdk_msgs__srv__ControlMusic_Request__CONTROL_TYPE_DEBUG = 1000l
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'debug_args'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlMusic in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__ControlMusic_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 控制类型
  int32_t control_type;
  /// 播放索引（从0开始），当 control_type == CONTROL_TYPE_PLAY 时有效，用于播放歌单中指定索引对应的歌曲。缺省时，默认播放当前歌曲（机器人播放器内部维护的一个索引）。
  int32_t play_index;
  /// 是否禁用自动播放下一首，当 control_type == CONTROL_TYPE_PLAY 时有效，默认false（默认开启自动播放下一首功能）。
  bool no_auto_next;
  /// 调试参数
  rosidl_runtime_c__String debug_args;
} aimdk_msgs__srv__ControlMusic_Request;

// Struct for a sequence of aimdk_msgs__srv__ControlMusic_Request.
typedef struct aimdk_msgs__srv__ControlMusic_Request__Sequence
{
  aimdk_msgs__srv__ControlMusic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__ControlMusic_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/ControlMusic in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__ControlMusic_Response
{
  aimdk_msgs__msg__CommonResponse response;
  /// 控制命令id
  uint64_t control_command_id;
} aimdk_msgs__srv__ControlMusic_Response;

// Struct for a sequence of aimdk_msgs__srv__ControlMusic_Response.
typedef struct aimdk_msgs__srv__ControlMusic_Response__Sequence
{
  aimdk_msgs__srv__ControlMusic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__ControlMusic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_H_
