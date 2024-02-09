// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_simulation_interfaces:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__STRUCT_H_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetFloat in the package aqua2_simulation_interfaces.
typedef struct aqua2_simulation_interfaces__srv__GetFloat_Request
{
  uint8_t structure_needs_at_least_one_member;
} aqua2_simulation_interfaces__srv__GetFloat_Request;

// Struct for a sequence of aqua2_simulation_interfaces__srv__GetFloat_Request.
typedef struct aqua2_simulation_interfaces__srv__GetFloat_Request__Sequence
{
  aqua2_simulation_interfaces__srv__GetFloat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_simulation_interfaces__srv__GetFloat_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetFloat in the package aqua2_simulation_interfaces.
typedef struct aqua2_simulation_interfaces__srv__GetFloat_Response
{
  float value;
} aqua2_simulation_interfaces__srv__GetFloat_Response;

// Struct for a sequence of aqua2_simulation_interfaces__srv__GetFloat_Response.
typedef struct aqua2_simulation_interfaces__srv__GetFloat_Response__Sequence
{
  aqua2_simulation_interfaces__srv__GetFloat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_simulation_interfaces__srv__GetFloat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__STRUCT_H_
