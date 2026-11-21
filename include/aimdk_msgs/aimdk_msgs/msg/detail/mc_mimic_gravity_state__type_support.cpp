// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aimdk_msgs:msg/McMimicGravityState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aimdk_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void McMimicGravityState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aimdk_msgs::msg::McMimicGravityState(_init);
}

void McMimicGravityState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aimdk_msgs::msg::McMimicGravityState *>(message_memory);
  typed_message->~McMimicGravityState();
}

size_t size_function__McMimicGravityState__reference_gravity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__McMimicGravityState__reference_gravity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__McMimicGravityState__reference_gravity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__McMimicGravityState__reference_gravity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__McMimicGravityState__reference_gravity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__McMimicGravityState__reference_gravity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__McMimicGravityState__reference_gravity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__McMimicGravityState__current_gravity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__McMimicGravityState__current_gravity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__McMimicGravityState__current_gravity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__McMimicGravityState__current_gravity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__McMimicGravityState__current_gravity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__McMimicGravityState__current_gravity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__McMimicGravityState__current_gravity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember McMimicGravityState_message_member_array[4] = {
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::McMimicGravityState, enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_gravity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::McMimicGravityState, reference_gravity),  // bytes offset in struct
    nullptr,  // default value
    size_function__McMimicGravityState__reference_gravity,  // size() function pointer
    get_const_function__McMimicGravityState__reference_gravity,  // get_const(index) function pointer
    get_function__McMimicGravityState__reference_gravity,  // get(index) function pointer
    fetch_function__McMimicGravityState__reference_gravity,  // fetch(index, &value) function pointer
    assign_function__McMimicGravityState__reference_gravity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_gravity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::McMimicGravityState, current_gravity),  // bytes offset in struct
    nullptr,  // default value
    size_function__McMimicGravityState__current_gravity,  // size() function pointer
    get_const_function__McMimicGravityState__current_gravity,  // get_const(index) function pointer
    get_function__McMimicGravityState__current_gravity,  // get(index) function pointer
    fetch_function__McMimicGravityState__current_gravity,  // fetch(index, &value) function pointer
    assign_function__McMimicGravityState__current_gravity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "deviation_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::McMimicGravityState, deviation_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers McMimicGravityState_message_members = {
  "aimdk_msgs::msg",  // message namespace
  "McMimicGravityState",  // message name
  4,  // number of fields
  sizeof(aimdk_msgs::msg::McMimicGravityState),
  McMimicGravityState_message_member_array,  // message members
  McMimicGravityState_init_function,  // function to initialize message memory (memory has to be allocated)
  McMimicGravityState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t McMimicGravityState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &McMimicGravityState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aimdk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aimdk_msgs::msg::McMimicGravityState>()
{
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::McMimicGravityState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aimdk_msgs, msg, McMimicGravityState)() {
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::McMimicGravityState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
