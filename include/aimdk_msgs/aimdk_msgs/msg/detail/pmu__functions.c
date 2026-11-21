// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/Pmu.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/pmu__functions.h"

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
// Member `orin_hardware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__Pmu__init(aimdk_msgs__msg__Pmu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__Pmu__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    aimdk_msgs__msg__Pmu__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    aimdk_msgs__msg__Pmu__fini(msg);
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    aimdk_msgs__msg__Pmu__fini(msg);
    return false;
  }
  // orin_hardware_version
  if (!rosidl_runtime_c__String__init(&msg->orin_hardware_version)) {
    aimdk_msgs__msg__Pmu__fini(msg);
    return false;
  }
  // status_word
  // status
  // vcc_3v3_voltage
  // vcc_1v8_voltage
  // vcc_1v2_voltage
  // nfc_5v_voltage
  // periph_5v_voltage
  // lcd_voltage
  // sys2_12v_voltage
  // soc0_5v_voltage
  // sys_5v_voltage
  // sys_12v_voltage
  // soc1_12v_voltage
  // ext_12v_voltage
  // ext_24v_voltage
  // arm_48v_voltage
  // leg_48v_voltage
  // soc0_5v_current
  // periph_5v_current
  // sys2_12v_current
  // sys_5v_current
  // sys_12v_current
  // soc1_12v_current
  // ext_12v_current
  // ext_24v_current
  // arm_48v_current
  // leg_48v_current
  // temp_48to12_orin_left
  // temp_48to12_orin_bottom
  // temp_12v_ext_mos
  // temp_12to5
  // temp_emmc
  // temp_soc
  return true;
}

void
aimdk_msgs__msg__Pmu__fini(aimdk_msgs__msg__Pmu * msg)
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
  // orin_hardware_version
  rosidl_runtime_c__String__fini(&msg->orin_hardware_version);
  // status_word
  // status
  // vcc_3v3_voltage
  // vcc_1v8_voltage
  // vcc_1v2_voltage
  // nfc_5v_voltage
  // periph_5v_voltage
  // lcd_voltage
  // sys2_12v_voltage
  // soc0_5v_voltage
  // sys_5v_voltage
  // sys_12v_voltage
  // soc1_12v_voltage
  // ext_12v_voltage
  // ext_24v_voltage
  // arm_48v_voltage
  // leg_48v_voltage
  // soc0_5v_current
  // periph_5v_current
  // sys2_12v_current
  // sys_5v_current
  // sys_12v_current
  // soc1_12v_current
  // ext_12v_current
  // ext_24v_current
  // arm_48v_current
  // leg_48v_current
  // temp_48to12_orin_left
  // temp_48to12_orin_bottom
  // temp_12v_ext_mos
  // temp_12to5
  // temp_emmc
  // temp_soc
}

