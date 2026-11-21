// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/Adu.idl
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
#include "aimdk_msgs/msg/detail/adu__struct.h"
#include "aimdk_msgs/msg/detail/adu__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool aimdk_msgs__msg__message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__message_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__adu__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("aimdk_msgs.msg._adu.Adu", full_classname_dest, 23) == 0);
  }
  aimdk_msgs__msg__Adu * ros_message = _ros_message;
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
  {  // status_word
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_word");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_word = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // board_12v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_12v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_12v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_5v_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_5v_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_5v_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_3v3_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_3v3_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_3v3_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_1v2_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_1v2_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_1v2_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_1v8_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_1v8_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_1v8_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_3v8_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_3v8_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_3v8_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_12v_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_12v_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_12v_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_temperature_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_temperature_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_temperature_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_hardware_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_hardware_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->board_hardware_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ntc_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "ntc_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ntc_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fan1_target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan1_target_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan1_target_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan1_feedback_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan1_feedback_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan1_feedback_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan2_target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan2_target_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan2_target_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan2_feedback_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan2_feedback_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan2_feedback_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__adu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Adu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._adu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Adu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__Adu * ros_message = (aimdk_msgs__msg__Adu *)raw_ros_message;
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
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_12v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_12v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_12v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_5v_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_5v_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_5v_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_3v3_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_3v3_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_3v3_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_1v2_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_1v2_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_1v2_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_1v8_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_1v8_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_1v8_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_3v8_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_3v8_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_3v8_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_12v_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_12v_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_12v_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_temperature_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_temperature_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_temperature_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_hardware_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->board_hardware_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_hardware_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ntc_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ntc_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ntc_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan1_target_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan1_target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan1_target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan1_feedback_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan1_feedback_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan1_feedback_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan2_target_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan2_target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan2_target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan2_feedback_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan2_feedback_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan2_feedback_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
