// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McMotion.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tag`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "aimdk_msgs/msg/detail/mc_motion_type__functions.h"
// Member `intr_info`
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__functions.h"

bool
aimdk_msgs__msg__McMotion__init(aimdk_msgs__msg__McMotion * msg)
{
  if (!msg) {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__init(&msg->tag)) {
    aimdk_msgs__msg__McMotion__fini(msg);
    return false;
  }
  // type
  if (!aimdk_msgs__msg__McMotionType__init(&msg->type)) {
    aimdk_msgs__msg__McMotion__fini(msg);
    return false;
  }
  // intr_info
  if (!aimdk_msgs__msg__McMotionIntrInfo__init(&msg->intr_info)) {
    aimdk_msgs__msg__McMotion__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__McMotion__fini(aimdk_msgs__msg__McMotion * msg)
{
  if (!msg) {
    return;
  }
  // tag
  rosidl_runtime_c__String__fini(&msg->tag);
  // type
  aimdk_msgs__msg__McMotionType__fini(&msg->type);
  // intr_info
  aimdk_msgs__msg__McMotionIntrInfo__fini(&msg->intr_info);
}

bool
aimdk_msgs__msg__McMotion__are_equal(const aimdk_msgs__msg__McMotion * lhs, const aimdk_msgs__msg__McMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag), &(rhs->tag)))
  {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__McMotionType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // intr_info
  if (!aimdk_msgs__msg__McMotionIntrInfo__are_equal(
      &(lhs->intr_info), &(rhs->intr_info)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McMotion__copy(
  const aimdk_msgs__msg__McMotion * input,
  aimdk_msgs__msg__McMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__copy(
      &(input->tag), &(output->tag)))
  {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__McMotionType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // intr_info
  if (!aimdk_msgs__msg__McMotionIntrInfo__copy(
      &(input->intr_info), &(output->intr_info)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__McMotion *
aimdk_msgs__msg__McMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotion * msg = (aimdk_msgs__msg__McMotion *)allocator.allocate(sizeof(aimdk_msgs__msg__McMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McMotion));
  bool success = aimdk_msgs__msg__McMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McMotion__destroy(aimdk_msgs__msg__McMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McMotion__Sequence__init(aimdk_msgs__msg__McMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotion * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McMotion *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McMotion__fini(&data[i - 1]);
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
aimdk_msgs__msg__McMotion__Sequence__fini(aimdk_msgs__msg__McMotion__Sequence * array)
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
      aimdk_msgs__msg__McMotion__fini(&array->data[i]);
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

aimdk_msgs__msg__McMotion__Sequence *
aimdk_msgs__msg__McMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotion__Sequence * array = (aimdk_msgs__msg__McMotion__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McMotion__Sequence__destroy(aimdk_msgs__msg__McMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McMotion__Sequence__are_equal(const aimdk_msgs__msg__McMotion__Sequence * lhs, const aimdk_msgs__msg__McMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McMotion__Sequence__copy(
  const aimdk_msgs__msg__McMotion__Sequence * input,
  aimdk_msgs__msg__McMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McMotion * data =
      (aimdk_msgs__msg__McMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
