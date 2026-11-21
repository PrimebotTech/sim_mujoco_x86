// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hds_msgs:msg/Exception.idl
// generated code does not contain a copyright notice
#include "hds_msgs/msg/detail/exception__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
hds_msgs__msg__Exception__init(hds_msgs__msg__Exception * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // module_id
  // code
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    hds_msgs__msg__Exception__fini(msg);
    return false;
  }
  return true;
}

void
hds_msgs__msg__Exception__fini(hds_msgs__msg__Exception * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // module_id
  // code
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
hds_msgs__msg__Exception__are_equal(const hds_msgs__msg__Exception * lhs, const hds_msgs__msg__Exception * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // module_id
  if (lhs->module_id != rhs->module_id) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
hds_msgs__msg__Exception__copy(
  const hds_msgs__msg__Exception * input,
  hds_msgs__msg__Exception * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  output->type = input->type;
  // module_id
  output->module_id = input->module_id;
  // code
  output->code = input->code;
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

hds_msgs__msg__Exception *
hds_msgs__msg__Exception__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hds_msgs__msg__Exception * msg = (hds_msgs__msg__Exception *)allocator.allocate(sizeof(hds_msgs__msg__Exception), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hds_msgs__msg__Exception));
  bool success = hds_msgs__msg__Exception__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hds_msgs__msg__Exception__destroy(hds_msgs__msg__Exception * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hds_msgs__msg__Exception__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hds_msgs__msg__Exception__Sequence__init(hds_msgs__msg__Exception__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hds_msgs__msg__Exception * data = NULL;

  if (size) {
    data = (hds_msgs__msg__Exception *)allocator.zero_allocate(size, sizeof(hds_msgs__msg__Exception), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hds_msgs__msg__Exception__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hds_msgs__msg__Exception__fini(&data[i - 1]);
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
hds_msgs__msg__Exception__Sequence__fini(hds_msgs__msg__Exception__Sequence * array)
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
      hds_msgs__msg__Exception__fini(&array->data[i]);
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

hds_msgs__msg__Exception__Sequence *
hds_msgs__msg__Exception__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hds_msgs__msg__Exception__Sequence * array = (hds_msgs__msg__Exception__Sequence *)allocator.allocate(sizeof(hds_msgs__msg__Exception__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hds_msgs__msg__Exception__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hds_msgs__msg__Exception__Sequence__destroy(hds_msgs__msg__Exception__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hds_msgs__msg__Exception__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hds_msgs__msg__Exception__Sequence__are_equal(const hds_msgs__msg__Exception__Sequence * lhs, const hds_msgs__msg__Exception__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hds_msgs__msg__Exception__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hds_msgs__msg__Exception__Sequence__copy(
  const hds_msgs__msg__Exception__Sequence * input,
  hds_msgs__msg__Exception__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hds_msgs__msg__Exception);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hds_msgs__msg__Exception * data =
      (hds_msgs__msg__Exception *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hds_msgs__msg__Exception__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hds_msgs__msg__Exception__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hds_msgs__msg__Exception__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
