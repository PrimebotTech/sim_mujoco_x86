// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McHandHeldState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__STRUCT_H_

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
  * The state is unknown when either hand has not produced a confirmed result.
 */
enum
{
  aimdk_msgs__msg__McHandHeldState__UNKNOWN = 0
};

/// Constant 'BOTH_NOT_HELD'.
/**
  * Both hands are confirmed as not held.
 */
enum
{
  aimdk_msgs__msg__McHandHeldState__BOTH_NOT_HELD = 1
};

/// Constant 'LEFT_HELD_ONLY'.
/**
  * Only the left hand is held.
 */
enum
{
  aimdk_msgs__msg__McHandHeldState__LEFT_HELD_ONLY = 2
};

/// Constant 'RIGHT_HELD_ONLY'.
/**
  * Only the right hand is held.
 */
enum
{
  aimdk_msgs__msg__McHandHeldState__RIGHT_HELD_ONLY = 3
};

/// Constant 'BOTH_HELD'.
/**
  * Both hands are held.
 */
enum
{
  aimdk_msgs__msg__McHandHeldState__BOTH_HELD = 4
};

/// Struct defined in msg/McHandHeldState in the package aimdk_msgs.
/**
  * Robot motion-control hand-held state.
 */
typedef struct aimdk_msgs__msg__McHandHeldState
{
  /// True when at least one hand is confirmed as held.
  /// False when neither hand is held or the combined state is unknown.
  bool is_held;
  /// Current combined hand-held state. The value must be one of the constants above.
  uint8_t hand_held;
} aimdk_msgs__msg__McHandHeldState;

// Struct for a sequence of aimdk_msgs__msg__McHandHeldState.
typedef struct aimdk_msgs__msg__McHandHeldState__Sequence
{
  aimdk_msgs__msg__McHandHeldState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McHandHeldState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__STRUCT_H_
