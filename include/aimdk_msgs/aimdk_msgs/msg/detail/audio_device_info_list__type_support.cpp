// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aimdk_msgs:msg/AudioDeviceInfoList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aimdk_msgs/msg/detail/audio_device_info_list__struct.hpp"
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

void AudioDeviceInfoList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aimdk_msgs::msg::AudioDeviceInfoList(_init);
}

void AudioDeviceInfoList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aimdk_msgs::msg::AudioDeviceInfoList *>(message_memory);
  typed_message->~AudioDeviceInfoList();
}

size_t size_function__AudioDeviceInfoList__input_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioDeviceInfoList__input_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioDeviceInfoList__input_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioDeviceInfoList__input_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::AudioDeviceInfo *>(
    get_const_function__AudioDeviceInfoList__input_list(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::AudioDeviceInfo *>(untyped_value);
  value = item;
}

void assign_function__AudioDeviceInfoList__input_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::AudioDeviceInfo *>(
    get_function__AudioDeviceInfoList__input_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::AudioDeviceInfo *>(untyped_value);
  item = value;
}

void resize_function__AudioDeviceInfoList__input_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioDeviceInfoList__output_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioDeviceInfoList__output_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioDeviceInfoList__output_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioDeviceInfoList__output_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aimdk_msgs::msg::AudioDeviceInfo *>(
    get_const_function__AudioDeviceInfoList__output_list(untyped_member, index));
  auto & value = *reinterpret_cast<aimdk_msgs::msg::AudioDeviceInfo *>(untyped_value);
  value = item;
}

void assign_function__AudioDeviceInfoList__output_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aimdk_msgs::msg::AudioDeviceInfo *>(
    get_function__AudioDeviceInfoList__output_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const aimdk_msgs::msg::AudioDeviceInfo *>(untyped_value);
  item = value;
}

void resize_function__AudioDeviceInfoList__output_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aimdk_msgs::msg::AudioDeviceInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioDeviceInfoList_message_member_array[2] = {
  {
    "input_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::AudioDeviceInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::AudioDeviceInfoList, input_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioDeviceInfoList__input_list,  // size() function pointer
    get_const_function__AudioDeviceInfoList__input_list,  // get_const(index) function pointer
    get_function__AudioDeviceInfoList__input_list,  // get(index) function pointer
    fetch_function__AudioDeviceInfoList__input_list,  // fetch(index, &value) function pointer
    assign_function__AudioDeviceInfoList__input_list,  // assign(index, value) function pointer
    resize_function__AudioDeviceInfoList__input_list  // resize(index) function pointer
  },
  {
    "output_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::AudioDeviceInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::AudioDeviceInfoList, output_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioDeviceInfoList__output_list,  // size() function pointer
    get_const_function__AudioDeviceInfoList__output_list,  // get_const(index) function pointer
    get_function__AudioDeviceInfoList__output_list,  // get(index) function pointer
    fetch_function__AudioDeviceInfoList__output_list,  // fetch(index, &value) function pointer
    assign_function__AudioDeviceInfoList__output_list,  // assign(index, value) function pointer
    resize_function__AudioDeviceInfoList__output_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioDeviceInfoList_message_members = {
  "aimdk_msgs::msg",  // message namespace
  "AudioDeviceInfoList",  // message name
  2,  // number of fields
  sizeof(aimdk_msgs::msg::AudioDeviceInfoList),
  AudioDeviceInfoList_message_member_array,  // message members
  AudioDeviceInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioDeviceInfoList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioDeviceInfoList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioDeviceInfoList_message_members,
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
get_message_type_support_handle<aimdk_msgs::msg::AudioDeviceInfoList>()
{
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::AudioDeviceInfoList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aimdk_msgs, msg, AudioDeviceInfoList)() {
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::AudioDeviceInfoList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
