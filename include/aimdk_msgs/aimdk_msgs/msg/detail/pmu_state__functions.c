// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/pmu_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pmu_protocol_version`
// Member `pmu_hardware_version`
// Member `pmu_software_version`
// Member `bms_manufacturer`
// Member `bms_serial_number`
// Member `bms_protocol_version`
// Member `bms_hardware_version`
// Member `bms_software_version`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__PmuState__init(aimdk_msgs__msg__PmuState * msg)
{
  if (!msg) {
    return false;
  }
  // pmu_protocol_version
  if (!rosidl_runtime_c__String__init(&msg->pmu_protocol_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // pmu_hardware_version
  if (!rosidl_runtime_c__String__init(&msg->pmu_hardware_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // pmu_software_version
  if (!rosidl_runtime_c__String__init(&msg->pmu_software_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // power_status
  // pmu_bool_status
  // vcc_3v3_voltage
  // vcc_1v8_voltage
  // vcc_1v2_voltage
  // nfc_5v_voltage
  // soc_5v_voltage
  // sys_5v_voltage
  // sys_12v_voltage
  // orin_12v_voltage
  // ext_12v_voltage
  // ext_24v_voltage
  // arm_48v_voltage
  // leg_48v_voltage
  // soc_5v_current
  // sys_5v_current
  // sys_12v_current
  // orin_12v_current
  // ext_12v_current
  // ext_24v_current
  // arm_48v_current
  // leg_48v_current
  // bms_manufacturer
  if (!rosidl_runtime_c__String__init(&msg->bms_manufacturer)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // bms_serial_number
  if (!rosidl_runtime_c__String__init(&msg->bms_serial_number)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // bms_protocol_version
  if (!rosidl_runtime_c__String__init(&msg->bms_protocol_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // bms_hardware_version
  if (!rosidl_runtime_c__String__init(&msg->bms_hardware_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // bms_software_version
  if (!rosidl_runtime_c__String__init(&msg->bms_software_version)) {
    aimdk_msgs__msg__PmuState__fini(msg);
    return false;
  }
  // bms_status
  // bms_balance_line_resistance
  // bms_voltage
  // bms_current
  // bms_power
  // bms_temperature
  // bms_remaining_capacity
  // bms_remaining_capacity_percentage
  // bms_cycle_count
  // bms_cycle_total_capacity
  return true;
}

void
aimdk_msgs__msg__PmuState__fini(aimdk_msgs__msg__PmuState * msg)
{
  if (!msg) {
    return;
  }
  // pmu_protocol_version
  rosidl_runtime_c__String__fini(&msg->pmu_protocol_version);
  // pmu_hardware_version
  rosidl_runtime_c__String__fini(&msg->pmu_hardware_version);
  // pmu_software_version
  rosidl_runtime_c__String__fini(&msg->pmu_software_version);
  // power_status
  // pmu_bool_status
  // vcc_3v3_voltage
  // vcc_1v8_voltage
  // vcc_1v2_voltage
  // nfc_5v_voltage
  // soc_5v_voltage
  // sys_5v_voltage
  // sys_12v_voltage
  // orin_12v_voltage
  // ext_12v_voltage
  // ext_24v_voltage
  // arm_48v_voltage
  // leg_48v_voltage
  // soc_5v_current
  // sys_5v_current
  // sys_12v_current
  // orin_12v_current
  // ext_12v_current
  // ext_24v_current
  // arm_48v_current
  // leg_48v_current
  // bms_manufacturer
  rosidl_runtime_c__String__fini(&msg->bms_manufacturer);
  // bms_serial_number
  rosidl_runtime_c__String__fini(&msg->bms_serial_number);
  // bms_protocol_version
  rosidl_runtime_c__String__fini(&msg->bms_protocol_version);
  // bms_hardware_version
  rosidl_runtime_c__String__fini(&msg->bms_hardware_version);
  // bms_software_version
  rosidl_runtime_c__String__fini(&msg->bms_software_version);
  // bms_status
  // bms_balance_line_resistance
  // bms_voltage
  // bms_current
  // bms_power
  // bms_temperature
  // bms_remaining_capacity
  // bms_remaining_capacity_percentage
  // bms_cycle_count
  // bms_cycle_total_capacity
}

bool
aimdk_msgs__msg__PmuState__are_equal(const aimdk_msgs__msg__PmuState * lhs, const aimdk_msgs__msg__PmuState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pmu_protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pmu_protocol_version), &(rhs->pmu_protocol_version)))
  {
    return false;
  }
  // pmu_hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pmu_hardware_version), &(rhs->pmu_hardware_version)))
  {
    return false;
  }
  // pmu_software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pmu_software_version), &(rhs->pmu_software_version)))
  {
    return false;
  }
  // power_status
  if (lhs->power_status != rhs->power_status) {
    return false;
  }
  // pmu_bool_status
  if (lhs->pmu_bool_status != rhs->pmu_bool_status) {
    return false;
  }
  // vcc_3v3_voltage
  if (lhs->vcc_3v3_voltage != rhs->vcc_3v3_voltage) {
    return false;
  }
  // vcc_1v8_voltage
  if (lhs->vcc_1v8_voltage != rhs->vcc_1v8_voltage) {
    return false;
  }
  // vcc_1v2_voltage
  if (lhs->vcc_1v2_voltage != rhs->vcc_1v2_voltage) {
    return false;
  }
  // nfc_5v_voltage
  if (lhs->nfc_5v_voltage != rhs->nfc_5v_voltage) {
    return false;
  }
  // soc_5v_voltage
  if (lhs->soc_5v_voltage != rhs->soc_5v_voltage) {
    return false;
  }
  // sys_5v_voltage
  if (lhs->sys_5v_voltage != rhs->sys_5v_voltage) {
    return false;
  }
  // sys_12v_voltage
  if (lhs->sys_12v_voltage != rhs->sys_12v_voltage) {
    return false;
  }
  // orin_12v_voltage
  if (lhs->orin_12v_voltage != rhs->orin_12v_voltage) {
    return false;
  }
  // ext_12v_voltage
  if (lhs->ext_12v_voltage != rhs->ext_12v_voltage) {
    return false;
  }
  // ext_24v_voltage
  if (lhs->ext_24v_voltage != rhs->ext_24v_voltage) {
    return false;
  }
  // arm_48v_voltage
  if (lhs->arm_48v_voltage != rhs->arm_48v_voltage) {
    return false;
  }
  // leg_48v_voltage
  if (lhs->leg_48v_voltage != rhs->leg_48v_voltage) {
    return false;
  }
  // soc_5v_current
  if (lhs->soc_5v_current != rhs->soc_5v_current) {
    return false;
  }
  // sys_5v_current
  if (lhs->sys_5v_current != rhs->sys_5v_current) {
    return false;
  }
  // sys_12v_current
  if (lhs->sys_12v_current != rhs->sys_12v_current) {
    return false;
  }
  // orin_12v_current
  if (lhs->orin_12v_current != rhs->orin_12v_current) {
    return false;
  }
  // ext_12v_current
  if (lhs->ext_12v_current != rhs->ext_12v_current) {
    return false;
  }
  // ext_24v_current
  if (lhs->ext_24v_current != rhs->ext_24v_current) {
    return false;
  }
  // arm_48v_current
  if (lhs->arm_48v_current != rhs->arm_48v_current) {
    return false;
  }
  // leg_48v_current
  if (lhs->leg_48v_current != rhs->leg_48v_current) {
    return false;
  }
  // bms_manufacturer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bms_manufacturer), &(rhs->bms_manufacturer)))
  {
    return false;
  }
  // bms_serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bms_serial_number), &(rhs->bms_serial_number)))
  {
    return false;
  }
  // bms_protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bms_protocol_version), &(rhs->bms_protocol_version)))
  {
    return false;
  }
  // bms_hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bms_hardware_version), &(rhs->bms_hardware_version)))
  {
    return false;
  }
  // bms_software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bms_software_version), &(rhs->bms_software_version)))
  {
    return false;
  }
  // bms_status
  if (lhs->bms_status != rhs->bms_status) {
    return false;
  }
  // bms_balance_line_resistance
  if (lhs->bms_balance_line_resistance != rhs->bms_balance_line_resistance) {
    return false;
  }
  // bms_voltage
  if (lhs->bms_voltage != rhs->bms_voltage) {
    return false;
  }
  // bms_current
  if (lhs->bms_current != rhs->bms_current) {
    return false;
  }
  // bms_power
  if (lhs->bms_power != rhs->bms_power) {
    return false;
  }
  // bms_temperature
  if (lhs->bms_temperature != rhs->bms_temperature) {
    return false;
  }
  // bms_remaining_capacity
  if (lhs->bms_remaining_capacity != rhs->bms_remaining_capacity) {
    return false;
  }
  // bms_remaining_capacity_percentage
  if (lhs->bms_remaining_capacity_percentage != rhs->bms_remaining_capacity_percentage) {
    return false;
  }
  // bms_cycle_count
  if (lhs->bms_cycle_count != rhs->bms_cycle_count) {
    return false;
  }
  // bms_cycle_total_capacity
  if (lhs->bms_cycle_total_capacity != rhs->bms_cycle_total_capacity) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__PmuState__copy(
  const aimdk_msgs__msg__PmuState * input,
  aimdk_msgs__msg__PmuState * output)
{
  if (!input || !output) {
    return false;
  }
  // pmu_protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->pmu_protocol_version), &(output->pmu_protocol_version)))
  {
    return false;
  }
  // pmu_hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->pmu_hardware_version), &(output->pmu_hardware_version)))
  {
    return false;
  }
  // pmu_software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->pmu_software_version), &(output->pmu_software_version)))
  {
    return false;
  }
  // power_status
  output->power_status = input->power_status;
  // pmu_bool_status
  output->pmu_bool_status = input->pmu_bool_status;
  // vcc_3v3_voltage
  output->vcc_3v3_voltage = input->vcc_3v3_voltage;
  // vcc_1v8_voltage
  output->vcc_1v8_voltage = input->vcc_1v8_voltage;
  // vcc_1v2_voltage
  output->vcc_1v2_voltage = input->vcc_1v2_voltage;
  // nfc_5v_voltage
  output->nfc_5v_voltage = input->nfc_5v_voltage;
  // soc_5v_voltage
  output->soc_5v_voltage = input->soc_5v_voltage;
  // sys_5v_voltage
  output->sys_5v_voltage = input->sys_5v_voltage;
  // sys_12v_voltage
  output->sys_12v_voltage = input->sys_12v_voltage;
  // orin_12v_voltage
  output->orin_12v_voltage = input->orin_12v_voltage;
  // ext_12v_voltage
  output->ext_12v_voltage = input->ext_12v_voltage;
  // ext_24v_voltage
  output->ext_24v_voltage = input->ext_24v_voltage;
  // arm_48v_voltage
  output->arm_48v_voltage = input->arm_48v_voltage;
  // leg_48v_voltage
  output->leg_48v_voltage = input->leg_48v_voltage;
  // soc_5v_current
  output->soc_5v_current = input->soc_5v_current;
  // sys_5v_current
  output->sys_5v_current = input->sys_5v_current;
  // sys_12v_current
  output->sys_12v_current = input->sys_12v_current;
  // orin_12v_current
  output->orin_12v_current = input->orin_12v_current;
  // ext_12v_current
  output->ext_12v_current = input->ext_12v_current;
  // ext_24v_current
  output->ext_24v_current = input->ext_24v_current;
  // arm_48v_current
  output->arm_48v_current = input->arm_48v_current;
  // leg_48v_current
  output->leg_48v_current = input->leg_48v_current;
  // bms_manufacturer
  if (!rosidl_runtime_c__String__copy(
      &(input->bms_manufacturer), &(output->bms_manufacturer)))
  {
    return false;
  }
  // bms_serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->bms_serial_number), &(output->bms_serial_number)))
  {
    return false;
  }
  // bms_protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->bms_protocol_version), &(output->bms_protocol_version)))
  {
    return false;
  }
  // bms_hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->bms_hardware_version), &(output->bms_hardware_version)))
  {
    return false;
  }
  // bms_software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->bms_software_version), &(output->bms_software_version)))
  {
    return false;
  }
  // bms_status
  output->bms_status = input->bms_status;
  // bms_balance_line_resistance
  output->bms_balance_line_resistance = input->bms_balance_line_resistance;
  // bms_voltage
  output->bms_voltage = input->bms_voltage;
  // bms_current
  output->bms_current = input->bms_current;
  // bms_power
  output->bms_power = input->bms_power;
  // bms_temperature
  output->bms_temperature = input->bms_temperature;
  // bms_remaining_capacity
  output->bms_remaining_capacity = input->bms_remaining_capacity;
  // bms_remaining_capacity_percentage
  output->bms_remaining_capacity_percentage = input->bms_remaining_capacity_percentage;
  // bms_cycle_count
  output->bms_cycle_count = input->bms_cycle_count;
  // bms_cycle_total_capacity
  output->bms_cycle_total_capacity = input->bms_cycle_total_capacity;
  return true;
}

aimdk_msgs__msg__PmuState *
aimdk_msgs__msg__PmuState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PmuState * msg = (aimdk_msgs__msg__PmuState *)allocator.allocate(sizeof(aimdk_msgs__msg__PmuState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__PmuState));
  bool success = aimdk_msgs__msg__PmuState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__PmuState__destroy(aimdk_msgs__msg__PmuState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__PmuState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__PmuState__Sequence__init(aimdk_msgs__msg__PmuState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PmuState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__PmuState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__PmuState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__PmuState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__PmuState__fini(&data[i - 1]);
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
aimdk_msgs__msg__PmuState__Sequence__fini(aimdk_msgs__msg__PmuState__Sequence * array)
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
      aimdk_msgs__msg__PmuState__fini(&array->data[i]);
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

aimdk_msgs__msg__PmuState__Sequence *
aimdk_msgs__msg__PmuState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PmuState__Sequence * array = (aimdk_msgs__msg__PmuState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__PmuState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__PmuState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__PmuState__Sequence__destroy(aimdk_msgs__msg__PmuState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__PmuState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__PmuState__Sequence__are_equal(const aimdk_msgs__msg__PmuState__Sequence * lhs, const aimdk_msgs__msg__PmuState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__PmuState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__PmuState__Sequence__copy(
  const aimdk_msgs__msg__PmuState__Sequence * input,
  aimdk_msgs__msg__PmuState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__PmuState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__PmuState * data =
      (aimdk_msgs__msg__PmuState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__PmuState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__PmuState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__PmuState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
