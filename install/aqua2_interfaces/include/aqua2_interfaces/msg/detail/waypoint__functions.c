// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aqua2_interfaces__msg__Waypoint__init(aqua2_interfaces__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  // target_depth
  return true;
}

void
aqua2_interfaces__msg__Waypoint__fini(aqua2_interfaces__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
  // target_depth
}

bool
aqua2_interfaces__msg__Waypoint__are_equal(const aqua2_interfaces__msg__Waypoint * lhs, const aqua2_interfaces__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_depth
  if (lhs->target_depth != rhs->target_depth) {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__msg__Waypoint__copy(
  const aqua2_interfaces__msg__Waypoint * input,
  aqua2_interfaces__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_depth
  output->target_depth = input->target_depth;
  return true;
}

aqua2_interfaces__msg__Waypoint *
aqua2_interfaces__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Waypoint * msg = (aqua2_interfaces__msg__Waypoint *)allocator.allocate(sizeof(aqua2_interfaces__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__Waypoint));
  bool success = aqua2_interfaces__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__Waypoint__destroy(aqua2_interfaces__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__Waypoint__Sequence__init(aqua2_interfaces__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Waypoint * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__Waypoint *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__Waypoint__fini(&data[i - 1]);
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
aqua2_interfaces__msg__Waypoint__Sequence__fini(aqua2_interfaces__msg__Waypoint__Sequence * array)
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
      aqua2_interfaces__msg__Waypoint__fini(&array->data[i]);
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

aqua2_interfaces__msg__Waypoint__Sequence *
aqua2_interfaces__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Waypoint__Sequence * array = (aqua2_interfaces__msg__Waypoint__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__Waypoint__Sequence__destroy(aqua2_interfaces__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__Waypoint__Sequence__are_equal(const aqua2_interfaces__msg__Waypoint__Sequence * lhs, const aqua2_interfaces__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__Waypoint__Sequence__copy(
  const aqua2_interfaces__msg__Waypoint__Sequence * input,
  aqua2_interfaces__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__Waypoint);
    aqua2_interfaces__msg__Waypoint * data =
      (aqua2_interfaces__msg__Waypoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__Waypoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__Waypoint__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
