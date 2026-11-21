// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/EventProbeInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/event_probe_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "aimdk_msgs/msg/detail/event_probe_type__functions.h"
// Member `desc`
#include "rosidl_runtime_c/string_functions.h"
// Member `attrs`
#include "aimdk_msgs/msg/detail/event_probe_attr__functions.h"

bool
aimdk_msgs__msg__EventProbeInfo__init(aimdk_msgs__msg__EventProbeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // timestamp
  // type
  if (!aimdk_msgs__msg__EventProbeType__init(&msg->type)) {
    aimdk_msgs__msg__EventProbeInfo__fini(msg);
    return false;
  }
  // module_id
  // event_id
  // event_code
  // desc
  if (!rosidl_runtime_c__String__init(&msg->desc)) {
    aimdk_msgs__msg__EventProbeInfo__fini(msg);
    return false;
  }
  // attrs
  if (!aimdk_msgs__msg__EventProbeAttr__Sequence__init(&msg->attrs, 0)) {
    aimdk_msgs__msg__EventProbeInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__EventProbeInfo__fini(aimdk_msgs__msg__EventProbeInfo * msg)
{
  if (!msg) {
    return;
  }
  // status
  // timestamp
  // type
  aimdk_msgs__msg__EventProbeType__fini(&msg->type);
  // module_id
  // event_id
  // event_code
  // desc
  rosidl_runtime_c__String__fini(&msg->desc);
  // attrs
  aimdk_msgs__msg__EventProbeAttr__Sequence__fini(&msg->attrs);
}

bool
aimdk_msgs__msg__EventProbeInfo__are_equal(const aimdk_msgs__msg__EventProbeInfo * lhs, const aimdk_msgs__msg__EventProbeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__EventProbeType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // module_id
  if (lhs->module_id != rhs->module_id) {
    return false;
  }
  // event_id
  if (lhs->event_id != rhs->event_id) {
    return false;
  }
  // event_code
  if (lhs->event_code != rhs->event_code) {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desc), &(rhs->desc)))
  {
    return false;
  }
  // attrs
  if (!aimdk_msgs__msg__EventProbeAttr__Sequence__are_equal(
      &(lhs->attrs), &(rhs->attrs)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__EventProbeInfo__copy(
  const aimdk_msgs__msg__EventProbeInfo * input,
  aimdk_msgs__msg__EventProbeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // timestamp
  output->timestamp = input->timestamp;
  // type
  if (!aimdk_msgs__msg__EventProbeType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // module_id
  output->module_id = input->module_id;
  // event_id
  output->event_id = input->event_id;
  // event_code
  output->event_code = input->event_code;
  // desc
  if (!rosidl_runtime_c__String__copy(
      &(input->desc), &(output->desc)))
  {
    return false;
  }
  // attrs
  if (!aimdk_msgs__msg__EventProbeAttr__Sequence__copy(
      &(input->attrs), &(output->attrs)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__EventProbeInfo *
aimdk_msgs__msg__EventProbeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__EventProbeInfo * msg = (aimdk_msgs__msg__EventProbeInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__EventProbeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__EventProbeInfo));
  bool success = aimdk_msgs__msg__EventProbeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__EventProbeInfo__destroy(aimdk_msgs__msg__EventProbeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__EventProbeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__EventProbeInfo__Sequence__init(aimdk_msgs__msg__EventProbeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__EventProbeInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__EventProbeInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__EventProbeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__EventProbeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__EventProbeInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__EventProbeInfo__Sequence__fini(aimdk_msgs__msg__EventProbeInfo__Sequence * array)
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
      aimdk_msgs__msg__EventProbeInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__EventProbeInfo__Sequence *
aimdk_msgs__msg__EventProbeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__EventProbeInfo__Sequence * array = (aimdk_msgs__msg__EventProbeInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__EventProbeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__EventProbeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__EventProbeInfo__Sequence__destroy(aimdk_msgs__msg__EventProbeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__EventProbeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__EventProbeInfo__Sequence__are_equal(const aimdk_msgs__msg__EventProbeInfo__Sequence * lhs, const aimdk_msgs__msg__EventProbeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__EventProbeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__EventProbeInfo__Sequence__copy(
  const aimdk_msgs__msg__EventProbeInfo__Sequence * input,
  aimdk_msgs__msg__EventProbeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__EventProbeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__EventProbeInfo * data =
      (aimdk_msgs__msg__EventProbeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__EventProbeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__EventProbeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__EventProbeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
