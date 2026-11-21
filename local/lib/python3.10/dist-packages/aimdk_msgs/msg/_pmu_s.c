// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/Pmu.idl
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
#include "aimdk_msgs/msg/detail/pmu__struct.h"
#include "aimdk_msgs/msg/detail/pmu__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool aimdk_msgs__msg__message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__message_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__pmu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("aimdk_msgs.msg._pmu.Pmu", full_classname_dest, 23) == 0);
  }
  aimdk_msgs__msg__Pmu * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__message_header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->protocol_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hardware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hardware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // orin_hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "orin_hardware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->orin_hardware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // status_word
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_word");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_word = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = PyLong_AsUnsignedLong(field);
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
  {  // periph_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "periph_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->periph_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lcd_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcd_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lcd_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys2_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys2_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys2_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // soc0_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc0_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc0_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
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
  {  // soc1_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc1_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc1_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
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
  {  // soc0_5v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc0_5v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc0_5v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // periph_5v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "periph_5v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->periph_5v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys2_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys2_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys2_12v_current = (float)PyFloat_AS_DOUBLE(field);
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
  {  // soc1_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc1_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->soc1_12v_current = (float)PyFloat_AS_DOUBLE(field);
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
  {  // temp_48to12_orin_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_48to12_orin_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_48to12_orin_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_48to12_orin_bottom
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_48to12_orin_bottom");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_48to12_orin_bottom = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_12v_ext_mos
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_12v_ext_mos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_12v_ext_mos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_12to5
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_12to5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_12to5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_emmc
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_emmc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_emmc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_soc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_soc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__pmu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pmu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._pmu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pmu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__Pmu * ros_message = (aimdk_msgs__msg__Pmu *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = aimdk_msgs__msg__message_header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protocol_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->protocol_version.data,
      strlen(ros_message->protocol_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hardware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hardware_version.data,
      strlen(ros_message->hardware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->software_version.data,
      strlen(ros_message->software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orin_hardware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->orin_hardware_version.data,
      strlen(ros_message->orin_hardware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orin_hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_word
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_word);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_word", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
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
  {  // periph_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->periph_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "periph_5v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcd_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lcd_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcd_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys2_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys2_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys2_12v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // soc0_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc0_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc0_5v_voltage", field);
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
  {  // soc1_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc1_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc1_12v_voltage", field);
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
  {  // soc0_5v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc0_5v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc0_5v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // periph_5v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->periph_5v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "periph_5v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys2_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys2_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys2_12v_current", field);
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
  {  // soc1_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->soc1_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc1_12v_current", field);
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
  {  // temp_48to12_orin_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_48to12_orin_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_48to12_orin_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_48to12_orin_bottom
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_48to12_orin_bottom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_48to12_orin_bottom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_12v_ext_mos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_12v_ext_mos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_12v_ext_mos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_12to5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_12to5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_12to5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_emmc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_emmc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_emmc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_soc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
