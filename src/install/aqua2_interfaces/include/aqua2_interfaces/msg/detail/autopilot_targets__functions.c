// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_targets__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aqua2_interfaces__msg__AutopilotTargets__init(aqua2_interfaces__msg__AutopilotTargets * msg)
{
  if (!msg) {
    return false;
  }
  // depth_target
  // roll_target_angle
  // pitch_target_angle
  // yaw_target_angle
  return true;
}

void
aqua2_interfaces__msg__AutopilotTargets__fini(aqua2_interfaces__msg__AutopilotTargets * msg)
{
  if (!msg) {
    return;
  }
  // depth_target
  // roll_target_angle
  // pitch_target_angle
  // yaw_target_angle
}

bool
aqua2_interfaces__msg__AutopilotTargets__are_equal(const aqua2_interfaces__msg__AutopilotTargets * lhs, const aqua2_interfaces__msg__AutopilotTargets * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // depth_target
  if (lhs->depth_target != rhs->depth_target) {
    return false;
  }
  // roll_target_angle
  if (lhs->roll_target_angle != rhs->roll_target_angle) {
    return false;
  }
  // pitch_target_angle
  if (lhs->pitch_target_angle != rhs->pitch_target_angle) {
    return false;
  }
  // yaw_target_angle
  if (lhs->yaw_target_angle != rhs->yaw_target_angle) {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__msg__AutopilotTargets__copy(
  const aqua2_interfaces__msg__AutopilotTargets * input,
  aqua2_interfaces__msg__AutopilotTargets * output)
{
  if (!input || !output) {
    return false;
  }
  // depth_target
  output->depth_target = input->depth_target;
  // roll_target_angle
  output->roll_target_angle = input->roll_target_angle;
  // pitch_target_angle
  output->pitch_target_angle = input->pitch_target_angle;
  // yaw_target_angle
  output->yaw_target_angle = input->yaw_target_angle;
  return true;
}

aqua2_interfaces__msg__AutopilotTargets *
aqua2_interfaces__msg__AutopilotTargets__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotTargets * msg = (aqua2_interfaces__msg__AutopilotTargets *)allocator.allocate(sizeof(aqua2_interfaces__msg__AutopilotTargets), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__AutopilotTargets));
  bool success = aqua2_interfaces__msg__AutopilotTargets__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__AutopilotTargets__destroy(aqua2_interfaces__msg__AutopilotTargets * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__AutopilotTargets__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__AutopilotTargets__Sequence__init(aqua2_interfaces__msg__AutopilotTargets__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotTargets * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__AutopilotTargets *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__AutopilotTargets), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__AutopilotTargets__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__AutopilotTargets__fini(&data[i - 1]);
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
aqua2_interfaces__msg__AutopilotTargets__Sequence__fini(aqua2_interfaces__msg__AutopilotTargets__Sequence * array)
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
      aqua2_interfaces__msg__AutopilotTargets__fini(&array->data[i]);
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

aqua2_interfaces__msg__AutopilotTargets__Sequence *
aqua2_interfaces__msg__AutopilotTargets__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotTargets__Sequence * array = (aqua2_interfaces__msg__AutopilotTargets__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__AutopilotTargets__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__AutopilotTargets__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__AutopilotTargets__Sequence__destroy(aqua2_interfaces__msg__AutopilotTargets__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__AutopilotTargets__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__AutopilotTargets__Sequence__are_equal(const aqua2_interfaces__msg__AutopilotTargets__Sequence * lhs, const aqua2_interfaces__msg__AutopilotTargets__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__AutopilotTargets__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__AutopilotTargets__Sequence__copy(
  const aqua2_interfaces__msg__AutopilotTargets__Sequence * input,
  aqua2_interfaces__msg__AutopilotTargets__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__AutopilotTargets);
    aqua2_interfaces__msg__AutopilotTargets * data =
      (aqua2_interfaces__msg__AutopilotTargets *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__AutopilotTargets__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__AutopilotTargets__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__AutopilotTargets__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
