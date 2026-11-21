// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/module_resource_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `module_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `rpc_clients`
// Member `rpc_services`
#include "aimdk_msgs/msg/detail/module_rpc_info__functions.h"
// Member `pub_channels`
// Member `sub_channels`
#include "aimdk_msgs/msg/detail/module_channel_info__functions.h"

bool
aimdk_msgs__msg__ModuleResourceInfo__init(aimdk_msgs__msg__ModuleResourceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__init(&msg->module_name)) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
    return false;
  }
  // rpc_clients
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(&msg->rpc_clients, 0)) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
    return false;
  }
  // rpc_services
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(&msg->rpc_services, 0)) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
    return false;
  }
  // pub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(&msg->pub_channels, 0)) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
    return false;
  }
  // sub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(&msg->sub_channels, 0)) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__ModuleResourceInfo__fini(aimdk_msgs__msg__ModuleResourceInfo * msg)
{
  if (!msg) {
    return;
  }
  // module_name
  rosidl_runtime_c__String__fini(&msg->module_name);
  // rpc_clients
  aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(&msg->rpc_clients);
  // rpc_services
  aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(&msg->rpc_services);
  // pub_channels
  aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(&msg->pub_channels);
  // sub_channels
  aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(&msg->sub_channels);
}

bool
aimdk_msgs__msg__ModuleResourceInfo__are_equal(const aimdk_msgs__msg__ModuleResourceInfo * lhs, const aimdk_msgs__msg__ModuleResourceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module_name), &(rhs->module_name)))
  {
    return false;
  }
  // rpc_clients
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__are_equal(
      &(lhs->rpc_clients), &(rhs->rpc_clients)))
  {
    return false;
  }
  // rpc_services
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__are_equal(
      &(lhs->rpc_services), &(rhs->rpc_services)))
  {
    return false;
  }
  // pub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__are_equal(
      &(lhs->pub_channels), &(rhs->pub_channels)))
  {
    return false;
  }
  // sub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__are_equal(
      &(lhs->sub_channels), &(rhs->sub_channels)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__ModuleResourceInfo__copy(
  const aimdk_msgs__msg__ModuleResourceInfo * input,
  aimdk_msgs__msg__ModuleResourceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__copy(
      &(input->module_name), &(output->module_name)))
  {
    return false;
  }
  // rpc_clients
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__copy(
      &(input->rpc_clients), &(output->rpc_clients)))
  {
    return false;
  }
  // rpc_services
  if (!aimdk_msgs__msg__ModuleRpcInfo__Sequence__copy(
      &(input->rpc_services), &(output->rpc_services)))
  {
    return false;
  }
  // pub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__copy(
      &(input->pub_channels), &(output->pub_channels)))
  {
    return false;
  }
  // sub_channels
  if (!aimdk_msgs__msg__ModuleChannelInfo__Sequence__copy(
      &(input->sub_channels), &(output->sub_channels)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__ModuleResourceInfo *
aimdk_msgs__msg__ModuleResourceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleResourceInfo * msg = (aimdk_msgs__msg__ModuleResourceInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__ModuleResourceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__ModuleResourceInfo));
  bool success = aimdk_msgs__msg__ModuleResourceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__ModuleResourceInfo__destroy(aimdk_msgs__msg__ModuleResourceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__ModuleResourceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__ModuleResourceInfo__Sequence__init(aimdk_msgs__msg__ModuleResourceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleResourceInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__ModuleResourceInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__ModuleResourceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__ModuleResourceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__ModuleResourceInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aimdk_msgs__msg__ModuleResourceInfo__Sequence__fini(aimdk_msgs__msg__ModuleResourceInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aimdk_msgs__msg__ModuleResourceInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aimdk_msgs__msg__ModuleResourceInfo__Sequence *
aimdk_msgs__msg__ModuleResourceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleResourceInfo__Sequence * array = (aimdk_msgs__msg__ModuleResourceInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__ModuleResourceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__ModuleResourceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__ModuleResourceInfo__Sequence__destroy(aimdk_msgs__msg__ModuleResourceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__ModuleResourceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__ModuleResourceInfo__Sequence__are_equal(const aimdk_msgs__msg__ModuleResourceInfo__Sequence * lhs, const aimdk_msgs__msg__ModuleResourceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__ModuleResourceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__ModuleResourceInfo__Sequence__copy(
  const aimdk_msgs__msg__ModuleResourceInfo__Sequence * input,
  aimdk_msgs__msg__ModuleResourceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__ModuleResourceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__ModuleResourceInfo * data =
      (aimdk_msgs__msg__ModuleResourceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__ModuleResourceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__ModuleResourceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__ModuleResourceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
