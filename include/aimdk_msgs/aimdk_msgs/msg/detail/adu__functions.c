// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/Adu.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/adu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"
// Member `protocol_version`
// Member `hardware_version`
// Member `software_version`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__Adu__init(aimdk_msgs__msg__Adu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__Adu__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    aimdk_msgs__msg__Adu__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    aimdk_msgs__msg__Adu__fini(msg);
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    aimdk_msgs__msg__Adu__fini(msg);
    return false;
  }
  // status_word
  // error_code
  // board_12v_voltage
  // board_5v_voltage
  // board_3v3_voltage
  // board_1v2_voltage
  // board_1v8_voltage
  // board_3v8_voltage
  // system_12v_current
  // board_temperature_voltage
  // board_hardware_voltage
  // ntc_temperature
  // fan1_target_speed
  // fan1_feedback_speed
  // fan2_target_speed
  // fan2_feedback_speed
  return true;
}

void
aimdk_msgs__msg__Adu__fini(aimdk_msgs__msg__Adu * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // status_word
  // error_code
  // board_12v_voltage
  // board_5v_voltage
  // board_3v3_voltage
  // board_1v2_voltage
  // board_1v8_voltage
  // board_3v8_voltage
  // system_12v_current
  // board_temperature_voltage
  // board_hardware_voltage
  // ntc_temperature
  // fan1_target_speed
  // fan1_feedback_speed
  // fan2_target_speed
  // fan2_feedback_speed
}

bool
aimdk_msgs__msg__Adu__are_equal(const aimdk_msgs__msg__Adu * lhs, const aimdk_msgs__msg__Adu * rhs)
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
  // status_word
  if (lhs->status_word != rhs->status_word) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // board_12v_voltage
  if (lhs->board_12v_voltage != rhs->board_12v_voltage) {
    return false;
  }
  // board_5v_voltage
  if (lhs->board_5v_voltage != rhs->board_5v_voltage) {
    return false;
  }
  // board_3v3_voltage
  if (lhs->board_3v3_voltage != rhs->board_3v3_voltage) {
    return false;
  }
  // board_1v2_voltage
  if (lhs->board_1v2_voltage != rhs->board_1v2_voltage) {
    return false;
  }
  // board_1v8_voltage
  if (lhs->board_1v8_voltage != rhs->board_1v8_voltage) {
    return false;
  }
  // board_3v8_voltage
  if (lhs->board_3v8_voltage != rhs->board_3v8_voltage) {
    return false;
  }
  // system_12v_current
  if (lhs->system_12v_current != rhs->system_12v_current) {
    return false;
  }
  // board_temperature_voltage
  if (lhs->board_temperature_voltage != rhs->board_temperature_voltage) {
    return false;
  }
  // board_hardware_voltage
  if (lhs->board_hardware_voltage != rhs->board_hardware_voltage) {
    return false;
  }
  // ntc_temperature
  if (lhs->ntc_temperature != rhs->ntc_temperature) {
    return false;
  }
  // fan1_target_speed
  if (lhs->fan1_target_speed != rhs->fan1_target_speed) {
    return false;
  }
  // fan1_feedback_speed
  if (lhs->fan1_feedback_speed != rhs->fan1_feedback_speed) {
    return false;
  }
  // fan2_target_speed
  if (lhs->fan2_target_speed != rhs->fan2_target_speed) {
    return false;
  }
  // fan2_feedback_speed
  if (lhs->fan2_feedback_speed != rhs->fan2_feedback_speed) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__Adu__copy(
  const aimdk_msgs__msg__Adu * input,
  aimdk_msgs__msg__Adu * output)
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
  // status_word
  output->status_word = input->status_word;
  // error_code
  output->error_code = input->error_code;
  // board_12v_voltage
  output->board_12v_voltage = input->board_12v_voltage;
  // board_5v_voltage
  output->board_5v_voltage = input->board_5v_voltage;
  // board_3v3_voltage
  output->board_3v3_voltage = input->board_3v3_voltage;
  // board_1v2_voltage
  output->board_1v2_voltage = input->board_1v2_voltage;
  // board_1v8_voltage
  output->board_1v8_voltage = input->board_1v8_voltage;
  // board_3v8_voltage
  output->board_3v8_voltage = input->board_3v8_voltage;
  // system_12v_current
  output->system_12v_current = input->system_12v_current;
  // board_temperature_voltage
  output->board_temperature_voltage = input->board_temperature_voltage;
  // board_hardware_voltage
  output->board_hardware_voltage = input->board_hardware_voltage;
  // ntc_temperature
  output->ntc_temperature = input->ntc_temperature;
  // fan1_target_speed
  output->fan1_target_speed = input->fan1_target_speed;
  // fan1_feedback_speed
  output->fan1_feedback_speed = input->fan1_feedback_speed;
  // fan2_target_speed
  output->fan2_target_speed = input->fan2_target_speed;
  // fan2_feedback_speed
  output->fan2_feedback_speed = input->fan2_feedback_speed;
  return true;
}

aimdk_msgs__msg__Adu *
aimdk_msgs__msg__Adu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Adu * msg = (aimdk_msgs__msg__Adu *)allocator.allocate(sizeof(aimdk_msgs__msg__Adu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__Adu));
  bool success = aimdk_msgs__msg__Adu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__Adu__destroy(aimdk_msgs__msg__Adu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__Adu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__Adu__Sequence__init(aimdk_msgs__msg__Adu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Adu * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__Adu *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__Adu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__Adu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__Adu__fini(&data[i - 1]);
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
aimdk_msgs__msg__Adu__Sequence__fini(aimdk_msgs__msg__Adu__Sequence * array)
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
      aimdk_msgs__msg__Adu__fini(&array->data[i]);
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

aimdk_msgs__msg__Adu__Sequence *
aimdk_msgs__msg__Adu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Adu__Sequence * array = (aimdk_msgs__msg__Adu__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__Adu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__Adu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__Adu__Sequence__destroy(aimdk_msgs__msg__Adu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__Adu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__Adu__Sequence__are_equal(const aimdk_msgs__msg__Adu__Sequence * lhs, const aimdk_msgs__msg__Adu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__Adu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__Adu__Sequence__copy(
  const aimdk_msgs__msg__Adu__Sequence * input,
  aimdk_msgs__msg__Adu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__Adu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__Adu * data =
      (aimdk_msgs__msg__Adu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__Adu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__Adu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__Adu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
