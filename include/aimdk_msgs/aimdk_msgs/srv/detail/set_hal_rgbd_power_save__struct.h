// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetHalRgbdPowerSave.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAMERA_ALL'.
/**
  * 全部 5 路 TOF（默认）
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_ALL = 0ul
};

/// Constant 'CAMERA_TOF_1'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_TOF_1 = 1ul
};

/// Constant 'CAMERA_TOF_2'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_TOF_2 = 2ul
};

/// Constant 'CAMERA_TOF_3'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_TOF_3 = 4ul
};

/// Constant 'CAMERA_TOF_4'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_TOF_4 = 8ul
};

/// Constant 'CAMERA_TOF_5'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__CAMERA_TOF_5 = 16ul
};

/// Constant 'ENTER_POWER_SAVE_MODE'.
/**
  * 热关闭 TOF
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__ENTER_POWER_SAVE_MODE = 0
};

/// Constant 'EXIT_POWER_SAVE_MODE'.
/**
  * 热启动 TOF
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__EXIT_POWER_SAVE_MODE = 1
};

/// Constant 'TRIGGER_UNKNOWN'.
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__TRIGGER_UNKNOWN = 0
};

/// Constant 'TRIGGER_LOW_POWER'.
/**
  * 进入低功耗
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__TRIGGER_LOW_POWER = 1
};

/// Constant 'TRIGGER_CHARGING'.
/**
  * 进入充电
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__TRIGGER_CHARGING = 2
};

/// Constant 'TRIGGER_NORMAL'.
/**
  * 退出省电状态，恢复正常工作
 */
enum
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request__TRIGGER_NORMAL = 3
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"

/// Struct defined in srv/SetHalRgbdPowerSave in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalRgbdPowerSave_Request
{
  /// 请求头
  aimdk_msgs__msg__CommonRequest request;
  /// 目标相机掩码；0 表示操作全部 5 路 TOF
  uint32_t camera_mask;
  /// 操作类型：进入省电相关状态 → 热关闭 TOF；退出省电相关状态 → 热启动 TOF
  uint8_t trigger_type;
  /// 触发原因（低功耗与充电对 TOF 行为相同，仅用于日志与问题定位）
  uint8_t trigger_reason;
} aimdk_msgs__srv__SetHalRgbdPowerSave_Request;

// Struct for a sequence of aimdk_msgs__srv__SetHalRgbdPowerSave_Request.
typedef struct aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetHalRgbdPowerSave in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetHalRgbdPowerSave_Response
{
  /// 响应头（结果以 status 为准）
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__SetHalRgbdPowerSave_Response;

// Struct for a sequence of aimdk_msgs__srv__SetHalRgbdPowerSave_Response.
typedef struct aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence
{
  aimdk_msgs__srv__SetHalRgbdPowerSave_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_H_
