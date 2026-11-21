// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from joint:msg/JointCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "joint/msg/detail/joint_command__rosidl_typesupport_introspection_c.h"
#include "joint/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "joint/msg/detail/joint_command__functions.h"
#include "joint/msg/detail/joint_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joints`
#include "joint/msg/command.h"
// Member `joints`
#include "joint/msg/detail/command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  joint__msg__JointCommand__init(message_memory);
}

void joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function(void * message_memory)
{
  joint__msg__JointCommand__fini(message_memory);
}

size_t joint__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__joints(
  const void * untyped_member)
{
  const joint__msg__Command__Sequence * member =
    (const joint__msg__Command__Sequence *)(untyped_member);
  return member->size;
}

const void * joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__joints(
  const void * untyped_member, size_t index)
{
  const joint__msg__Command__Sequence * member =
    (const joint__msg__Command__Sequence *)(untyped_member);
  return &member->data[index];
}

void * joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__joints(
  void * untyped_member, size_t index)
{
  joint__msg__Command__Sequence * member =
    (joint__msg__Command__Sequence *)(untyped_member);
  return &member->data[index];
}

void joint__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const joint__msg__Command * item =
    ((const joint__msg__Command *)
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__joints(untyped_member, index));
  joint__msg__Command * value =
    (joint__msg__Command *)(untyped_value);
  *value = *item;
}

void joint__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  joint__msg__Command * item =
    ((joint__msg__Command *)
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__joints(untyped_member, index));
  const joint__msg__Command * value =
    (const joint__msg__Command *)(untyped_value);
  *item = *value;
}

bool joint__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__joints(
  void * untyped_member, size_t size)
{
  joint__msg__Command__Sequence * member =
    (joint__msg__Command__Sequence *)(untyped_member);
  joint__msg__Command__Sequence__fini(member);
  return joint__msg__Command__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(joint__msg__JointCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(joint__msg__JointCommand, joints),  // bytes offset in struct
    NULL,  // default value
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__joints,  // size() function pointer
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__joints,  // get_const(index) function pointer
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__joints,  // get(index) function pointer
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__joints,  // fetch(index, &value) function pointer
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__joints,  // assign(index, value) function pointer
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__joints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members = {
  "joint__msg",  // message namespace
  "JointCommand",  // message name
  2,  // number of fields
  sizeof(joint__msg__JointCommand),
  joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array,  // message members
  joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle = {
  0,
  &joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_joint
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, joint, msg, JointCommand)() {
  joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, joint, msg, Command)();
  if (!joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier) {
    joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &joint__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
