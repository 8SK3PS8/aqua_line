// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/AutopilotCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AutopilotCommand in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__AutopilotCommand
{
  float surge;
  float heave;
  float target_roll;
  float target_pitch;
  float target_yaw;
  float target_depth;
} aqua2_interfaces__msg__AutopilotCommand;

// Struct for a sequence of aqua2_interfaces__msg__AutopilotCommand.
typedef struct aqua2_interfaces__msg__AutopilotCommand__Sequence
{
  aqua2_interfaces__msg__AutopilotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__AutopilotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_H_
