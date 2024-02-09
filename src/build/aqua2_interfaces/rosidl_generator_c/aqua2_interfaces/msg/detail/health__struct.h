// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Health in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__Health
{
  std_msgs__msg__Header header;
  float voltage;
  float current;
  float avgvoltage;
  float avgcurrent;
  float avgpower;
  float battery_dod;
  float mdbtemp;
  float leg_temps[6];
} aqua2_interfaces__msg__Health;

// Struct for a sequence of aqua2_interfaces__msg__Health.
typedef struct aqua2_interfaces__msg__Health__Sequence
{
  aqua2_interfaces__msg__Health * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__Health__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_H_
