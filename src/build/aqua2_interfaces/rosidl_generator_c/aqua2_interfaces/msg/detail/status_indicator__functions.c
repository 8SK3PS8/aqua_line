// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/status_indicator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
aqua2_interfaces__msg__StatusIndicator__init(aqua2_interfaces__msg__StatusIndicator * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aqua2_interfaces__msg__StatusIndicator__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    aqua2_interfaces__msg__StatusIndicator__fini(msg);
    return false;
  }
  // text_color
  // bg_color
  return true;
}

void
aqua2_interfaces__msg__StatusIndicator__fini(aqua2_interfaces__msg__StatusIndicator * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // text_color
  // bg_color
}

bool
aqua2_interfaces__msg__StatusIndicator__are_equal(const aqua2_interfaces__msg__StatusIndicator * lhs, const aqua2_interfaces__msg__StatusIndicator * rhs)
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
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // text_color
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->text_color[i] != rhs->text_color[i]) {
      return false;
    }
  }
  // bg_color
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->bg_color[i] != rhs->bg_color[i]) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__StatusIndicator__copy(
  const aqua2_interfaces__msg__StatusIndicator * input,
  aqua2_interfaces__msg__StatusIndicator * output)
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
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // text_color
  for (size_t i = 0; i < 3; ++i) {
    output->text_color[i] = input->text_color[i];
  }
  // bg_color
  for (size_t i = 0; i < 3; ++i) {
    output->bg_color[i] = input->bg_color[i];
  }
  return true;
}

aqua2_interfaces__msg__StatusIndicator *
aqua2_interfaces__msg__StatusIndicator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__StatusIndicator * msg = (aqua2_interfaces__msg__StatusIndicator *)allocator.allocate(sizeof(aqua2_interfaces__msg__StatusIndicator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__msg__StatusIndicator));
  bool success = aqua2_interfaces__msg__StatusIndicator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__msg__StatusIndicator__destroy(aqua2_interfaces__msg__StatusIndicator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__msg__StatusIndicator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__msg__StatusIndicator__Sequence__init(aqua2_interfaces__msg__StatusIndicator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__StatusIndicator * data = NULL;

  if (size) {
    data = (aqua2_interfaces__msg__StatusIndicator *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__msg__StatusIndicator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__msg__StatusIndicator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__msg__StatusIndicator__fini(&data[i - 1]);
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
aqua2_interfaces__msg__StatusIndicator__Sequence__fini(aqua2_interfaces__msg__StatusIndicator__Sequence * array)
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
      aqua2_interfaces__msg__StatusIndicator__fini(&array->data[i]);
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

aqua2_interfaces__msg__StatusIndicator__Sequence *
aqua2_interfaces__msg__StatusIndicator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__msg__StatusIndicator__Sequence * array = (aqua2_interfaces__msg__StatusIndicator__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__msg__StatusIndicator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__msg__StatusIndicator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__msg__StatusIndicator__Sequence__destroy(aqua2_interfaces__msg__StatusIndicator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__msg__StatusIndicator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__msg__StatusIndicator__Sequence__are_equal(const aqua2_interfaces__msg__StatusIndicator__Sequence * lhs, const aqua2_interfaces__msg__StatusIndicator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__msg__StatusIndicator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__msg__StatusIndicator__Sequence__copy(
  const aqua2_interfaces__msg__StatusIndicator__Sequence * input,
  aqua2_interfaces__msg__StatusIndicator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__msg__StatusIndicator);
    aqua2_interfaces__msg__StatusIndicator * data =
      (aqua2_interfaces__msg__StatusIndicator *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__msg__StatusIndicator__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__msg__StatusIndicator__fini(&data[i]);
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
    if (!aqua2_interfaces__msg__StatusIndicator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
