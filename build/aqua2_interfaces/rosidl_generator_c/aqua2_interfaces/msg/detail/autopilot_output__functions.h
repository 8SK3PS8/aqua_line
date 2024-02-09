// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aqua2_interfaces:msg/AutopilotOutput.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__FUNCTIONS_H_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aqua2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aqua2_interfaces/msg/detail/autopilot_output__struct.h"

/// Initialize msg/AutopilotOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aqua2_interfaces__msg__AutopilotOutput
 * )) before or use
 * aqua2_interfaces__msg__AutopilotOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__init(aqua2_interfaces__msg__AutopilotOutput * msg);

/// Finalize msg/AutopilotOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
void
aqua2_interfaces__msg__AutopilotOutput__fini(aqua2_interfaces__msg__AutopilotOutput * msg);

/// Create msg/AutopilotOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aqua2_interfaces__msg__AutopilotOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
aqua2_interfaces__msg__AutopilotOutput *
aqua2_interfaces__msg__AutopilotOutput__create();

/// Destroy msg/AutopilotOutput message.
/**
 * It calls
 * aqua2_interfaces__msg__AutopilotOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
void
aqua2_interfaces__msg__AutopilotOutput__destroy(aqua2_interfaces__msg__AutopilotOutput * msg);

/// Check for msg/AutopilotOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__are_equal(const aqua2_interfaces__msg__AutopilotOutput * lhs, const aqua2_interfaces__msg__AutopilotOutput * rhs);

/// Copy a msg/AutopilotOutput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__copy(
  const aqua2_interfaces__msg__AutopilotOutput * input,
  aqua2_interfaces__msg__AutopilotOutput * output);

/// Initialize array of msg/AutopilotOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * aqua2_interfaces__msg__AutopilotOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__Sequence__init(aqua2_interfaces__msg__AutopilotOutput__Sequence * array, size_t size);

/// Finalize array of msg/AutopilotOutput messages.
/**
 * It calls
 * aqua2_interfaces__msg__AutopilotOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
void
aqua2_interfaces__msg__AutopilotOutput__Sequence__fini(aqua2_interfaces__msg__AutopilotOutput__Sequence * array);

/// Create array of msg/AutopilotOutput messages.
/**
 * It allocates the memory for the array and calls
 * aqua2_interfaces__msg__AutopilotOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
aqua2_interfaces__msg__AutopilotOutput__Sequence *
aqua2_interfaces__msg__AutopilotOutput__Sequence__create(size_t size);

/// Destroy array of msg/AutopilotOutput messages.
/**
 * It calls
 * aqua2_interfaces__msg__AutopilotOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
void
aqua2_interfaces__msg__AutopilotOutput__Sequence__destroy(aqua2_interfaces__msg__AutopilotOutput__Sequence * array);

/// Check for msg/AutopilotOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__Sequence__are_equal(const aqua2_interfaces__msg__AutopilotOutput__Sequence * lhs, const aqua2_interfaces__msg__AutopilotOutput__Sequence * rhs);

/// Copy an array of msg/AutopilotOutput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_interfaces
bool
aqua2_interfaces__msg__AutopilotOutput__Sequence__copy(
  const aqua2_interfaces__msg__AutopilotOutput__Sequence * input,
  aqua2_interfaces__msg__AutopilotOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__FUNCTIONS_H_
