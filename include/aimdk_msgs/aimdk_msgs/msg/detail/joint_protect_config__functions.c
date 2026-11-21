// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/joint_protect_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aimdk_msgs__msg__JointProtectConfig__init(aimdk_msgs__msg__JointProtectConfig * msg)
{
  if (!msg) {
    return false;
  }
  // l1_mos_protect
  // l1_mos_recover
  // l1_current_protect
  // l1_current_recover
  // l1_voltage_protect
  // l1_voltage_recover
  // l2_mos_protect
  // l2_mos_recover
  // l2_current_protect
  // l2_current_recover
  // l2_voltage_protect
  // l2_voltage_recover
  return true;
}

void
aimdk_msgs__msg__JointProtectConfig__fini(aimdk_msgs__msg__JointProtectConfig * msg)
{
  if (!msg) {
    return;
  }
  // l1_mos_protect
  // l1_mos_recover
  // l1_current_protect
  // l1_current_recover
  // l1_voltage_protect
  // l1_voltage_recover
  // l2_mos_protect
  // l2_mos_recover
  // l2_current_protect
  // l2_current_recover
  // l2_voltage_protect
  // l2_voltage_recover
}

bool
aimdk_msgs__msg__JointProtectConfig__are_equal(const aimdk_msgs__msg__JointProtectConfig * lhs, const aimdk_msgs__msg__JointProtectConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l1_mos_protect
  if (lhs->l1_mos_protect != rhs->l1_mos_protect) {
    return false;
  }
  // l1_mos_recover
  if (lhs->l1_mos_recover != rhs->l1_mos_recover) {
    return false;
  }
  // l1_current_protect
  if (lhs->l1_current_protect != rhs->l1_current_protect) {
    return false;
  }
  // l1_current_recover
  if (lhs->l1_current_recover != rhs->l1_current_recover) {
    return false;
  }
  // l1_voltage_protect
  if (lhs->l1_voltage_protect != rhs->l1_voltage_protect) {
    return false;
  }
  // l1_voltage_recover
  if (lhs->l1_voltage_recover != rhs->l1_voltage_recover) {
    return false;
  }
  // l2_mos_protect
  if (lhs->l2_mos_protect != rhs->l2_mos_protect) {
    return false;
  }
  // l2_mos_recover
  if (lhs->l2_mos_recover != rhs->l2_mos_recover) {
    return false;
  }
  // l2_current_protect
  if (lhs->l2_current_protect != rhs->l2_current_protect) {
    return false;
  }
  // l2_current_recover
  if (lhs->l2_current_recover != rhs->l2_current_recover) {
    return false;
  }
  // l2_voltage_protect
  if (lhs->l2_voltage_protect != rhs->l2_voltage_protect) {
    return false;
  }
  // l2_voltage_recover
  if (lhs->l2_voltage_recover != rhs->l2_voltage_recover) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__JointProtectConfig__copy(
  const aimdk_msgs__msg__JointProtectConfig * input,
  aimdk_msgs__msg__JointProtectConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // l1_mos_protect
  output->l1_mos_protect = input->l1_mos_protect;
  // l1_mos_recover
  output->l1_mos_recover = input->l1_mos_recover;
  // l1_current_protect
  output->l1_current_protect = input->l1_current_protect;
  // l1_current_recover
  output->l1_current_recover = input->l1_current_recover;
  // l1_voltage_protect
  output->l1_voltage_protect = input->l1_voltage_protect;
  // l1_voltage_recover
  output->l1_voltage_recover = input->l1_voltage_recover;
  // l2_mos_protect
  output->l2_mos_protect = input->l2_mos_protect;
  // l2_mos_recover
  output->l2_mos_recover = input->l2_mos_recover;
  // l2_current_protect
  output->l2_current_protect = input->l2_current_protect;
  // l2_current_recover
  output->l2_current_recover = input->l2_current_recover;
  // l2_voltage_protect
  output->l2_voltage_protect = input->l2_voltage_protect;
  // l2_voltage_recover
  output->l2_voltage_recover = input->l2_voltage_recover;
  return true;
}

aimdk_msgs__msg__JointProtectConfig *
aimdk_msgs__msg__JointProtectConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointProtectConfig * msg = (aimdk_msgs__msg__JointProtectConfig *)allocator.allocate(sizeof(aimdk_msgs__msg__JointProtectConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__JointProtectConfig));
  bool success = aimdk_msgs__msg__JointProtectConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__JointProtectConfig__destroy(aimdk_msgs__msg__JointProtectConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__JointProtectConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__JointProtectConfig__Sequence__init(aimdk_msgs__msg__JointProtectConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointProtectConfig * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__JointProtectConfig *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__JointProtectConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__JointProtectConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__JointProtectConfig__fini(&data[i - 1]);
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
aimdk_msgs__msg__JointProtectConfig__Sequence__fini(aimdk_msgs__msg__JointProtectConfig__Sequence * array)
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
      aimdk_msgs__msg__JointProtectConfig__fini(&array->data[i]);
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

aimdk_msgs__msg__JointProtectConfig__Sequence *
aimdk_msgs__msg__JointProtectConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointProtectConfig__Sequence * array = (aimdk_msgs__msg__JointProtectConfig__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__JointProtectConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__JointProtectConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__JointProtectConfig__Sequence__destroy(aimdk_msgs__msg__JointProtectConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__JointProtectConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__JointProtectConfig__Sequence__are_equal(const aimdk_msgs__msg__JointProtectConfig__Sequence * lhs, const aimdk_msgs__msg__JointProtectConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__JointProtectConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__JointProtectConfig__Sequence__copy(
  const aimdk_msgs__msg__JointProtectConfig__Sequence * input,
  aimdk_msgs__msg__JointProtectConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__JointProtectConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__JointProtectConfig * data =
      (aimdk_msgs__msg__JointProtectConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__JointProtectConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__JointProtectConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__JointProtectConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
