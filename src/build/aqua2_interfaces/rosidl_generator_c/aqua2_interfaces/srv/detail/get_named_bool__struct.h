// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:srv/GetNamedBool.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__STRUCT_H_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__STRUCT_H_

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

// Struct defined in srv/GetNamedBool in the package aqua2_interfaces.
typedef struct aqua2_interfaces__srv__GetNamedBool_Request
{
  rosidl_runtime_c__String name;
} aqua2_interfaces__srv__GetNamedBool_Request;

// Struct for a sequence of aqua2_interfaces__srv__GetNamedBool_Request.
typedef struct aqua2_interfaces__srv__GetNamedBool_Request__Sequence
{
  aqua2_interfaces__srv__GetNamedBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__srv__GetNamedBool_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetNamedBool in the package aqua2_interfaces.
typedef struct aqua2_interfaces__srv__GetNamedBool_Response
{
  bool value;
} aqua2_interfaces__srv__GetNamedBool_Response;

// Struct for a sequence of aqua2_interfaces__srv__GetNamedBool_Response.
typedef struct aqua2_interfaces__srv__GetNamedBool_Response__Sequence
{
  aqua2_interfaces__srv__GetNamedBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__srv__GetNamedBool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__STRUCT_H_
