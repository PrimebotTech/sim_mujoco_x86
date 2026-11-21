// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/MusicInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/music_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `name`
// Member `artist`
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__MusicInfo__init(aimdk_msgs__msg__MusicInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    aimdk_msgs__msg__MusicInfo__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    aimdk_msgs__msg__MusicInfo__fini(msg);
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__init(&msg->artist, 0)) {
    aimdk_msgs__msg__MusicInfo__fini(msg);
    return false;
  }
  // duration_ms
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    aimdk_msgs__msg__MusicInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__MusicInfo__fini(aimdk_msgs__msg__MusicInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // artist
  rosidl_runtime_c__String__Sequence__fini(&msg->artist);
  // duration_ms
  // source
  rosidl_runtime_c__String__fini(&msg->source);
}

bool
aimdk_msgs__msg__MusicInfo__are_equal(const aimdk_msgs__msg__MusicInfo * lhs, const aimdk_msgs__msg__MusicInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->artist), &(rhs->artist)))
  {
    return false;
  }
  // duration_ms
  if (lhs->duration_ms != rhs->duration_ms) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__MusicInfo__copy(
  const aimdk_msgs__msg__MusicInfo * input,
  aimdk_msgs__msg__MusicInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->artist), &(output->artist)))
  {
    return false;
  }
  // duration_ms
  output->duration_ms = input->duration_ms;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__MusicInfo *
aimdk_msgs__msg__MusicInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicInfo * msg = (aimdk_msgs__msg__MusicInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__MusicInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__MusicInfo));
  bool success = aimdk_msgs__msg__MusicInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__MusicInfo__destroy(aimdk_msgs__msg__MusicInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__MusicInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__MusicInfo__Sequence__init(aimdk_msgs__msg__MusicInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__MusicInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__MusicInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__MusicInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__MusicInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__MusicInfo__Sequence__fini(aimdk_msgs__msg__MusicInfo__Sequence * array)
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
      aimdk_msgs__msg__MusicInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__MusicInfo__Sequence *
aimdk_msgs__msg__MusicInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicInfo__Sequence * array = (aimdk_msgs__msg__MusicInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__MusicInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__MusicInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__MusicInfo__Sequence__destroy(aimdk_msgs__msg__MusicInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__MusicInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__MusicInfo__Sequence__are_equal(const aimdk_msgs__msg__MusicInfo__Sequence * lhs, const aimdk_msgs__msg__MusicInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__MusicInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__MusicInfo__Sequence__copy(
  const aimdk_msgs__msg__MusicInfo__Sequence * input,
  aimdk_msgs__msg__MusicInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__MusicInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__MusicInfo * data =
      (aimdk_msgs__msg__MusicInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__MusicInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__MusicInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__MusicInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
