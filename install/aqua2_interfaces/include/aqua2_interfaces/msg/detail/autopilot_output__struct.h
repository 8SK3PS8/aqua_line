// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/AutopilotOutput.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AutopilotOutput in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__AutopilotOutput
{
  float speed;
  float heave;
  float roll;
  float pitch;
  float yaw;
} aqua2_interfaces__msg__AutopilotOutput;

// Struct for a sequence of aqua2_interfaces__msg__AutopilotOutput.
typedef struct aqua2_interfaces__msg__AutopilotOutput__Sequence
{
  aqua2_interfaces__msg__AutopilotOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__AutopilotOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__STRUCT_H_
