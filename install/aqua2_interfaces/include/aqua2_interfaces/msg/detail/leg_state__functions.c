// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/leg_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aqua2_interfaces__msg__LegState__init(aqua2_interfaces__msg__LegState * msg)
{
  if (!msg) {
    return false;
  }
  // leg_positions
  // leg_targets
  // leg_speeds
  return true;
}

void
aqua2_interfaces__msg__LegState__fini(aqua2_interfaces__msg__LegState * msg)
{
  if (!msg) {
    return;
  }
  // leg_positions
  // leg_targets
  // leg_speeds
}

bool
aqua2_interfaces__msg__LegState__are_equal(const aqua2_interfaces__msg__LegState * lhs, const aqua2_interfaces__msg__LegState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leg_positions
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->leg_positions[i] != rhs->leg_positions[i]) {
      return false;
    }
  }
  // leg_targets
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->leg_targets[i] != rhs->leg_targets[i]) {
      return false;
    }
  }
  // leg_speeds
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->leg_speeds[i] != rhs->leg_speeds[i]) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__LegState__copy(
  const aqua2_interfaces__msg__LegState * input,
  aqua2_interfaces__msg__LegState * output)
{
  if (!input || !output) {
    return false;
  }
  // leg_positions
  for (size_t i = 0; i < 6; ++i) {
    output->leg_positions[i] = input->leg_positions[i];
  }
  // leg_targets
  for (size_t i = 0; i < 6; ++i) {
    output->leg_targets[i] = input->leg_targets[i];
  }
  // leg_speeds
  for (size_t i = 0; i < 6; ++i) {
    output->leg_speeds[i] = input->leg_speeds[i];
  }
  return true;
}

aqua2_interfaces__msg__LegState *
aqua2_interfaces__msg__LegState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__LegState * msg = (aqua2_interfaces__msg__LegState *)allocator.allocate(sizeof(aqua2_interfaces__msg__LegState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__LegState));
  bool success = aqua2_interfaces__msg__LegState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__LegState__destroy(aqua2_interfaces__msg__LegState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__LegState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__LegState__Sequence__init(aqua2_interfaces__msg__LegState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__LegState * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__LegState *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__LegState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__LegState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__LegState__fini(&data[i - 1]);
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
aqua2_interfaces__msg__LegState__Sequence__fini(aqua2_interfaces__msg__LegState__Sequence * array)
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
      aqua2_interfaces__msg__LegState__fini(&array->data[i]);
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

aqua2_interfaces__msg__LegState__Sequence *
aqua2_interfaces__msg__LegState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__LegState__Sequence * array = (aqua2_interfaces__msg__LegState__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__LegState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__LegState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__LegState__Sequence__destroy(aqua2_interfaces__msg__LegState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__LegState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__LegState__Sequence__are_equal(const aqua2_interfaces__msg__LegState__Sequence * lhs, const aqua2_interfaces__msg__LegState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__LegState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__LegState__Sequence__copy(
  const aqua2_interfaces__msg__LegState__Sequence * input,
  aqua2_interfaces__msg__LegState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__LegState);
    aqua2_interfaces__msg__LegState * data =
      (aqua2_interfaces__msg__LegState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__LegState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__LegState__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__LegState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
