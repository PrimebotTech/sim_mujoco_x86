// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McPresetMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFAULT_POS'.
/**
  * 恢复默认姿态
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__DEFAULT_POS = 0l
};

/// Constant 'RIGHT_ARM_WAVE'.
/**
  * 右手挥手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__RIGHT_ARM_WAVE = 1001l
};

/// Constant 'RIGHT_ARM_HANDSHAKE'.
/**
  * 右手握手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__RIGHT_ARM_HANDSHAKE = 1002l
};

/// Constant 'RIGHT_ARM_HANDSHAKE_FOR_1D5METER'.
/**
  * 左手握手1.5m上对象
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__RIGHT_ARM_HANDSHAKE_FOR_1D5METER = 1003l
};

/// Constant 'LEFT_ARM_WAVE'.
/**
  * 左手挥手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__LEFT_ARM_WAVE = 1011l
};

/// Constant 'LEFT_ARM_HANDSHAKE'.
/**
  * 左手握手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__LEFT_ARM_HANDSHAKE = 1012l
};

/// Constant 'LEFT_ARM_HANDSHAKE_FOR_1D5METER'.
/**
  * 左手握手1.5m上对象
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__LEFT_ARM_HANDSHAKE_FOR_1D5METER = 1013l
};

/// Constant 'BOTH_HANDS_MAKE_HEART'.
/**
  * 双手比心
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__BOTH_HANDS_MAKE_HEART = 2001l
};

/// Constant 'BOTH_HANDS_ACTION_HAPPY'.
/**
  * 双手摆动，表达喜悦
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__BOTH_HANDS_ACTION_HAPPY = 2002l
};

/// Constant 'BOTH_HANDS_ACTION_TALKING'.
/**
  * 双手动作，说话动作
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__BOTH_HANDS_ACTION_TALKING = 2003l
};

/// Constant 'T1_TALK1'.
/**
  * 说话动作1
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK1 = 2004l
};

/// Constant 'T1_TALK2'.
/**
  * 说话动作2
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK2 = 2005l
};

/// Constant 'T1_TALK3'.
/**
  * 说话动作3
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK3 = 2006l
};

/// Constant 'T1_TALK4'.
/**
  * 说话动作4
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK4 = 2007l
};

/// Constant 'T1_TALK5'.
/**
  * 说话动作5
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK5 = 2008l
};

/// Constant 'T1_TALK6'.
/**
  * 说话动作6
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__T1_TALK6 = 2009l
};

/// Constant 'PHOTO_POSE_1'.
/**
  * 拍照动作1
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__PHOTO_POSE_1 = 2011l
};

/// Constant 'PHOTO_POSE_2'.
/**
  * 拍照动作2
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__PHOTO_POSE_2 = 2012l
};

/// Constant 'PHOTO_POSE_3'.
/**
  * 拍照动作3
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__PHOTO_POSE_3 = 2013l
};

/// Constant 'PHOTO_POSE_4'.
/**
  * 拍照动作4
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__PHOTO_POSE_4 = 2014l
};

/// Constant 'PHOTO_THREE_SHOT'.
/**
  * 三连拍姿势
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__PHOTO_THREE_SHOT = 2020l
};

/// Constant 'Q_BECKON'.
/**
  * -----------------------------------------------------------------------------------
  * Q 预置的上肢动作
  * -----------------------------------------------------------------------------------
  * 招手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_BECKON = 3001l
};

/// Constant 'Q_SHAKE_HANDS'.
/**
  * 握手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_SHAKE_HANDS = 3002l
};

/// Constant 'Q_BUMP_FISTS'.
/**
  * 碰拳
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_BUMP_FISTS = 3003l
};

/// Constant 'Q_WAVE_HAND'.
/**
  * 挥手
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_WAVE_HAND = 3004l
};

/// Constant 'Q_SHOW_HAPPINESS'.
/**
  * 情绪动作 - 开心
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_SHOW_HAPPINESS = 3005l
};

/// Constant 'Q_MAKE_HEART'.
/**
  * 双手比心
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_MAKE_HEART = 3007l
};

/// Constant 'Q_CHEER_ON'.
/**
  * 加油
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_CHEER_ON = 3008l
};

/// Constant 'Q_STRETCH'.
/**
  * 伸懒腰
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_STRETCH = 3010l
};

/// Constant 'Q_SPEAK_A'.
/**
  * 讲话动作A
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_SPEAK_A = 3012l
};

/// Constant 'Q_SPEAK_B'.
/**
  * 讲话动作B
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_SPEAK_B = 3013l
};

/// Constant 'Q_SPEAK_C'.
/**
  * 讲话动作C
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_SPEAK_C = 3014l
};

/// Constant 'Q_HUG'.
/**
  * 拥抱
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_HUG = 3018l
};

/// Constant 'Q_REFUSE'.
/**
  * 拒绝
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_REFUSE = 3021l
};

/// Constant 'Q_DANCE_A'.
/**
  * 跳舞动作A
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_DANCE_A = 3046l
};

/// Constant 'Q_DANCE_B'.
/**
  * 跳舞动作B
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_DANCE_B = 3047l
};

/// Constant 'Q_DANCE_C'.
/**
  * 跳舞动作C
 */
enum
{
  aimdk_msgs__msg__McPresetMotion__Q_DANCE_C = 3048l
};

/// Struct defined in msg/McPresetMotion in the package aimdk_msgs.
/**
  * 预设动作
 */
typedef struct aimdk_msgs__msg__McPresetMotion
{
  int32_t value;
} aimdk_msgs__msg__McPresetMotion;

// Struct for a sequence of aimdk_msgs__msg__McPresetMotion.
typedef struct aimdk_msgs__msg__McPresetMotion__Sequence
{
  aimdk_msgs__msg__McPresetMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McPresetMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_H_
