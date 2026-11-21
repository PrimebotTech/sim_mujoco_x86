// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_motion_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `player_state`
#include "aimdk_msgs/msg/detail/mc_player_state__functions.h"
// Member `control_area`
#include "aimdk_msgs/msg/detail/mc_control_area__functions.h"
// Member `motion`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "aimdk_msgs/msg/detail/mc_motion_type__functions.h"
// Member `intr_info`
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__functions.h"
// Member `gravity_state`
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__functions.h"

bool
aimdk_msgs__msg__McMotionStatus__init(aimdk_msgs__msg__McMotionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // player_state
  if (!aimdk_msgs__msg__McPlayerState__init(&msg->player_state)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  // control_area
  if (!aimdk_msgs__msg__McControlArea__init(&msg->control_area)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  // motion
  if (!rosidl_runtime_c__String__init(&msg->motion)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  // type
  if (!aimdk_msgs__msg__McMotionType__init(&msg->type)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  // intr_info
  if (!aimdk_msgs__msg__McMotionIntrInfo__init(&msg->intr_info)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  // current_steps
  // gravity_state
  if (!aimdk_msgs__msg__McMimicGravityState__init(&msg->gravity_state)) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__McMotionStatus__fini(aimdk_msgs__msg__McMotionStatus * msg)
{
  if (!msg) {
    return;
  }
  // player_state
  aimdk_msgs__msg__McPlayerState__fini(&msg->player_state);
  // control_area
  aimdk_msgs__msg__McControlArea__fini(&msg->control_area);
  // motion
  rosidl_runtime_c__String__fini(&msg->motion);
  // type
  aimdk_msgs__msg__McMotionType__fini(&msg->type);
  // intr_info
  aimdk_msgs__msg__McMotionIntrInfo__fini(&msg->intr_info);
  // current_steps
  // gravity_state
  aimdk_msgs__msg__McMimicGravityState__fini(&msg->gravity_state);
}

bool
aimdk_msgs__msg__McMotionStatus__are_equal(const aimdk_msgs__msg__McMotionStatus * lhs, const aimdk_msgs__msg__McMotionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // player_state
  if (!aimdk_msgs__msg__McPlayerState__are_equal(
      &(lhs->player_state), &(rhs->player_state)))
  {
    return false;
  }
  // control_area
  if (!aimdk_msgs__msg__McControlArea__are_equal(
      &(lhs->control_area), &(rhs->control_area)))
  {
    return false;
  }
  // motion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion), &(rhs->motion)))
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
  // current_steps
  if (lhs->current_steps != rhs->current_steps) {
    return false;
  }
  // gravity_state
  if (!aimdk_msgs__msg__McMimicGravityState__are_equal(
      &(lhs->gravity_state), &(rhs->gravity_state)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McMotionStatus__copy(
  const aimdk_msgs__msg__McMotionStatus * input,
  aimdk_msgs__msg__McMotionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // player_state
  if (!aimdk_msgs__msg__McPlayerState__copy(
      &(input->player_state), &(output->player_state)))
  {
    return false;
  }
  // control_area
  if (!aimdk_msgs__msg__McControlArea__copy(
      &(input->control_area), &(output->control_area)))
  {
    return false;
  }
  // motion
  if (!rosidl_runtime_c__String__copy(
      &(input->motion), &(output->motion)))
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
  // current_steps
  output->current_steps = input->current_steps;
  // gravity_state
  if (!aimdk_msgs__msg__McMimicGravityState__copy(
      &(input->gravity_state), &(output->gravity_state)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__McMotionStatus *
aimdk_msgs__msg__McMotionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotionStatus * msg = (aimdk_msgs__msg__McMotionStatus *)allocator.allocate(sizeof(aimdk_msgs__msg__McMotionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McMotionStatus));
  bool success = aimdk_msgs__msg__McMotionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McMotionStatus__destroy(aimdk_msgs__msg__McMotionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McMotionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McMotionStatus__Sequence__init(aimdk_msgs__msg__McMotionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotionStatus * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McMotionStatus *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McMotionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McMotionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McMotionStatus__fini(&data[i - 1]);
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
aimdk_msgs__msg__McMotionStatus__Sequence__fini(aimdk_msgs__msg__McMotionStatus__Sequence * array)
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
      aimdk_msgs__msg__McMotionStatus__fini(&array->data[i]);
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

aimdk_msgs__msg__McMotionStatus__Sequence *
aimdk_msgs__msg__McMotionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McMotionStatus__Sequence * array = (aimdk_msgs__msg__McMotionStatus__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McMotionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McMotionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McMotionStatus__Sequence__destroy(aimdk_msgs__msg__McMotionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McMotionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McMotionStatus__Sequence__are_equal(const aimdk_msgs__msg__McMotionStatus__Sequence * lhs, const aimdk_msgs__msg__McMotionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McMotionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McMotionStatus__Sequence__copy(
  const aimdk_msgs__msg__McMotionStatus__Sequence * input,
  aimdk_msgs__msg__McMotionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McMotionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McMotionStatus * data =
      (aimdk_msgs__msg__McMotionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McMotionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McMotionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McMotionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
