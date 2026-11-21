// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/JointMitParams.idl
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
#include "aimdk_msgs/msg/detail/joint_mit_params__struct.h"
#include "aimdk_msgs/msg/detail/joint_mit_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__joint_mit_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("aimdk_msgs.msg._joint_mit_params.JointMitParams", full_classname_dest, 47) == 0);
  }
  aimdk_msgs__msg__JointMitParams * ros_message = _ros_message;
  {  // pos_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_max = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_min = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_max = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_min = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tor_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "tor_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tor_max = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tor_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "tor_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tor_min = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kp_max = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kp_min = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kd_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kd_max = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kd_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kd_min = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__joint_mit_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointMitParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._joint_mit_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointMitParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__JointMitParams * ros_message = (aimdk_msgs__msg__JointMitParams *)raw_ros_message;
  {  // pos_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tor_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tor_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tor_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tor_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tor_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tor_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kd_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kd_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
