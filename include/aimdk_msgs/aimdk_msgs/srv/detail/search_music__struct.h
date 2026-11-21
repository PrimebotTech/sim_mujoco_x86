// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SearchMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SP_TYPE_QM'.
/**
  * sp 枚举
  * QQ音乐
 */
enum
{
  aimdk_msgs__srv__SearchMusic_Request__SP_TYPE_QM = 0l
};

/// Constant 'SP_TYPE_XM'.
/**
  * 喜马拉雅
 */
enum
{
  aimdk_msgs__srv__SearchMusic_Request__SP_TYPE_XM = 1l
};

/// Constant 'LIBRARY_MODE_DEFAULT'.
/**
  * library_mode 枚举
  * 默认曲库
 */
enum
{
  aimdk_msgs__srv__SearchMusic_Request__LIBRARY_MODE_DEFAULT = 1l
};

/// Constant 'LIBRARY_MODE_CHILDREN'.
/**
  * 儿童曲库
 */
enum
{
  aimdk_msgs__srv__SearchMusic_Request__LIBRARY_MODE_CHILDREN = 2l
};

/// Constant 'SIZE_DEFAULT'.
/**
  * 默认歌曲数量
 */
enum
{
  aimdk_msgs__srv__SearchMusic_Request__SIZE_DEFAULT = 30l
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'query'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SearchMusic in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SearchMusic_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 搜索文字
  rosidl_runtime_c__String query;
  /// sp 类型, 默认0（qq音乐）
  int32_t sp;
  /// 请求歌曲数量，默认30
  int32_t size;
  /// 曲库，默认是1（默认曲库）
  int32_t library_mode;
} aimdk_msgs__srv__SearchMusic_Request;

// Struct for a sequence of aimdk_msgs__srv__SearchMusic_Request.
typedef struct aimdk_msgs__srv__SearchMusic_Request__Sequence
{
  aimdk_msgs__srv__SearchMusic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SearchMusic_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SearchMusic in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SearchMusic_Response
{
  aimdk_msgs__msg__CommonResponse response;
  /// 搜索命令id
  uint64_t search_command_id;
} aimdk_msgs__srv__SearchMusic_Response;

// Struct for a sequence of aimdk_msgs__srv__SearchMusic_Response.
typedef struct aimdk_msgs__srv__SearchMusic_Response__Sequence
{
  aimdk_msgs__srv__SearchMusic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SearchMusic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_H_
