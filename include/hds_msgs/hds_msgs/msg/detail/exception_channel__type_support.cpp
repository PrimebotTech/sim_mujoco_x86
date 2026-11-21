// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hds_msgs/msg/detail/exception_channel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hds_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExceptionChannel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hds_msgs::msg::ExceptionChannel(_init);
}

void ExceptionChannel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hds_msgs::msg::ExceptionChannel *>(message_memory);
  typed_message->~ExceptionChannel();
}

size_t size_function__ExceptionChannel__exception_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hds_msgs::msg::Exception> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExceptionChannel__exception_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hds_msgs::msg::Exception> *>(untyped_member);
  return &member[index];
}

void * get_function__ExceptionChannel__exception_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hds_msgs::msg::Exception> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExceptionChannel__exception_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hds_msgs::msg::Exception *>(
    get_const_function__ExceptionChannel__exception_list(untyped_member, index));
  auto & value = *reinterpret_cast<hds_msgs::msg::Exception *>(untyped_value);
  value = item;
}

void assign_function__ExceptionChannel__exception_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hds_msgs::msg::Exception *>(
    get_function__ExceptionChannel__exception_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const hds_msgs::msg::Exception *>(untyped_value);
  item = value;
}

void resize_function__ExceptionChannel__exception_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hds_msgs::msg::Exception> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExceptionChannel_message_member_array[2] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hds_msgs::msg::ExceptionChannel, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exception_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hds_msgs::msg::Exception>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hds_msgs::msg::ExceptionChannel, exception_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExceptionChannel__exception_list,  // size() function pointer
    get_const_function__ExceptionChannel__exception_list,  // get_const(index) function pointer
    get_function__ExceptionChannel__exception_list,  // get(index) function pointer
    fetch_function__ExceptionChannel__exception_list,  // fetch(index, &value) function pointer
    assign_function__ExceptionChannel__exception_list,  // assign(index, value) function pointer
    resize_function__ExceptionChannel__exception_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExceptionChannel_message_members = {
  "hds_msgs::msg",  // message namespace
  "ExceptionChannel",  // message name
  2,  // number of fields
  sizeof(hds_msgs::msg::ExceptionChannel),
  ExceptionChannel_message_member_array,  // message members
  ExceptionChannel_init_function,  // function to initialize message memory (memory has to be allocated)
  ExceptionChannel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExceptionChannel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExceptionChannel_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hds_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hds_msgs::msg::ExceptionChannel>()
{
  return &::hds_msgs::msg::rosidl_typesupport_introspection_cpp::ExceptionChannel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hds_msgs, msg, ExceptionChannel)() {
  return &::hds_msgs::msg::rosidl_typesupport_introspection_cpp::ExceptionChannel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
