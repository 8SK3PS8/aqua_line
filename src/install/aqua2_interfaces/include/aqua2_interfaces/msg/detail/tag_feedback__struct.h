// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_H_
#define AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tag_corners_px'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TagFeedback in the package aqua2_interfaces.
typedef struct aqua2_interfaces__msg__TagFeedback
{
  uint64_t im_width_px;
  uint64_t im_height_px;
  uint64_t num_tags;
  rosidl_runtime_c__uint64__Sequence tag_corners_px;
  rosidl_runtime_c__String msg;
} aqua2_interfaces__msg__TagFeedback;

// Struct for a sequence of aqua2_interfaces__msg__TagFeedback.
typedef struct aqua2_interfaces__msg__TagFeedback__Sequence
{
  aqua2_interfaces__msg__TagFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aqua2_interfaces__msg__TagFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_H_
