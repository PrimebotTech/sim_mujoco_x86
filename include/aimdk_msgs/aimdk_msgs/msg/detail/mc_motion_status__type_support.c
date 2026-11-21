// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/mc_motion_status__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/mc_motion_status__functions.h"
#include "aimdk_msgs/msg/detail/mc_motion_status__struct.h"


// Include directives for member types
// Member `player_state`
#include "aimdk_msgs/msg/mc_player_state.h"
// Member `player_state`
#include "aimdk_msgs/msg/detail/mc_player_state__rosidl_typesupport_introspection_c.h"
// Member `control_area`
#include "aimdk_msgs/msg/mc_control_area.h"
// Member `control_area`
#include "aimdk_msgs/msg/detail/mc_control_area__rosidl_typesupport_introspection_c.h"
// Member `motion`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "aimdk_msgs/msg/mc_motion_type.h"
// Member `type`
#include "aimdk_msgs/msg/detail/mc_motion_type__rosidl_typesupport_introspection_c.h"
// Member `intr_info`
#include "aimdk_msgs/msg/mc_motion_intr_info.h"
// Member `intr_info`
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__rosidl_typesupport_introspection_c.h"
// Member `gravity_state`
#include "aimdk_msgs/msg/mc_mimic_gravity_state.h"
// Member `gravity_state`
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__McMotionStatus__init(message_memory);
}

void aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_fini_function(void * message_memory)
{
  aimdk_msgs__msg__McMotionStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[7] = {
  {
    "player_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, player_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, control_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intr_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, intr_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, current_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionStatus, gravity_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "McMotionStatus",  // message name
  7,  // number of fields
  sizeof(aimdk_msgs__msg__McMotionStatus),
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array,  // message members
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionStatus)() {
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McPlayerState)();
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McControlArea)();
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionType)();
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionIntrInfo)();
  aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMimicGravityState)();
  if (!aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__McMotionStatus__rosidl_typesupport_introspection_c__McMotionStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
