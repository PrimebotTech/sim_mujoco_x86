// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McAction.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PASSIVE_DEFAULT'.
/**
  * ============================================================================
  * 急停
  * ============================================================================
  * 被动模式
 */
enum
{
  aimdk_msgs__msg__McAction__PASSIVE_DEFAULT = 1l
};

/// Constant 'DAMPING_DEFAULT'.
/**
  * 阻尼模式
 */
enum
{
  aimdk_msgs__msg__McAction__DAMPING_DEFAULT = 2l
};

/// Constant 'QUAD_LIE_DOWN'.
/**
  * 四足躺下
 */
enum
{
  aimdk_msgs__msg__McAction__QUAD_LIE_DOWN = 3l
};

/// Constant 'QUADRUPED_TO_BIPED'.
/**
  * ============================================================================
  * 形态切换
  * ============================================================================
  * 四足切换两足形态-常规
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_TO_BIPED = 10l
};

/// Constant 'QUADRUPED_TO_BIPED_ROTATE'.
/**
  * 四足切换两足形态-带旋转
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_TO_BIPED_ROTATE = 11l
};

/// Constant 'QUADRUPED_TO_BIPED_FRONTFLIP'.
/**
  * 四足切换双足形态-前空翻
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_TO_BIPED_FRONTFLIP = 12l
};

/// Constant 'BIPED_TO_QUADRUPED'.
/**
  * 两足切换四足形态-常规
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_TO_QUADRUPED = 20l
};

/// Constant 'BIPED_TO_QUADRUPED_ROTATE'.
/**
  * 两足切换四足形态-旋转
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_TO_QUADRUPED_ROTATE = 21l
};

/// Constant 'BIPED_TO_QUADRUPED_FRONTFLIP'.
/**
  * 两足切换四足形态-前空翻
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_TO_QUADRUPED_FRONTFLIP = 22l
};

/// Constant 'QUADRUPED_RECOVERY'.
/**
  * ============================================================================
  * 四足相关动作 (100-199)
  * ============================================================================
  * 倒地四足站起
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_RECOVERY = 100l
};

/// Constant 'QUADRUPED_STAND_DEFAULT'.
/**
  * 四足站立模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_STAND_DEFAULT = 101l
};

/// Constant 'QUADRUPED_LOCOMOTION_DEFAULT'.
/**
  * 四足行走/奔跑模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_DEFAULT = 102l
};

/// Constant 'QUADRUPED_LOCOMOTION_RUN'.
/**
  * 四足奔跑模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_RUN = 112l
};

/// Constant 'QUADRUPED_LOCOMOTION_TERRAIN'.
/**
  * 四足越障行走模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_TERRAIN = 103l
};

/// Constant 'QUADRUPED_LOCOMOTION_BIONIC'.
/**
  * 四足仿生模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_BIONIC = 104l
};

/// Constant 'QUADRUPED_LOCOMOTION_FRONTFLIP'.
/**
  * 四足前空翻
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_FRONTFLIP = 105l
};

/// Constant 'QUADRUPED_LOCOMOTION_BACKFLIP'.
/**
  * 四足后空翻
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_BACKFLIP = 106l
};

/// Constant 'QUADRUPED_LOCOMOTION_HANDSHAKE'.
/**
  * 四足握手
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_HANDSHAKE = 107l
};

/// Constant 'QUADRUPED_LOCOMOTION_SIT'.
/**
  * 四足坐下
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_SIT = 108l
};

/// Constant 'QUADRUPED_LOCOMOTION_DANCE'.
/**
  * 四足跳舞
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_DANCE = 109l
};

/// Constant 'QUADRUPED_GET_DOWN_DEFAULT'.
/**
  * 四足趴下
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_GET_DOWN_DEFAULT = 110l
};

/// Constant 'QUADRUPED_SIT_DOWN_DEFAULT'.
/**
  * 四足坐下
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_SIT_DOWN_DEFAULT = 111l
};

/// Constant 'QUADRUPED_LOCOMOTION_PRIDE'.
/**
  * 四足骄傲
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_PRIDE = 113l
};

/// Constant 'QUADRUPED_LOCOMOTION_PLEASURE'.
/**
  * 四足愉快
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_PLEASURE = 114l
};

/// Constant 'QUADRUPED_READY_STAND_DEFAULT'.
/**
  * 四足准备站立
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_READY_STAND_DEFAULT = 115l
};

/// Constant 'QUADRUPED_LOCOMOTION_JUMP'.
/**
  * 四足跳跃
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_JUMP = 116l
};

/// Constant 'QUADRUPED_LOCOMOTION_STRETCH'.
/**
  * 四足伸展
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_STRETCH = 117l
};

/// Constant 'QUADRUPED_PUSH_UP'.
/**
  * 四足俯卧撑
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_PUSH_UP = 118l
};

/// Constant 'QUADRUPED_MIMIC'.
/**
  * 四足模仿动作
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_MIMIC = 119l
};

/// Constant 'QUADRUPED_CROUCH_DEFAULT'.
/**
  * 四足蜷缩
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_CROUCH_DEFAULT = 120l
};

/// Constant 'QUADRUPED_LOCOMOTION_STEP'.
/**
  * 四足踏步模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_STEP = 121l
};

/// Constant 'QUADRUPED_STAND_REVERSE_DEFAULT'.
/**
  * 四足前肢手臂反轴站立
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_STAND_REVERSE_DEFAULT = 122l
};

/// Constant 'QUADRUPED_LOCOMOTION_REVERSE_DEFAULT'.
/**
  * 四足反向行走模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_REVERSE_DEFAULT = 123l
};

/// Constant 'QUADRUPED_BODY_ADJUST_DEFAULT'.
/**
  * 四足姿态调整
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_BODY_ADJUST_DEFAULT = 124l
};

/// Constant 'QUADRUPED_LOCOMOTION_STAIRS'.
/**
  * 四足上下楼梯模式
 */
