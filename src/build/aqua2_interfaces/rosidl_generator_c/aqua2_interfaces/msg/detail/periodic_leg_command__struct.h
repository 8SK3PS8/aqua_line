// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_H_

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

// Struct defined in msg/PeriodicLegCommand in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__PeriodicLegCommand
{
  std_msgs__msg__Header header;
  float amplitudes[6];
  float frequencies[6];
  float phase_offsets[6];
  float leg_offsets[6];
  float leg_velocities[6];
} aqua2_interfaces__msg__PeriodicLegCommand;

// Struct for a sequence of aqua2_interfaces__msg__PeriodicLegCommand.
typedef struct aqua2_interfaces__msg__PeriodicLegCommand__Sequence
{
  aqua2_interfaces__msg__PeriodicLegCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__PeriodicLegCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_H_
