// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetMusicList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__STRUCT_H_

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

/// Struct defined in srv/GetMusicList in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMusicList_Request
{
  aimdk_msgs__msg__CommonRequest request;
} aimdk_msgs__srv__GetMusicList_Request;

// Struct for a sequence of aimdk_msgs__srv__GetMusicList_Request.
typedef struct aimdk_msgs__srv__GetMusicList_Request__Sequence
{
  aimdk_msgs__srv__GetMusicList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMusicList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'music_list'
#include "aimdk_msgs/msg/detail/music_info__struct.h"
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/GetMusicList in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMusicList_Response
{
  /// 当前歌单
  aimdk_msgs__msg__MusicInfo__Sequence music_list;
  /// 当前播放索引，从0开始
  int32_t current_index;
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__GetMusicList_Response;

// Struct for a sequence of aimdk_msgs__srv__GetMusicList_Response.
typedef struct aimdk_msgs__srv__GetMusicList_Response__Sequence
{
  aimdk_msgs__srv__GetMusicList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMusicList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__STRUCT_H_