enum
{
  aimdk_msgs__msg__McAction__QUADRUPED_LOCOMOTION_STAIRS = 125l
};

/// Constant 'BIPED_RECOVERY'.
/**
  * ============================================================================
  * 两足相关动作 (200-299)
  * ============================================================================
  * 倒地两足站起
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_RECOVERY = 200l
};

/// Constant 'BIPED_STAND_DEFAULT'.
/**
  * 两足站立模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_STAND_DEFAULT = 201l
};

/// Constant 'BIPED_LOCOMOTION_DEFAULT'.
/**
  * 两足行走/奔跑模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_DEFAULT = 202l
};

/// Constant 'BIPED_LOCOMOTION_TERRAIN'.
/**
  * 两足越障行走模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_TERRAIN = 203l
};

/// Constant 'BIPED_LOCOMOTION_MOONWALK'.
/**
  * 双足原地旋转(删除)
  * int32 BIPED_LOCOMOTION_ROTATE_LOCAL = 204
  * 双足下腰模式(删除)
  * int32 BIPED_LOCOMOTION_BACKBEND = 205
  * 双足太空步
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_MOONWALK = 206l
};

/// Constant 'BIPED_LOCOMOTION_RUN'.
/**
  * 双足奔跑模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_RUN = 207l
};

/// Constant 'BIPED_MIMIC'.
/**
  * 双足模仿动作
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_MIMIC = 208l
};

/// Constant 'BIPED_LOCOMOTION_WBC'.
/**
  * 双足羽生结弦(删除)
  * int32 BIPED_YUZURU = 209
  * 双足劈叉(删除)
  * int32 BIPED_SPLIT = 210
  * 双足全身控制模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_WBC = 300l
};

/// Constant 'BIPED_LOCOMOTION_ANIMATION'.
/**
  * 双足动画控制模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_ANIMATION = 301l
};

/// Constant 'BIPED_RECORD_UPPER'.
/**
  * 双足控制上肢录制模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_RECORD_UPPER = 302l
};

/// Constant 'BIPED_GIMBAL'.
/**
  * 双足 gimbal 轨迹移动模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_GIMBAL = 303l
};

/// Constant 'BIPED_NPZ_MIMIC'.
/**
  * 双足 npz 模仿
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_NPZ_MIMIC = 304l
};

/// Constant 'BIPED_LOCOMOTION_WBCDANCE'.
/**
  * 双足小彩旗
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LOCOMOTION_WBCDANCE = 305l
};

/// Constant 'STORE_DEFAULT'.
/**
  * 双足转圈(删除)
  * int32 BIPED_MIMIC_ROTATE_DANCE = 400
  * ============================================================================
  * Q 系列Action
  * ============================================================================
  * 折叠收储
 */