bool
aimdk_msgs__msg__Pmu__are_equal(const aimdk_msgs__msg__Pmu * lhs, const aimdk_msgs__msg__Pmu * rhs)
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
  // orin_hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->orin_hardware_version), &(rhs->orin_hardware_version)))
  {
    return false;
  }
  // status_word
  if (lhs->status_word != rhs->status_word) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
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
  // periph_5v_voltage
  if (lhs->periph_5v_voltage != rhs->periph_5v_voltage) {
    return false;
  }
  // lcd_voltage
  if (lhs->lcd_voltage != rhs->lcd_voltage) {
    return false;
  }
  // sys2_12v_voltage
  if (lhs->sys2_12v_voltage != rhs->sys2_12v_voltage) {
    return false;
  }
  // soc0_5v_voltage
  if (lhs->soc0_5v_voltage != rhs->soc0_5v_voltage) {
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
  // soc1_12v_voltage
  if (lhs->soc1_12v_voltage != rhs->soc1_12v_voltage) {
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
  // soc0_5v_current
  if (lhs->soc0_5v_current != rhs->soc0_5v_current) {
    return false;
  }
  // periph_5v_current
  if (lhs->periph_5v_current != rhs->periph_5v_current) {
    return false;
  }
  // sys2_12v_current
  if (lhs->sys2_12v_current != rhs->sys2_12v_current) {
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
  // soc1_12v_current
  if (lhs->soc1_12v_current != rhs->soc1_12v_current) {
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
  // temp_48to12_orin_left
  if (lhs->temp_48to12_orin_left != rhs->temp_48to12_orin_left) {
    return false;
  }
  // temp_48to12_orin_bottom
  if (lhs->temp_48to12_orin_bottom != rhs->temp_48to12_orin_bottom) {
    return false;
  }
  // temp_12v_ext_mos
  if (lhs->temp_12v_ext_mos != rhs->temp_12v_ext_mos) {
    return false;
  }
  // temp_12to5
  if (lhs->temp_12to5 != rhs->temp_12to5) {
    return false;
  }
  // temp_emmc
  if (lhs->temp_emmc != rhs->temp_emmc) {
    return false;
  }
  // temp_soc
  if (lhs->temp_soc != rhs->temp_soc) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__Pmu__copy(
  const aimdk_msgs__msg__Pmu * input,
  aimdk_msgs__msg__Pmu * output)
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
  // orin_hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->orin_hardware_version), &(output->orin_hardware_version)))
  {
    return false;
  }
  // status_word
  output->status_word = input->status_word;
  // status
  output->status = input->status;
  // vcc_3v3_voltage
  output->vcc_3v3_voltage = input->vcc_3v3_voltage;
  // vcc_1v8_voltage
  output->vcc_1v8_voltage = input->vcc_1v8_voltage;
  // vcc_1v2_voltage
  output->vcc_1v2_voltage = input->vcc_1v2_voltage;
  // nfc_5v_voltage
  output->nfc_5v_voltage = input->nfc_5v_voltage;
  // periph_5v_voltage
  output->periph_5v_voltage = input->periph_5v_voltage;
  // lcd_voltage
  output->lcd_voltage = input->lcd_voltage;
  // sys2_12v_voltage
  output->sys2_12v_voltage = input->sys2_12v_voltage;
  // soc0_5v_voltage
  output->soc0_5v_voltage = input->soc0_5v_voltage;
  // sys_5v_voltage
  output->sys_5v_voltage = input->sys_5v_voltage;
  // sys_12v_voltage
  output->sys_12v_voltage = input->sys_12v_voltage;
  // soc1_12v_voltage
  output->soc1_12v_voltage = input->soc1_12v_voltage;
  // ext_12v_voltage
  output->ext_12v_voltage = input->ext_12v_voltage;
  // ext_24v_voltage
  output->ext_24v_voltage = input->ext_24v_voltage;
  // arm_48v_voltage
  output->arm_48v_voltage = input->arm_48v_voltage;
  // leg_48v_voltage
  output->leg_48v_voltage = input->leg_48v_voltage;
  // soc0_5v_current
  output->soc0_5v_current = input->soc0_5v_current;
  // periph_5v_current
  output->periph_5v_current = input->periph_5v_current;
  // sys2_12v_current
  output->sys2_12v_current = input->sys2_12v_current;
  // sys_5v_current
  output->sys_5v_current = input->sys_5v_current;
  // sys_12v_current
  output->sys_12v_current = input->sys_12v_current;
  // soc1_12v_current
  output->soc1_12v_current = input->soc1_12v_current;
  // ext_12v_current
  output->ext_12v_current = input->ext_12v_current;
  // ext_24v_current
  output->ext_24v_current = input->ext_24v_current;
  // arm_48v_current
  output->arm_48v_current = input->arm_48v_current;
  // leg_48v_current
  output->leg_48v_current = input->leg_48v_current;
  // temp_48to12_orin_left
  output->temp_48to12_orin_left = input->temp_48to12_orin_left;
  // temp_48to12_orin_bottom
  output->temp_48to12_orin_bottom = input->temp_48to12_orin_bottom;
  // temp_12v_ext_mos
  output->temp_12v_ext_mos = input->temp_12v_ext_mos;
  // temp_12to5
  output->temp_12to5 = input->temp_12to5;
  // temp_emmc
  output->temp_emmc = input->temp_emmc;
  // temp_soc
  output->temp_soc = input->temp_soc;
  return true;
}

aimdk_msgs__msg__Pmu *
aimdk_msgs__msg__Pmu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Pmu * msg = (aimdk_msgs__msg__Pmu *)allocator.allocate(sizeof(aimdk_msgs__msg__Pmu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__Pmu));
  bool success = aimdk_msgs__msg__Pmu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__Pmu__destroy(aimdk_msgs__msg__Pmu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__Pmu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__Pmu__Sequence__init(aimdk_msgs__msg__Pmu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Pmu * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__Pmu *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__Pmu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__Pmu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__Pmu__fini(&data[i - 1]);
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
aimdk_msgs__msg__Pmu__Sequence__fini(aimdk_msgs__msg__Pmu__Sequence * array)
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
      aimdk_msgs__msg__Pmu__fini(&array->data[i]);
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

aimdk_msgs__msg__Pmu__Sequence *
aimdk_msgs__msg__Pmu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__Pmu__Sequence * array = (aimdk_msgs__msg__Pmu__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__Pmu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__Pmu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__Pmu__Sequence__destroy(aimdk_msgs__msg__Pmu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__Pmu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__Pmu__Sequence__are_equal(const aimdk_msgs__msg__Pmu__Sequence * lhs, const aimdk_msgs__msg__Pmu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__Pmu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__Pmu__Sequence__copy(
  const aimdk_msgs__msg__Pmu__Sequence * input,
  aimdk_msgs__msg__Pmu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__Pmu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__Pmu * data =
      (aimdk_msgs__msg__Pmu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__Pmu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__Pmu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__Pmu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
