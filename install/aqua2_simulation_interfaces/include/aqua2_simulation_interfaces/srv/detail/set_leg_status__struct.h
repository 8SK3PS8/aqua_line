// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_simulation_interfaces:srv/SetLegStatus.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__STRUCT_H_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetLegStatus in the package aqua2_simulation_interfaces.
typedef struct aqua2_simulation_interfaces__srv__SetLegStatus_Request
{
  int32_t index;
  int32_t status;
} aqua2_simulation_interfaces__srv__SetLegStatus_Request;

// Struct for a sequence of aqua2_simulation_interfaces__srv__SetLegStatus_Request.
typedef struct aqua2_simulation_interfaces__srv__SetLegStatus_Request__Sequence
{
  aqua2_simulation_interfaces__srv__SetLegStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_simulation_interfaces__srv__SetLegStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetLegStatus in the package aqua2_simulation_interfaces.
typedef struct aqua2_simulation_interfaces__srv__SetLegStatus_Response
{
  rosidl_runtime_c__String msg;
} aqua2_simulation_interfaces__srv__SetLegStatus_Response;

// Struct for a sequence of aqua2_simulation_interfaces__srv__SetLegStatus_Response.
typedef struct aqua2_simulation_interfaces__srv__SetLegStatus_Response__Sequence
{
  aqua2_simulation_interfaces__srv__SetLegStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_simulation_interfaces__srv__SetLegStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__STRUCT_H_
