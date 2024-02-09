// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/BBox.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/b_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
aqua2_interfaces__msg__BBox__init(aqua2_interfaces__msg__BBox * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aqua2_interfaces__msg__BBox__fini(msg);
    return false;
  }
  // valid
  // top_left_x
  // top_left_y
  // width
  // height
  // image_width
  // image_height
  return true;
}

void
aqua2_interfaces__msg__BBox__fini(aqua2_interfaces__msg__BBox * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // valid
  // top_left_x
  // top_left_y
  // width
  // height
  // image_width
  // image_height
}

bool
aqua2_interfaces__msg__BBox__are_equal(const aqua2_interfaces__msg__BBox * lhs, const aqua2_interfaces__msg__BBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // top_left_x
  if (lhs->top_left_x != rhs->top_left_x) {
    return false;
  }
  // top_left_y
  if (lhs->top_left_y != rhs->top_left_y) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__msg__BBox__copy(
  const aqua2_interfaces__msg__BBox * input,
  aqua2_interfaces__msg__BBox * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // valid
  output->valid = input->valid;
  // top_left_x
  output->top_left_x = input->top_left_x;
  // top_left_y
  output->top_left_y = input->top_left_y;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  return true;
}

aqua2_interfaces__msg__BBox *
aqua2_interfaces__msg__BBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__BBox * msg = (aqua2_interfaces__msg__BBox *)allocator.allocate(sizeof(aqua2_interfaces__msg__BBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__BBox));
  bool success = aqua2_interfaces__msg__BBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__BBox__destroy(aqua2_interfaces__msg__BBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__BBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__BBox__Sequence__init(aqua2_interfaces__msg__BBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__BBox * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__BBox *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__BBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__BBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__BBox__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aqua2_interfaces__msg__BBox__Sequence__fini(aqua2_interfaces__msg__BBox__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aqua2_interfaces__msg__BBox__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aqua2_interfaces__msg__BBox__Sequence *
aqua2_interfaces__msg__BBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__BBox__Sequence * array = (aqua2_interfaces__msg__BBox__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__BBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__BBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__BBox__Sequence__destroy(aqua2_interfaces__msg__BBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__BBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__BBox__Sequence__are_equal(const aqua2_interfaces__msg__BBox__Sequence * lhs, const aqua2_interfaces__msg__BBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__BBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__BBox__Sequence__copy(
  const aqua2_interfaces__msg__BBox__Sequence * input,
  aqua2_interfaces__msg__BBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__BBox);
    aqua2_interfaces__msg__BBox * data =
      (aqua2_interfaces__msg__BBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__BBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__BBox__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aqua2_interfaces__msg__BBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
