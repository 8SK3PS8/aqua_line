// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_H_

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
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StatusIndicator in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__StatusIndicator
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String text;
  float text_color[3];
  float bg_color[3];
} aqua2_interfaces__msg__StatusIndicator;

// Struct for a sequence of aqua2_interfaces__msg__StatusIndicator.
typedef struct aqua2_interfaces__msg__StatusIndicator__Sequence
{
  aqua2_interfaces__msg__StatusIndicator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__StatusIndicator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_H_
