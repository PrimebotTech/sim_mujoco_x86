// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
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
#include "aimdk_msgs/msg/detail/joint_protect_config__struct.h"
#include "aimdk_msgs/msg/detail/joint_protect_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__joint_protect_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("aimdk_msgs.msg._joint_protect_config.JointProtectConfig", full_classname_dest, 55) == 0);
  }
  aimdk_msgs__msg__JointProtectConfig * ros_message = _ros_message;
  {  // l1_mos_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_mos_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_mos_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l1_mos_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_mos_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_mos_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l1_current_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_current_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_current_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l1_current_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_current_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_current_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l1_voltage_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_voltage_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_voltage_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l1_voltage_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1_voltage_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l1_voltage_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_mos_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_mos_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_mos_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_mos_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_mos_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_mos_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_current_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_current_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_current_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_current_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_current_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_current_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_voltage_protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_voltage_protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_voltage_protect = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // l2_voltage_recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_voltage_recover");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_voltage_recover = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__joint_protect_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointProtectConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._joint_protect_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointProtectConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__JointProtectConfig * ros_message = (aimdk_msgs__msg__JointProtectConfig *)raw_ros_message;
  {  // l1_mos_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_mos_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_mos_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1_mos_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_mos_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_mos_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1_current_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_current_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_current_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1_current_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_current_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_current_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1_voltage_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_voltage_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_voltage_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1_voltage_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l1_voltage_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1_voltage_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_mos_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_mos_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_mos_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_mos_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_mos_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_mos_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_current_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_current_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_current_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_current_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_current_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_current_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_voltage_protect
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_voltage_protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_voltage_protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_voltage_recover
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->l2_voltage_recover);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_voltage_recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
