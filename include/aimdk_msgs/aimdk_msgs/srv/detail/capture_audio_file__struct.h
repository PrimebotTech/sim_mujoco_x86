// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/CaptureAudioFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__STRUCT_H_

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
// Member 'file'
#include "aimdk_msgs/msg/detail/audio_file__struct.h"

/// Struct defined in srv/CaptureAudioFile in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__CaptureAudioFile_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 文件信息
  aimdk_msgs__msg__AudioFile file;
  /// 可选项，文件录制时长
  /// 如未设置时长，默认一直录音，调用StopCaptureAudioFile或切换内外置麦时停止录音
  uint32_t duration;
} aimdk_msgs__srv__CaptureAudioFile_Request;

// Struct for a sequence of aimdk_msgs__srv__CaptureAudioFile_Request.
typedef struct aimdk_msgs__srv__CaptureAudioFile_Request__Sequence
{
  aimdk_msgs__srv__CaptureAudioFile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__CaptureAudioFile_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'file'
// already included above
// #include "aimdk_msgs/msg/detail/audio_file__struct.h"

/// Struct defined in srv/CaptureAudioFile in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__CaptureAudioFile_Response
{
  /// ----------------------------------------------------
  /// response
  /// 响应头
  aimdk_msgs__msg__CommonResponse response;
  /// 必要项，表明当前麦克风类型
  uint32_t mic_source;
  /// 文件信息
  aimdk_msgs__msg__AudioFile file;
} aimdk_msgs__srv__CaptureAudioFile_Response;

// Struct for a sequence of aimdk_msgs__srv__CaptureAudioFile_Response.
typedef struct aimdk_msgs__srv__CaptureAudioFile_Response__Sequence
{
  aimdk_msgs__srv__CaptureAudioFile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__CaptureAudioFile_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__STRUCT_H_
