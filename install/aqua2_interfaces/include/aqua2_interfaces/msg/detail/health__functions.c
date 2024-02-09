// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/health__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
aqua2_interfaces__msg__Health__init(aqua2_interfaces__msg__Health * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aqua2_interfaces__msg__Health__fini(msg);
    return false;
  }
  // voltage
  // current
  // avgvoltage
  // avgcurrent
  // avgpower
  // battery_dod
  // mdbtemp
  // leg_temps
  return true;
}

void
aqua2_interfaces__msg__Health__fini(aqua2_interfaces__msg__Health * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // voltage
  // current
  // avgvoltage
  // avgcurrent
  // avgpower
  // battery_dod
  // mdbtemp
  // leg_temps
}

bool
aqua2_interfaces__msg__Health__are_equal(const aqua2_interfaces__msg__Health * lhs, const aqua2_interfaces__msg__Health * rhs)
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
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // avgvoltage
  if (lhs->avgvoltage != rhs->avgvoltage) {
    return false;
  }
  // avgcurrent
  if (lhs->avgcurrent != rhs->avgcurrent) {
    return false;
  }
  // avgpower
  if (lhs->avgpower != rhs->avgpower) {
    return false;
  }
  // battery_dod
  if (lhs->battery_dod != rhs->battery_dod) {
    return false;
  }
  // mdbtemp
  if (lhs->mdbtemp != rhs->mdbtemp) {
    return false;
  }
  // leg_temps
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->leg_temps[i] != rhs->leg_temps[i]) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__Health__copy(
  const aqua2_interfaces__msg__Health * input,
  aqua2_interfaces__msg__Health * output)
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
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // avgvoltage
  output->avgvoltage = input->avgvoltage;
  // avgcurrent
  output->avgcurrent = input->avgcurrent;
  // avgpower
  output->avgpower = input->avgpower;
  // battery_dod
  output->battery_dod = input->battery_dod;
  // mdbtemp
  output->mdbtemp = input->mdbtemp;
  // leg_temps
  for (size_t i = 0; i < 6; ++i) {
    output->leg_temps[i] = input->leg_temps[i];
  }
  return true;
}

aqua2_interfaces__msg__Health *
aqua2_interfaces__msg__Health__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Health * msg = (aqua2_interfaces__msg__Health *)allocator.allocate(sizeof(aqua2_interfaces__msg__Health), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__Health));
  bool success = aqua2_interfaces__msg__Health__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__Health__destroy(aqua2_interfaces__msg__Health * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__Health__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__Health__Sequence__init(aqua2_interfaces__msg__Health__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Health * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__Health *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__Health), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__Health__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__Health__fini(&data[i - 1]);
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
aqua2_interfaces__msg__Health__Sequence__fini(aqua2_interfaces__msg__Health__Sequence * array)
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
      aqua2_interfaces__msg__Health__fini(&array->data[i]);
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

aqua2_interfaces__msg__Health__Sequence *
aqua2_interfaces__msg__Health__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__Health__Sequence * array = (aqua2_interfaces__msg__Health__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__Health__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__Health__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__Health__Sequence__destroy(aqua2_interfaces__msg__Health__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__Health__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__Health__Sequence__are_equal(const aqua2_interfaces__msg__Health__Sequence * lhs, const aqua2_interfaces__msg__Health__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__Health__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__Health__Sequence__copy(
  const aqua2_interfaces__msg__Health__Sequence * input,
  aqua2_interfaces__msg__Health__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__Health);
    aqua2_interfaces__msg__Health * data =
      (aqua2_interfaces__msg__Health *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__Health__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__Health__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__Health__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
