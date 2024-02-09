// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aqua2_interfaces:msg/Health.idl
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
#include "aqua2_interfaces/msg/detail/health__struct.h"
#include "aqua2_interfaces/msg/detail/health__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aqua2_interfaces__msg__health__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("aqua2_interfaces.msg._health.Health", full_classname_dest, 35) == 0);
  }
  aqua2_interfaces__msg__Health * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avgvoltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "avgvoltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avgvoltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avgcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "avgcurrent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avgcurrent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avgpower
    PyObject * field = PyObject_GetAttrString(_pymsg, "avgpower");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avgpower = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_dod
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_dod");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_dod = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mdbtemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mdbtemp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mdbtemp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_temps
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_temps");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->leg_temps;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aqua2_interfaces__msg__health__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Health */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aqua2_interfaces.msg._health");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Health");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aqua2_interfaces__msg__Health * ros_message = (aqua2_interfaces__msg__Health *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
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
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avgvoltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avgvoltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avgvoltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avgcurrent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avgcurrent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avgcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avgpower
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avgpower);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avgpower", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_dod
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_dod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_dod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mdbtemp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mdbtemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mdbtemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_temps
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "leg_temps");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->leg_temps[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
