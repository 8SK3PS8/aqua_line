// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aqua2_interfaces__msg__AutopilotPIDComponents__init(aqua2_interfaces__msg__AutopilotPIDComponents * msg)
{
  if (!msg) {
    return false;
  }
  // roll_kp_component
  // roll_ki_component
  // roll_kd_component
  // pitch_kp_component
  // pitch_ki_component
  // pitch_kd_component
  // yaw_kp_component
  // yaw_ki_component
  // yaw_kd_component
  return true;
}

void
aqua2_interfaces__msg__AutopilotPIDComponents__fini(aqua2_interfaces__msg__AutopilotPIDComponents * msg)
{
  if (!msg) {
    return;
  }
  // roll_kp_component
  // roll_ki_component
  // roll_kd_component
  // pitch_kp_component
  // pitch_ki_component
  // pitch_kd_component
  // yaw_kp_component
  // yaw_ki_component
  // yaw_kd_component
}

bool
aqua2_interfaces__msg__AutopilotPIDComponents__are_equal(const aqua2_interfaces__msg__AutopilotPIDComponents * lhs, const aqua2_interfaces__msg__AutopilotPIDComponents * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll_kp_component
  if (lhs->roll_kp_component != rhs->roll_kp_component) {
    return false;
  }
  // roll_ki_component
  if (lhs->roll_ki_component != rhs->roll_ki_component) {
    return false;
  }
  // roll_kd_component
  if (lhs->roll_kd_component != rhs->roll_kd_component) {
    return false;
  }
  // pitch_kp_component
  if (lhs->pitch_kp_component != rhs->pitch_kp_component) {
    return false;
  }
  // pitch_ki_component
  if (lhs->pitch_ki_component != rhs->pitch_ki_component) {
    return false;
  }
  // pitch_kd_component
  if (lhs->pitch_kd_component != rhs->pitch_kd_component) {
    return false;
  }
  // yaw_kp_component
  if (lhs->yaw_kp_component != rhs->yaw_kp_component) {
    return false;
  }
  // yaw_ki_component
  if (lhs->yaw_ki_component != rhs->yaw_ki_component) {
    return false;
  }
  // yaw_kd_component
  if (lhs->yaw_kd_component != rhs->yaw_kd_component) {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__msg__AutopilotPIDComponents__copy(
  const aqua2_interfaces__msg__AutopilotPIDComponents * input,
  aqua2_interfaces__msg__AutopilotPIDComponents * output)
{
  if (!input || !output) {
    return false;
  }
  // roll_kp_component
  output->roll_kp_component = input->roll_kp_component;
  // roll_ki_component
  output->roll_ki_component = input->roll_ki_component;
  // roll_kd_component
  output->roll_kd_component = input->roll_kd_component;
  // pitch_kp_component
  output->pitch_kp_component = input->pitch_kp_component;
  // pitch_ki_component
  output->pitch_ki_component = input->pitch_ki_component;
  // pitch_kd_component
  output->pitch_kd_component = input->pitch_kd_component;
  // yaw_kp_component
  output->yaw_kp_component = input->yaw_kp_component;
  // yaw_ki_component
  output->yaw_ki_component = input->yaw_ki_component;
  // yaw_kd_component
  output->yaw_kd_component = input->yaw_kd_component;
  return true;
}

aqua2_interfaces__msg__AutopilotPIDComponents *
aqua2_interfaces__msg__AutopilotPIDComponents__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotPIDComponents * msg = (aqua2_interfaces__msg__AutopilotPIDComponents *)allocator.allocate(sizeof(aqua2_interfaces__msg__AutopilotPIDComponents), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__AutopilotPIDComponents));
  bool success = aqua2_interfaces__msg__AutopilotPIDComponents__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__AutopilotPIDComponents__destroy(aqua2_interfaces__msg__AutopilotPIDComponents * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__AutopilotPIDComponents__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__init(aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotPIDComponents * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__AutopilotPIDComponents *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__AutopilotPIDComponents), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__AutopilotPIDComponents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__AutopilotPIDComponents__fini(&data[i - 1]);
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
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__fini(aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * array)
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
      aqua2_interfaces__msg__AutopilotPIDComponents__fini(&array->data[i]);
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

aqua2_interfaces__msg__AutopilotPIDComponents__Sequence *
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * array = (aqua2_interfaces__msg__AutopilotPIDComponents__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__AutopilotPIDComponents__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__destroy(aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__are_equal(const aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * lhs, const aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__AutopilotPIDComponents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__AutopilotPIDComponents__Sequence__copy(
  const aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * input,
  aqua2_interfaces__msg__AutopilotPIDComponents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__AutopilotPIDComponents);
    aqua2_interfaces__msg__AutopilotPIDComponents * data =
      (aqua2_interfaces__msg__AutopilotPIDComponents *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__AutopilotPIDComponents__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__AutopilotPIDComponents__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__AutopilotPIDComponents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
