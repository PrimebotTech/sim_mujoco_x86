// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/CommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * 未知
 */
enum
{
  aimdk_msgs__msg__CommonState__UNKNOWN = 0l
};

/// Constant 'SUCCESS'.
/**
  * 成功
 */
enum
{
  aimdk_msgs__msg__CommonState__SUCCESS = 1l
};

/// Constant 'FAILURE'.
/**
  * 失败
 */
enum
{
  aimdk_msgs__msg__CommonState__FAILURE = 2l
};

/// Constant 'ABORTED'.
/**
  * 中止
 */
enum
{
  aimdk_msgs__msg__CommonState__ABORTED = 3l
};

/// Constant 'TIMEOUT'.
/**
  * 超时
 */
enum
{
  aimdk_msgs__msg__CommonState__TIMEOUT = 4l
};

/// Constant 'INVALID'.
/**
  * 无效
 */
enum
{
  aimdk_msgs__msg__CommonState__INVALID = 5l
};

/// Constant 'IN_MANUAL'.
/**
  * 手动
 */
enum
{
  aimdk_msgs__msg__CommonState__IN_MANUAL = 6l
};

/// Constant 'NOT_READY'.
/**
  * 未就绪
 */
enum
{
  aimdk_msgs__msg__CommonState__NOT_READY = 100l
};

/// Constant 'PENDING'.
/**
  * 等待中
 */
enum
{
  aimdk_msgs__msg__CommonState__PENDING = 200l
};

/// Constant 'CREATED'.
/**
  * 已创建
 */
enum
{
  aimdk_msgs__msg__CommonState__CREATED = 300l
};

/// Constant 'RUNNING'.
/**
  * 运行中
 */
enum
{
  aimdk_msgs__msg__CommonState__RUNNING = 400l
};

/// Constant 'REASON_SUCCESS'.
/**
  * 成功
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_SUCCESS = 0ul
};

/// Constant 'REASON_OPENBOX'.
/**
  * 开箱状态中
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OPENBOX = 1ul
};

/// Constant 'REASON_STARTUP_CHECK'.
/**
  * 开机自检中
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_STARTUP_CHECK = 2ul
};

/// Constant 'REASON_SHUTDOWN'.
/**
  * 关机状态中
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_SHUTDOWN = 3ul
};

/// Constant 'REASON_FROM'.
/**
  * 当前形态不支持
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_FROM = 4ul
};

/// Constant 'REASON_LOW_BATTERY'.
/**
  * 低电量限制
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_LOW_BATTERY = 5ul
};

/// Constant 'REASON_CHARGE'.
/**
  * 正在充电中
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_CHARGE = 6ul
};

/// Constant 'REASON_NO_WHITELIST'.
/**
  * 动作不在白名单
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NO_WHITELIST = 7ul
};

/// Constant 'REASON_HDS'.
/**
  * HDS故障
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_HDS = 8ul
};

/// Constant 'REASON_ACTION'.
/**
  * 当前模式不支持
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_ACTION = 9ul
};

/// Constant 'REASON_OBSTACLE_FORWARD'.
/**
  * 前方有障碍物
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OBSTACLE_FORWARD = 10ul
};

/// Constant 'REASON_OBSTACLE_BACK'.
/**
  * 后方有障碍物
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OBSTACLE_BACK = 11ul
};

/// Constant 'REASON_OBSTACLE_LEFT'.
/**
  * 左方有障碍物
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OBSTACLE_LEFT = 12ul
};

/// Constant 'REASON_OBSTACLE_RIGHT'.
/**
  * 右方有障碍物
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OBSTACLE_RIGHT = 13ul
};

/// Constant 'REASON_OBSTACLE_UP'.
/**
  * 上方有障碍物
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_OBSTACLE_UP = 14ul
};

/// Constant 'REASON_TASK_RUNNING'.
/**
  * 其他任务正在运行
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_TASK_RUNNING = 15ul
};

/// Constant 'REASON_TARGET_STATE'.
/**
  * 机器人已经是目标状态
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_TARGET_STATE = 16ul
};

/// Constant 'REASON_NOT_FOUND'.
/**
  * 未找到相关动作
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NOT_FOUND = 17ul
};

/// Constant 'REASON_NO_SKILL_LIST'.
/**
  * 无可用技能列表
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NO_SKILL_LIST = 18ul
};

/// Constant 'REASON_FORM_MIS_MATCH'.
/**
  * 无法执行任务，机器人需要处于双足站立状态
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_FORM_MIS_MATCH = 19ul
};

/// Constant 'REASON_ACTION_NOT_MATCH'.
/**
  * 当前动作不匹配，无法执行动画
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_ACTION_NOT_MATCH = 20ul
};

/// Constant 'REASON_ACTION_BLACKLISTED'.
/**
  * 前动作在黑名单中，无法执行动画
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_ACTION_BLACKLISTED = 21ul
};

/// Constant 'REASON_NO_TRANSFER_PATH'.
/**
  * 当前姿态下无法进行动作转移
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NO_TRANSFER_PATH = 22ul
};

/// Constant 'REASON_NO_ELIGIBLE_SKILL'.
/**
  * 无符合条件的技能
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NO_ELIGIBLE_SKILL = 23ul
};

/// Constant 'REASON_INDOOR_WHOLE_BODY'.
/**
  * 室内模式下暂不支持该动作
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_INDOOR_WHOLE_BODY = 24ul
};

/// Constant 'REASON_ENGINE_NOT_READY'.
/**
  * 动作配置未就绪，无法执行动画
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_ENGINE_NOT_READY = 25ul
};

/// Constant 'REASON_NOT_SUPPORTED'.
/**
  * 当前机型不支持该功能
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NOT_SUPPORTED = 26ul
};

/// Constant 'REASON_STAND_UP_IN_PROGRESS'.
/**
  * 机器人正在起立，暂不能收起默认动作
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_STAND_UP_IN_PROGRESS = 27ul
};

/// Constant 'REASON_NOT_INTERRUPTIBLE'.
/**
  * 当前动画不可打断
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_NOT_INTERRUPTIBLE = 28ul
};

/// Constant 'REASON_INTERRUPT_INVALID'.
/**
  * 当前动画 ID 无效，无法打断
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_INTERRUPT_INVALID = 29ul
};

/// Constant 'REASON_TRANSFORM_CONDITION'.
/**
  * 当前状态不满足变形/动作执行条件
 */
enum
{
  aimdk_msgs__msg__CommonState__REASON_TRANSFORM_CONDITION = 30ul
};

/// Struct defined in msg/CommonState in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__CommonState
{
  int32_t value;
  uint32_t reason;
} aimdk_msgs__msg__CommonState;

// Struct for a sequence of aimdk_msgs__msg__CommonState.
typedef struct aimdk_msgs__msg__CommonState__Sequence
{
  aimdk_msgs__msg__CommonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__CommonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_H_
