// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aqua2_simulation_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__FUNCTIONS_H_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aqua2_simulation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aqua2_simulation_interfaces/srv/detail/set_position__struct.h"

/// Initialize srv/SetPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aqua2_simulation_interfaces__srv__SetPosition_Request
 * )) before or use
 * aqua2_simulation_interfaces__srv__SetPosition_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__init(aqua2_simulation_interfaces__srv__SetPosition_Request * msg);

/// Finalize srv/SetPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Request__fini(aqua2_simulation_interfaces__srv__SetPosition_Request * msg);

/// Create srv/SetPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
aqua2_simulation_interfaces__srv__SetPosition_Request *
aqua2_simulation_interfaces__srv__SetPosition_Request__create();

/// Destroy srv/SetPosition message.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Request__destroy(aqua2_simulation_interfaces__srv__SetPosition_Request * msg);

/// Check for srv/SetPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__are_equal(const aqua2_simulation_interfaces__srv__SetPosition_Request * lhs, const aqua2_simulation_interfaces__srv__SetPosition_Request * rhs);

/// Copy a srv/SetPosition message.
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
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__copy(
  const aqua2_simulation_interfaces__srv__SetPosition_Request * input,
  aqua2_simulation_interfaces__srv__SetPosition_Request * output);

/// Initialize array of srv/SetPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__init(aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetPosition messages.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__fini(aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * array);

/// Create array of srv/SetPosition messages.
/**
 * It allocates the memory for the array and calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence *
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetPosition messages.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__destroy(aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * array);

/// Check for srv/SetPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__are_equal(const aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * lhs, const aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * rhs);

/// Copy an array of srv/SetPosition messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence__copy(
  const aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * input,
  aqua2_simulation_interfaces__srv__SetPosition_Request__Sequence * output);

/// Initialize srv/SetPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aqua2_simulation_interfaces__srv__SetPosition_Response
 * )) before or use
 * aqua2_simulation_interfaces__srv__SetPosition_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__init(aqua2_simulation_interfaces__srv__SetPosition_Response * msg);

/// Finalize srv/SetPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Response__fini(aqua2_simulation_interfaces__srv__SetPosition_Response * msg);

/// Create srv/SetPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
aqua2_simulation_interfaces__srv__SetPosition_Response *
aqua2_simulation_interfaces__srv__SetPosition_Response__create();

/// Destroy srv/SetPosition message.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Response__destroy(aqua2_simulation_interfaces__srv__SetPosition_Response * msg);

/// Check for srv/SetPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__are_equal(const aqua2_simulation_interfaces__srv__SetPosition_Response * lhs, const aqua2_simulation_interfaces__srv__SetPosition_Response * rhs);

/// Copy a srv/SetPosition message.
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
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__copy(
  const aqua2_simulation_interfaces__srv__SetPosition_Response * input,
  aqua2_simulation_interfaces__srv__SetPosition_Response * output);

/// Initialize array of srv/SetPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__init(aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetPosition messages.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__fini(aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * array);

/// Create array of srv/SetPosition messages.
/**
 * It allocates the memory for the array and calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence *
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetPosition messages.
/**
 * It calls
 * aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
void
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__destroy(aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * array);

/// Check for srv/SetPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__are_equal(const aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * lhs, const aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * rhs);

/// Copy an array of srv/SetPosition messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aqua2_simulation_interfaces
bool
aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence__copy(
  const aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * input,
  aqua2_simulation_interfaces__srv__SetPosition_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__FUNCTIONS_H_