enum
{
  aimdk_msgs__msg__McAction__STORE_DEFAULT = 1001l
};

/// Constant 'BIPED_WALK_RUN'.
/**
  * 走跑
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_WALK_RUN = 1002l
};

/// Constant 'MIMIC'.
/**
  * 模仿动作
 */
enum
{
  aimdk_msgs__msg__McAction__MIMIC = 1003l
};

/// Constant 'MIMIC_LINKCRAFT'.
/**
  * 模仿动作-灵创
 */
enum
{
  aimdk_msgs__msg__McAction__MIMIC_LINKCRAFT = 1004l
};

/// Constant 'BIPED_WHOLE_BODY_CTRL'.
/**
  * 全身动作控制
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_WHOLE_BODY_CTRL = 1005l
};

/// Constant 'MIMIC_OPENSOURCE'.
/**
  * 模仿动作-开源
 */
enum
{
  aimdk_msgs__msg__McAction__MIMIC_OPENSOURCE = 1006l
};

/// Constant 'STAND_UP'.
/**
  * 站起
 */
enum
{
  aimdk_msgs__msg__McAction__STAND_UP = 1007l
};

/// Constant 'LYING_DEFAULT'.
/**
  * 躺姿
 */
enum
{
  aimdk_msgs__msg__McAction__LYING_DEFAULT = 1008l
};

/// Constant 'LIE_FACE_DOWN'.
/**
  * 躺下-俯卧
 */
enum
{
  aimdk_msgs__msg__McAction__LIE_FACE_DOWN = 1009l
};

/// Constant 'LIE_FACE_UP'.
/**
  * 躺下-仰躺
 */
enum
{
  aimdk_msgs__msg__McAction__LIE_FACE_UP = 1010l
};

/// Constant 'BIPED_QUIET_WALK'.
/**
  * 轻柔步态(室内)
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_QUIET_WALK = 1011l
};

/// Constant 'BIPED_BLIND_TERRAIN'.
/**
  * 越障模式(室外)
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_BLIND_TERRAIN = 1012l
};

/// Constant 'BIPED_SIT_DOWN'.
/**
  * 坐下
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_SIT_DOWN = 1013l
};

/// Constant 'BIPED_CUSTOM_UPPER'.
/**
  * 二开上肢控制
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_CUSTOM_UPPER = 1014l
};

/// Constant 'BIPED_RUN'.
/**
  * 超能模式/跑步模式
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_RUN = 1015l
};

/// Constant 'BIPED_TAKE_SEAT'.
/**
  * 入座
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_TAKE_SEAT = 1016l
};

/// Constant 'BIPED_LEAVE_SEAT'.
/**
  * 离座
 */
enum
{
  aimdk_msgs__msg__McAction__BIPED_LEAVE_SEAT = 1017l
};

/// Constant 'MIMIC_V2'.
/**
  * 模仿动作_V2
 */
enum
{
  aimdk_msgs__msg__McAction__MIMIC_V2 = 1018l
};

/// Constant 'MIMIC_OPENSOURCE_V2'.
/**
  * 模仿动作-开源_V2
 */
enum
{
  aimdk_msgs__msg__McAction__MIMIC_OPENSOURCE_V2 = 1019l
};

/// Struct defined in msg/McAction in the package aimdk_msgs.
/**
  * 定义枚举字段
 */
typedef struct aimdk_msgs__msg__McAction
{
  int32_t value;
} aimdk_msgs__msg__McAction;

// Struct for a sequence of aimdk_msgs__msg__McAction.
typedef struct aimdk_msgs__msg__McAction__Sequence
{
  aimdk_msgs__msg__McAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_H_
