// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LegState in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__LegState
{
  float leg_positions[6];
  float leg_targets[6];
  float leg_speeds[6];
} aqua2_interfaces__msg__LegState;

// Struct for a sequence of aqua2_interfaces__msg__LegState.
typedef struct aqua2_interfaces__msg__LegState__Sequence
{
  aqua2_interfaces__msg__LegState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__LegState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_H_
