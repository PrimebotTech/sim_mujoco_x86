// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLAYBACK_STATE_IDLE'.
/**
  * playback_state 枚举
  * 空闲状态
 */
enum
{
  aimdk_msgs__msg__MusicState__PLAYBACK_STATE_IDLE = 0l
};

/// Constant 'PLAYBACK_STATE_PLAYING'.
/**
  * 播放状态
 */
enum
{
  aimdk_msgs__msg__MusicState__PLAYBACK_STATE_PLAYING = 1l
};

/// Constant 'PLAYBACK_STATE_PAUSED'.
/**
  * 暂停状态
 */
enum
{
  aimdk_msgs__msg__MusicState__PLAYBACK_STATE_PAUSED = 2l
};

/// Constant 'PLAYBACK_STATE_STOPED'.
/**
  * 停止状态
 */
enum
{
  aimdk_msgs__msg__MusicState__PLAYBACK_STATE_STOPED = 4l
};

/// Constant 'PLAYBACK_STATE_ERROR'.
/**
  * 错误状态
 */
enum
{
  aimdk_msgs__msg__MusicState__PLAYBACK_STATE_ERROR = 5l
};

// Include directives for member types
// Member 'song_name'
// Member 'artist'
// Member 'qualities'
// Member 'song_list_name'
// Member 'search_resp_tts_text'
// Member 'search_resp_code'
// Member 'url_resp_warning'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MusicState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 发布音乐播放状态
  * 发布到 /aima/hal/audio/music_state
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__MusicState
{
  /// 当前已经执行的最新控制命令id
  uint64_t control_command_id;
  /// 当前播放状态
  int32_t playback_state;
  /// 当前播放音乐名称
  rosidl_runtime_c__String song_name;
  /// 当前播放音乐歌手名
  rosidl_runtime_c__String__Sequence artist;
  /// 当前播放音乐总时长，单位秒
  double total_duration;
  /// 当前播放进度
  double current_time;
  /// 是否是VIP歌曲
  bool vip_song;
  /// 是否在试听
  bool trail;
  /// 上游自己的播放判定
  int32_t playable_code;
  /// 音质列表
  rosidl_runtime_c__String__Sequence qualities;
  /// 当前选择音质索引
  int32_t quality_index;
  /// 当前歌单对应的搜索命令id
  uint64_t search_command_id;
  /// 当前歌单名称，和搜索关键字保持一致
  rosidl_runtime_c__String song_list_name;
  /// 当前歌单歌曲数量
  int32_t song_list_size;
  /// 当前播放歌曲在歌单中的索引，从0开始
  int32_t playback_index;
  /// 当前歌单sp，和音乐搜索服务 SearchMusic 里的定义保持一致
  int32_t sp;
  /// 搜索请求返回的HTTP STATUS
  int32_t search_resp_status;
  /// 搜索请求返回的tts
  rosidl_runtime_c__String search_resp_tts_text;
  /// 搜索请求返回的code
  rosidl_runtime_c__String search_resp_code;
  /// url请求返回的warning
  rosidl_runtime_c__String url_resp_warning;
} aimdk_msgs__msg__MusicState;

// Struct for a sequence of aimdk_msgs__msg__MusicState.
typedef struct aimdk_msgs__msg__MusicState__Sequence
{
  aimdk_msgs__msg__MusicState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__MusicState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_H_
