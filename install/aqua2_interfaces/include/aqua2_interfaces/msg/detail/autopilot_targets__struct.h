// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AutopilotTargets in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__AutopilotTargets
{
  float depth_target;
  float roll_target_angle;
  float pitch_target_angle;
  float yaw_target_angle;
} aqua2_interfaces__msg__AutopilotTargets;

// Struct for a sequence of aqua2_interfaces__msg__AutopilotTargets.
typedef struct aqua2_interfaces__msg__AutopilotTargets__Sequence
{
  aqua2_interfaces__msg__AutopilotTargets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__AutopilotTargets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_H_
