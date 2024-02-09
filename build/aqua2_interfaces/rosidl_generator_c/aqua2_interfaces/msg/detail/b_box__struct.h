// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/BBox.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_H_

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

// Struct defined in msg/BBox in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__BBox
{
  std_msgs__msg__Header header;
  bool valid;
  float top_left_x;
  float top_left_y;
  float width;
  float height;
  int32_t image_width;
  int32_t image_height;
} aqua2_interfaces__msg__BBox;

// Struct for a sequence of aqua2_interfaces__msg__BBox.
typedef struct aqua2_interfaces__msg__BBox__Sequence
{
  aqua2_interfaces__msg__BBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__BBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_H_
