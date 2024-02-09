// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AutopilotPIDComponents in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__AutopilotPIDComponents
{
  float roll_kp_component;
  float roll_ki_component;
  float roll_kd_component;
  float pitch_kp_component;
  float pitch_ki_component;
  float pitch_kd_component;
  float yaw_kp_component;
  float yaw_ki_component;
  float yaw_kd_component;
} aqua2_interfaces__msg__AutopilotPIDComponents;

// Struct for a sequence of aqua2_interfaces__msg__AutopilotPIDComponents.
typedef struct aqua2_interfaces__msg__AutopilotPIDComponents__Sequence
{
  aqua2_interfaces__msg__AutopilotPIDComponents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__AutopilotPIDComponents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_H_
