// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/VolumeChange.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/volume_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "aimdk_msgs/msg/detail/volume_type__functions.h"

bool
aimdk_msgs__msg__VolumeChange__init(aimdk_msgs__msg__VolumeChange * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__VolumeType__init(&msg->type)) {
    aimdk_msgs__msg__VolumeChange__fini(msg);
    return false;
  }
  // audio_volume
  return true;
}

void
aimdk_msgs__msg__VolumeChange__fini(aimdk_msgs__msg__VolumeChange * msg)
{
  if (!msg) {
    return;
  }
  // type
  aimdk_msgs__msg__VolumeType__fini(&msg->type);
  // audio_volume
}

bool
aimdk_msgs__msg__VolumeChange__are_equal(const aimdk_msgs__msg__VolumeChange * lhs, const aimdk_msgs__msg__VolumeChange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__VolumeType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // audio_volume
  if (lhs->audio_volume != rhs->audio_volume) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__VolumeChange__copy(
  const aimdk_msgs__msg__VolumeChange * input,
  aimdk_msgs__msg__VolumeChange * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__VolumeType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // audio_volume
  output->audio_volume = input->audio_volume;
  return true;
}

aimdk_msgs__msg__VolumeChange *
aimdk_msgs__msg__VolumeChange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__VolumeChange * msg = (aimdk_msgs__msg__VolumeChange *)allocator.allocate(sizeof(aimdk_msgs__msg__VolumeChange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__VolumeChange));
  bool success = aimdk_msgs__msg__VolumeChange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__VolumeChange__destroy(aimdk_msgs__msg__VolumeChange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__VolumeChange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__VolumeChange__Sequence__init(aimdk_msgs__msg__VolumeChange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__VolumeChange * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__VolumeChange *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__VolumeChange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__VolumeChange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__VolumeChange__fini(&data[i - 1]);
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
aimdk_msgs__msg__VolumeChange__Sequence__fini(aimdk_msgs__msg__VolumeChange__Sequence * array)
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
      aimdk_msgs__msg__VolumeChange__fini(&array->data[i]);
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

aimdk_msgs__msg__VolumeChange__Sequence *
aimdk_msgs__msg__VolumeChange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__VolumeChange__Sequence * array = (aimdk_msgs__msg__VolumeChange__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__VolumeChange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__VolumeChange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__VolumeChange__Sequence__destroy(aimdk_msgs__msg__VolumeChange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__VolumeChange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__VolumeChange__Sequence__are_equal(const aimdk_msgs__msg__VolumeChange__Sequence * lhs, const aimdk_msgs__msg__VolumeChange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__VolumeChange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__VolumeChange__Sequence__copy(
  const aimdk_msgs__msg__VolumeChange__Sequence * input,
  aimdk_msgs__msg__VolumeChange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__VolumeChange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__VolumeChange * data =
      (aimdk_msgs__msg__VolumeChange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__VolumeChange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__VolumeChange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__VolumeChange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
