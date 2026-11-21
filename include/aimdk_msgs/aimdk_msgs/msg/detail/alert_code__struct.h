// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUDIO_STRATEGY_NONE'.
/**
  * 语音播报策略；字段追加在末尾，is_audio_cycle 保留用于兼容旧使用方
 */
enum
{
  aimdk_msgs__msg__AlertCode__AUDIO_STRATEGY_NONE = 0
};

/// Constant 'AUDIO_STRATEGY_ONCE'.
enum
{
  aimdk_msgs__msg__AlertCode__AUDIO_STRATEGY_ONCE = 1
};

/// Constant 'AUDIO_STRATEGY_REPEAT'.
enum
{
  aimdk_msgs__msg__AlertCode__AUDIO_STRATEGY_REPEAT = 2
};

/// Constant 'AUDIO_STRATEGY_ACTIVATION'.
enum
{
  aimdk_msgs__msg__AlertCode__AUDIO_STRATEGY_ACTIVATION = 3
};

// Include directives for member types
// Member 'code'
// Member 'text'
// Member 'light_msg'
// Member 'app_show_id'
// Member 'breakdown_msg'
// Member 'capability_limit'
// Member 'diag_name'
// Member 'disabled_capabilities'
// Member 'nlg_scene_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertCode in the package aimdk_msgs.
/**
  * uuid
 */
typedef struct aimdk_msgs__msg__AlertCode
{
  uint64_t uuid;
  /// ns 时间辍
  uint64_t timestamp;
  /// 告警本次生命周期首次出现时间戳，ns
  uint64_t appeared_timestamp;
  /// 诊断码，字符串形式
  rosidl_runtime_c__String code;
  /// 0 未知, 1 出现, 2 消失
  uint8_t alert_event_type;
  /// 1 h1级告警，2 h2级告警，3 h3级告警, 4 h4级告警, 5 h5级告警
  uint8_t level;
  /// 端侧后处理
  /// 语音报警
  rosidl_runtime_c__String text;
  bool is_audio_cycle;
  /// 灯光报警，在interaction通过level做映射
  rosidl_runtime_c__String light_msg;
  /// 表情报警
  uint32_t emotion_id;
  /// 其他后处理部分，后续再添加
  uint32_t post_process;
  /// app显示id
  rosidl_runtime_c__String app_show_id;
  /// 故障信息
  rosidl_runtime_c__String breakdown_msg;
  /// 功能禁用能力，多个能力使用英文逗号分隔
  /// 支持语音召唤（人形/四足）、前方目标跟随（人形/四足）、四足左右目标跟随、避障、自主建图、自主导航、自主回充
  rosidl_runtime_c__String capability_limit;
  /// 故障诊断名称
  rosidl_runtime_c__String diag_name;
  uint8_t audio_strategy;
  /// 激活播报匹配的功能限制名，来自诊断表“功能限制播报”列，独立于 capability_limit
  rosidl_runtime_c__String__Sequence disabled_capabilities;
  /// 激活播报使用的 NLG 场景 ID
  rosidl_runtime_c__String nlg_scene_id;
} aimdk_msgs__msg__AlertCode;

// Struct for a sequence of aimdk_msgs__msg__AlertCode.
typedef struct aimdk_msgs__msg__AlertCode__Sequence
{
  aimdk_msgs__msg__AlertCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__AlertCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_
