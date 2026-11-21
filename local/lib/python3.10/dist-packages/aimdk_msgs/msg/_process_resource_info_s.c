// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
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
#include "aimdk_msgs/msg/detail/process_resource_info__struct.h"
#include "aimdk_msgs/msg/detail/process_resource_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "aimdk_msgs/msg/detail/thread_resource_info__functions.h"
// end nested array functions include
bool aimdk_msgs__msg__thread_resource_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__thread_resource_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__process_resource_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("aimdk_msgs.msg._process_resource_info.ProcessResourceInfo", full_classname_dest, 57) == 0);
  }
  aimdk_msgs__msg__ProcessResourceInfo * ros_message = _ros_message;
  {  // process_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->process_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // process_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->process_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // process_mem_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_mem_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->process_mem_usage = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // process_mem_usage_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_mem_usage_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_mem_usage_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // process_cpu_usage_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_cpu_usage_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_cpu_usage_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thread_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "thread_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->thread_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // threads
    PyObject * field = PyObject_GetAttrString(_pymsg, "threads");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'threads'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(&(ros_message->threads), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create aimdk_msgs__msg__ThreadResourceInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aimdk_msgs__msg__ThreadResourceInfo * dest = ros_message->threads.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aimdk_msgs__msg__thread_resource_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__process_resource_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProcessResourceInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._process_resource_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProcessResourceInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__ProcessResourceInfo * ros_message = (aimdk_msgs__msg__ProcessResourceInfo *)raw_ros_message;
  {  // process_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->process_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->process_name.data,
      strlen(ros_message->process_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_mem_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->process_mem_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_mem_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_mem_usage_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_mem_usage_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_mem_usage_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_cpu_usage_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_cpu_usage_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_cpu_usage_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thread_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->thread_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thread_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // threads
    PyObject * field = NULL;
    size_t size = ros_message->threads.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aimdk_msgs__msg__ThreadResourceInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->threads.data[i]);
      PyObject * pyitem = aimdk_msgs__msg__thread_resource_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "threads", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
