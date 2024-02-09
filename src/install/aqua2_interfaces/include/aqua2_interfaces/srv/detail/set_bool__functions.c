// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aqua2_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/srv/detail/set_bool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
aqua2_interfaces__srv__SetBool_Request__init(aqua2_interfaces__srv__SetBool_Request * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
aqua2_interfaces__srv__SetBool_Request__fini(aqua2_interfaces__srv__SetBool_Request * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
aqua2_interfaces__srv__SetBool_Request__are_equal(const aqua2_interfaces__srv__SetBool_Request * lhs, const aqua2_interfaces__srv__SetBool_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__srv__SetBool_Request__copy(
  const aqua2_interfaces__srv__SetBool_Request * input,
  aqua2_interfaces__srv__SetBool_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

aqua2_interfaces__srv__SetBool_Request *
aqua2_interfaces__srv__SetBool_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Request * msg = (aqua2_interfaces__srv__SetBool_Request *)allocator.allocate(sizeof(aqua2_interfaces__srv__SetBool_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__srv__SetBool_Request));
  bool success = aqua2_interfaces__srv__SetBool_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__srv__SetBool_Request__destroy(aqua2_interfaces__srv__SetBool_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__srv__SetBool_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__srv__SetBool_Request__Sequence__init(aqua2_interfaces__srv__SetBool_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Request * data = NULL;

  if (size) {
    data = (aqua2_interfaces__srv__SetBool_Request *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__srv__SetBool_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__srv__SetBool_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__srv__SetBool_Request__fini(&data[i - 1]);
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
aqua2_interfaces__srv__SetBool_Request__Sequence__fini(aqua2_interfaces__srv__SetBool_Request__Sequence * array)
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
      aqua2_interfaces__srv__SetBool_Request__fini(&array->data[i]);
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

aqua2_interfaces__srv__SetBool_Request__Sequence *
aqua2_interfaces__srv__SetBool_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Request__Sequence * array = (aqua2_interfaces__srv__SetBool_Request__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__srv__SetBool_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__srv__SetBool_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__srv__SetBool_Request__Sequence__destroy(aqua2_interfaces__srv__SetBool_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__srv__SetBool_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__srv__SetBool_Request__Sequence__are_equal(const aqua2_interfaces__srv__SetBool_Request__Sequence * lhs, const aqua2_interfaces__srv__SetBool_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__srv__SetBool_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__srv__SetBool_Request__Sequence__copy(
  const aqua2_interfaces__srv__SetBool_Request__Sequence * input,
  aqua2_interfaces__srv__SetBool_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__srv__SetBool_Request);
    aqua2_interfaces__srv__SetBool_Request * data =
      (aqua2_interfaces__srv__SetBool_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__srv__SetBool_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__srv__SetBool_Request__fini(&data[i]);
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
    if (!aqua2_interfaces__srv__SetBool_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
aqua2_interfaces__srv__SetBool_Response__init(aqua2_interfaces__srv__SetBool_Response * msg)
{
  if (!msg) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    aqua2_interfaces__srv__SetBool_Response__fini(msg);
    return false;
  }
  return true;
}

void
aqua2_interfaces__srv__SetBool_Response__fini(aqua2_interfaces__srv__SetBool_Response * msg)
{
  if (!msg) {
    return;
  }
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
aqua2_interfaces__srv__SetBool_Response__are_equal(const aqua2_interfaces__srv__SetBool_Response * lhs, const aqua2_interfaces__srv__SetBool_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
aqua2_interfaces__srv__SetBool_Response__copy(
  const aqua2_interfaces__srv__SetBool_Response * input,
  aqua2_interfaces__srv__SetBool_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

aqua2_interfaces__srv__SetBool_Response *
aqua2_interfaces__srv__SetBool_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Response * msg = (aqua2_interfaces__srv__SetBool_Response *)allocator.allocate(sizeof(aqua2_interfaces__srv__SetBool_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aqua2_interfaces__srv__SetBool_Response));
  bool success = aqua2_interfaces__srv__SetBool_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aqua2_interfaces__srv__SetBool_Response__destroy(aqua2_interfaces__srv__SetBool_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aqua2_interfaces__srv__SetBool_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aqua2_interfaces__srv__SetBool_Response__Sequence__init(aqua2_interfaces__srv__SetBool_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Response * data = NULL;

  if (size) {
    data = (aqua2_interfaces__srv__SetBool_Response *)allocator.zero_allocate(size, sizeof(aqua2_interfaces__srv__SetBool_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aqua2_interfaces__srv__SetBool_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aqua2_interfaces__srv__SetBool_Response__fini(&data[i - 1]);
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
aqua2_interfaces__srv__SetBool_Response__Sequence__fini(aqua2_interfaces__srv__SetBool_Response__Sequence * array)
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
      aqua2_interfaces__srv__SetBool_Response__fini(&array->data[i]);
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

aqua2_interfaces__srv__SetBool_Response__Sequence *
aqua2_interfaces__srv__SetBool_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aqua2_interfaces__srv__SetBool_Response__Sequence * array = (aqua2_interfaces__srv__SetBool_Response__Sequence *)allocator.allocate(sizeof(aqua2_interfaces__srv__SetBool_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aqua2_interfaces__srv__SetBool_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aqua2_interfaces__srv__SetBool_Response__Sequence__destroy(aqua2_interfaces__srv__SetBool_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aqua2_interfaces__srv__SetBool_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aqua2_interfaces__srv__SetBool_Response__Sequence__are_equal(const aqua2_interfaces__srv__SetBool_Response__Sequence * lhs, const aqua2_interfaces__srv__SetBool_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aqua2_interfaces__srv__SetBool_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aqua2_interfaces__srv__SetBool_Response__Sequence__copy(
  const aqua2_interfaces__srv__SetBool_Response__Sequence * input,
  aqua2_interfaces__srv__SetBool_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aqua2_interfaces__srv__SetBool_Response);
    aqua2_interfaces__srv__SetBool_Response * data =
      (aqua2_interfaces__srv__SetBool_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aqua2_interfaces__srv__SetBool_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aqua2_interfaces__srv__SetBool_Response__fini(&data[i]);
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
    if (!aqua2_interfaces__srv__SetBool_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
