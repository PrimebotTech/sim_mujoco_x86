// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/CaptureJpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_H_

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
// Member 'camera_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureJpegImage in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__CaptureJpegImage_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 相机 ID
  rosidl_runtime_c__String camera_id;
  /// 可选项，等待新帧的超时时间，单位 ms；为 0 时使用服务端默认值
  uint32_t timeout_ms;
} aimdk_msgs__srv__CaptureJpegImage_Request;

// Struct for a sequence of aimdk_msgs__srv__CaptureJpegImage_Request.
typedef struct aimdk_msgs__srv__CaptureJpegImage_Request__Sequence
{
  aimdk_msgs__srv__CaptureJpegImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__CaptureJpegImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'jpeg'
#include "aimdk_msgs/msg/detail/jpeg_image__struct.h"

/// Struct defined in srv/CaptureJpegImage in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__CaptureJpegImage_Response
{
  /// ----------------------------------------------------
  /// response
  /// 响应头
  aimdk_msgs__msg__CommonResponse response;
  /// JPEG 图片数据
  aimdk_msgs__msg__JpegImage jpeg;
} aimdk_msgs__srv__CaptureJpegImage_Response;

// Struct for a sequence of aimdk_msgs__srv__CaptureJpegImage_Response.
typedef struct aimdk_msgs__srv__CaptureJpegImage_Response__Sequence
{
  aimdk_msgs__srv__CaptureJpegImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__CaptureJpegImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_H_
