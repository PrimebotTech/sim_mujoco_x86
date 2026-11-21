// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/Bms.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/bms__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"
// Member `manufacturer`
// Member `serial_number`
// Member `protocol_version`
// Member `hardware_version`
// Member `software_version`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__Bms__init(aimdk_msgs__msg__Bms * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // manufacturer
  if (!rosidl_runtime_c__String__init(&msg->manufacturer)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    aimdk_msgs__msg__Bms__fini(msg);
    return false;
  }
  // power_request
  // status
  // balance_line_resistance
  // voltage
  // current
  // power
  // temperature
  // remaining_capacity
  // remaining_capacity_percentage
  // cycle_count
  // cycle_total_capacity
  return true;
}

void
aimdk_msgs__msg__Bms__fini(aimdk_msgs__msg__Bms * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // manufacturer
  rosidl_runtime_c__String__fini(&msg->manufacturer);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // power_request
  // status
  // balance_line_resistance
  // voltage
  // current
  // power
  // temperature
  // remaining_capacity
  // remaining_capacity_percentage
  // cycle_count
  // cycle_total_capacity
}

bool
aimdk_msgs__msg__Bms__are_equal(const aimdk_msgs__msg__Bms * lhs, const aimdk_msgs__msg__Bms * rhs)
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
  // manufacturer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manufacturer), &(rhs->manufacturer)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->protocol_version), &(rhs->protocol_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_version), &(rhs->hardware_version)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software_version), &(rhs->software_version)))
  {
    return false;
  }
  // power_request
  if (lhs->power_request != rhs->power_request) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // balance_line_resistance
  if (lhs->balance_line_resistance != rhs->balance_line_resistance) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // remaining_capacity
  if (lhs->remaining_capacity != rhs->remaining_capacity) {
    return false;
  }
  // remaining_capacity_percentage
  if (lhs->remaining_capacity_percentage != rhs->remaining_capacity_percentage) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // cycle_total_capacity
  if (lhs->cycle_total_capacity != rhs->cycle_total_capacity) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__Bms__copy(
  const aimdk_msgs__msg__Bms * input,
  aimdk_msgs__msg__Bms * output)
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
  // manufacturer
  if (!rosidl_runtime_c__String__copy(
      &(input->manufacturer), &(output->manufacturer)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->protocol_version), &(output->protocol_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_version), &(output->hardware_version)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->software_version), &(output->software_version)))
  {
    return false;
  }
  // power_request
  output->power_request = input->power_request;
  // status
  output->status = input->status;
  // balance_line_resistance
  output->balance_line_resistance = input->balance_line_resistance;
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // power
  output->power = input->power;
  // temperature
  output->temperature = input->temperature;
  // remaining_capacity
  output->remaining_capacity = input->remaining_capacity;
  // remaining_capacity_percentage
  output->remaining_capacity_percentage = input->remaining_capacity_percentage;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // cycle_total_capacity
  output->cycle_total_capacity = input->cycle_total_capacity;
  return true;
}

aimdk_msgs__msg__Bms *
aimdk_msgs__msg__Bms__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Bms * msg = (aimdk_msgs__msg__Bms *)allocator.allocate(sizeof(aimdk_msgs__msg__Bms), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__Bms));
  bool success = aimdk_msgs__msg__Bms__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__Bms__destroy(aimdk_msgs__msg__Bms * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__Bms__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__Bms__Sequence__init(aimdk_msgs__msg__Bms__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Bms * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__Bms *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__Bms), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__Bms__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__Bms__fini(&data[i - 1]);
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
aimdk_msgs__msg__Bms__Sequence__fini(aimdk_msgs__msg__Bms__Sequence * array)
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
      aimdk_msgs__msg__Bms__fini(&array->data[i]);
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

aimdk_msgs__msg__Bms__Sequence *
aimdk_msgs__msg__Bms__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Bms__Sequence * array = (aimdk_msgs__msg__Bms__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__Bms__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__Bms__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__Bms__Sequence__destroy(aimdk_msgs__msg__Bms__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__Bms__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__Bms__Sequence__are_equal(const aimdk_msgs__msg__Bms__Sequence * lhs, const aimdk_msgs__msg__Bms__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__Bms__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__Bms__Sequence__copy(
  const aimdk_msgs__msg__Bms__Sequence * input,
  aimdk_msgs__msg__Bms__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__Bms);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__Bms * data =
      (aimdk_msgs__msg__Bms *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__Bms__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__Bms__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__Bms__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
