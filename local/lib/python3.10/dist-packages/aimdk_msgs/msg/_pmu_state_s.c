// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/detail/pmu_state__struct.h"
#include "aimdk_msgs/msg/detail/pmu_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__pmu_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("aimdk_msgs.msg._pmu_state.PmuState", full_classname_dest, 34) == 0);
  }
  aimdk_msgs__msg__PmuState * ros_message = _ros_message;
  {  // pmu_protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "pmu_protocol_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pmu_protocol_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pmu_hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "pmu_hardware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pmu_hardware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pmu_software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "pmu_software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pmu_software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // power_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pmu_bool_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "pmu_bool_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pmu_bool_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vcc_3v3_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcc_3v3_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcc_3v3_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcc_1v8_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcc_1v8_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcc_1v8_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcc_1v2_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcc_1v2_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcc_1v2_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nfc_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "nfc_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nfc_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // soc_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orin_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "orin_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orin_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_24v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_24v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext_24v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_48v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_48v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_48v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_48v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_48v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_48v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // soc_5v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc_5v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc_5v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys_5v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys_5v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys_5v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys_12v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orin_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "orin_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orin_12v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext_12v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext_24v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_24v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext_24v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_48v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_48v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_48v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_48v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_48v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_48v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bms_manufacturer
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_manufacturer");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bms_manufacturer, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bms_serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_serial_number");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bms_serial_number, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bms_protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_protocol_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bms_protocol_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bms_hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_hardware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bms_hardware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bms_software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bms_software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bms_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_balance_line_resistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_balance_line_resistance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_balance_line_resistance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_voltage = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_current = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bms_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_power = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bms_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_temperature = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_remaining_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_remaining_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_remaining_capacity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_remaining_capacity_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_remaining_capacity_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_remaining_capacity_percentage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_cycle_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_cycle_total_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_cycle_total_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_cycle_total_capacity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__pmu_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PmuState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._pmu_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PmuState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__PmuState * ros_message = (aimdk_msgs__msg__PmuState *)raw_ros_message;
  {  // pmu_protocol_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pmu_protocol_version.data,
      strlen(ros_message->pmu_protocol_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pmu_protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pmu_hardware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pmu_hardware_version.data,
      strlen(ros_message->pmu_hardware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pmu_hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pmu_software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pmu_software_version.data,
      strlen(ros_message->pmu_software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pmu_software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pmu_bool_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pmu_bool_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pmu_bool_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcc_3v3_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcc_3v3_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcc_3v3_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcc_1v8_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcc_1v8_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcc_1v8_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcc_1v2_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcc_1v2_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcc_1v2_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nfc_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nfc_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nfc_5v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // soc_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc_5v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys_5v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys_12v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orin_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orin_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orin_12v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_12v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_24v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext_24v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_24v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_48v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_48v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_48v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_48v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_48v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_48v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // soc_5v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc_5v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc_5v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys_5v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys_5v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys_5v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys_12v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orin_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orin_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orin_12v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_12v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_24v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext_24v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_24v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_48v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_48v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_48v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_48v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_48v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_48v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_manufacturer
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bms_manufacturer.data,
      strlen(ros_message->bms_manufacturer.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_manufacturer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_serial_number
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bms_serial_number.data,
      strlen(ros_message->bms_serial_number.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_protocol_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bms_protocol_version.data,
      strlen(ros_message->bms_protocol_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_hardware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bms_hardware_version.data,
      strlen(ros_message->bms_hardware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bms_software_version.data,
      strlen(ros_message->bms_software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_balance_line_resistance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_balance_line_resistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_balance_line_resistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bms_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_power
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bms_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_remaining_capacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_remaining_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_remaining_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_remaining_capacity_percentage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_remaining_capacity_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_remaining_capacity_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_cycle_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_cycle_total_capacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_cycle_total_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_cycle_total_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
