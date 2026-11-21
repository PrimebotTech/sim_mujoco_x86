// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McBodyPose.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_body_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__McBodyPose__init(aimdk_msgs__msg__McBodyPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__McBodyPose__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    aimdk_msgs__msg__McBodyPose__fini(msg);
    return false;
  }
  // stand_height
  // bend_forward
  // bend_sideways
  // twist_waist
  // raise_head
  // turn_head
  return true;
}

void
aimdk_msgs__msg__McBodyPose__fini(aimdk_msgs__msg__McBodyPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // stand_height
  // bend_forward
  // bend_sideways
  // twist_waist
  // raise_head
  // turn_head
}

bool
aimdk_msgs__msg__McBodyPose__are_equal(const aimdk_msgs__msg__McBodyPose * lhs, const aimdk_msgs__msg__McBodyPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // stand_height
  if (lhs->stand_height != rhs->stand_height) {
    return false;
  }
  // bend_forward
  if (lhs->bend_forward != rhs->bend_forward) {
    return false;
  }
  // bend_sideways
  if (lhs->bend_sideways != rhs->bend_sideways) {
    return false;
  }
  // twist_waist
  if (lhs->twist_waist != rhs->twist_waist) {
    return false;
  }
  // raise_head
  if (lhs->raise_head != rhs->raise_head) {
    return false;
  }
  // turn_head
  if (lhs->turn_head != rhs->turn_head) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McBodyPose__copy(
  const aimdk_msgs__msg__McBodyPose * input,
  aimdk_msgs__msg__McBodyPose * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // stand_height
  output->stand_height = input->stand_height;
  // bend_forward
  output->bend_forward = input->bend_forward;
  // bend_sideways
  output->bend_sideways = input->bend_sideways;
  // twist_waist
  output->twist_waist = input->twist_waist;
  // raise_head
  output->raise_head = input->raise_head;
  // turn_head
  output->turn_head = input->turn_head;
  return true;
}

aimdk_msgs__msg__McBodyPose *
aimdk_msgs__msg__McBodyPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McBodyPose * msg = (aimdk_msgs__msg__McBodyPose *)allocator.allocate(sizeof(aimdk_msgs__msg__McBodyPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McBodyPose));
  bool success = aimdk_msgs__msg__McBodyPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McBodyPose__destroy(aimdk_msgs__msg__McBodyPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McBodyPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McBodyPose__Sequence__init(aimdk_msgs__msg__McBodyPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McBodyPose * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McBodyPose *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McBodyPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McBodyPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McBodyPose__fini(&data[i - 1]);
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
aimdk_msgs__msg__McBodyPose__Sequence__fini(aimdk_msgs__msg__McBodyPose__Sequence * array)
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
      aimdk_msgs__msg__McBodyPose__fini(&array->data[i]);
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

aimdk_msgs__msg__McBodyPose__Sequence *
aimdk_msgs__msg__McBodyPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McBodyPose__Sequence * array = (aimdk_msgs__msg__McBodyPose__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McBodyPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McBodyPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McBodyPose__Sequence__destroy(aimdk_msgs__msg__McBodyPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McBodyPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McBodyPose__Sequence__are_equal(const aimdk_msgs__msg__McBodyPose__Sequence * lhs, const aimdk_msgs__msg__McBodyPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McBodyPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McBodyPose__Sequence__copy(
  const aimdk_msgs__msg__McBodyPose__Sequence * input,
  aimdk_msgs__msg__McBodyPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McBodyPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McBodyPose * data =
      (aimdk_msgs__msg__McBodyPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McBodyPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McBodyPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McBodyPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
