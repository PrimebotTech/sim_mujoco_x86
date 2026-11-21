// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/JpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_id'
// Member 'device'
#include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/compressed_image__struct.h"

/// Struct defined in msg/JpegImage in the package aimdk_msgs.
/**
  * 相机元信息
 */
typedef struct aimdk_msgs__msg__JpegImage
{
  rosidl_runtime_c__String camera_id;
  rosidl_runtime_c__String device;
  uint32_t width;
  uint32_t height;
  uint32_t framerate;
  /// 曝光值
  uint32_t exposure;
  /// 模拟增益
  uint32_t gain;
  /// JPEG 图片数据
  sensor_msgs__msg__CompressedImage image;
} aimdk_msgs__msg__JpegImage;

// Struct for a sequence of aimdk_msgs__msg__JpegImage.
typedef struct aimdk_msgs__msg__JpegImage__Sequence
{
  aimdk_msgs__msg__JpegImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__JpegImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_H_
