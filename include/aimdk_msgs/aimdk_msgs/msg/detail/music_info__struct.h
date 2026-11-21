// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/MusicInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'name'
// Member 'artist'
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MusicInfo in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 单首歌曲的信息
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__MusicInfo
{
  /// 歌曲id
  rosidl_runtime_c__String id;
  /// 歌曲名称
  rosidl_runtime_c__String name;
  /// 歌手列表
  rosidl_runtime_c__String__Sequence artist;
  /// 时长（毫秒）
  int32_t duration_ms;
  /// 歌曲来源平台，例如qqmusic
  rosidl_runtime_c__String source;
} aimdk_msgs__msg__MusicInfo;

// Struct for a sequence of aimdk_msgs__msg__MusicInfo.
typedef struct aimdk_msgs__msg__MusicInfo__Sequence
{
  aimdk_msgs__msg__MusicInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__MusicInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__STRUCT_H_
