// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:srv/SetNamedFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__STRUCT_H_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetNamedFloat in the package aqua2_interfaces.
typedef struct aqua2_interfaces__srv__SetNamedFloat_Request
{
  rosidl_runtime_c__String name;
  float value;
} aqua2_interfaces__srv__SetNamedFloat_Request;

// Struct for a sequence of aqua2_interfaces__srv__SetNamedFloat_Request.
typedef struct aqua2_interfaces__srv__SetNamedFloat_Request__Sequence
{
  aqua2_interfaces__srv__SetNamedFloat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__srv__SetNamedFloat_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetNamedFloat in the package aqua2_interfaces.
typedef struct aqua2_interfaces__srv__SetNamedFloat_Response
{
  uint8_t structure_needs_at_least_one_member;
} aqua2_interfaces__srv__SetNamedFloat_Response;

// Struct for a sequence of aqua2_interfaces__srv__SetNamedFloat_Response.
typedef struct aqua2_interfaces__srv__SetNamedFloat_Response__Sequence
{
  aqua2_interfaces__srv__SetNamedFloat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__srv__SetNamedFloat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__STRUCT_H_