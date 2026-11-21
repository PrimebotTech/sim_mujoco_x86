// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aimdk_msgs:msg/CommonTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__FUNCTIONS_H_
#define AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aimdk_msgs/msg/detail/common_task_request__struct.h"

/// Initialize msg/CommonTaskRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aimdk_msgs__msg__CommonTaskRequest
 * )) before or use
 * aimdk_msgs__msg__CommonTaskRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__init(aimdk_msgs__msg__CommonTaskRequest * msg);

/// Finalize msg/CommonTaskRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__CommonTaskRequest__fini(aimdk_msgs__msg__CommonTaskRequest * msg);

/// Create msg/CommonTaskRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aimdk_msgs__msg__CommonTaskRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__msg__CommonTaskRequest *
aimdk_msgs__msg__CommonTaskRequest__create();

/// Destroy msg/CommonTaskRequest message.
/**
 * It calls
 * aimdk_msgs__msg__CommonTaskRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__CommonTaskRequest__destroy(aimdk_msgs__msg__CommonTaskRequest * msg);

/// Check for msg/CommonTaskRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__are_equal(const aimdk_msgs__msg__CommonTaskRequest * lhs, const aimdk_msgs__msg__CommonTaskRequest * rhs);

/// Copy a msg/CommonTaskRequest message.
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
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__copy(
  const aimdk_msgs__msg__CommonTaskRequest * input,
  aimdk_msgs__msg__CommonTaskRequest * output);

/// Initialize array of msg/CommonTaskRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * aimdk_msgs__msg__CommonTaskRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__Sequence__init(aimdk_msgs__msg__CommonTaskRequest__Sequence * array, size_t size);

/// Finalize array of msg/CommonTaskRequest messages.
/**
 * It calls
 * aimdk_msgs__msg__CommonTaskRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__CommonTaskRequest__Sequence__fini(aimdk_msgs__msg__CommonTaskRequest__Sequence * array);

/// Create array of msg/CommonTaskRequest messages.
/**
 * It allocates the memory for the array and calls
 * aimdk_msgs__msg__CommonTaskRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__msg__CommonTaskRequest__Sequence *
aimdk_msgs__msg__CommonTaskRequest__Sequence__create(size_t size);

/// Destroy array of msg/CommonTaskRequest messages.
/**
 * It calls
 * aimdk_msgs__msg__CommonTaskRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__CommonTaskRequest__Sequence__destroy(aimdk_msgs__msg__CommonTaskRequest__Sequence * array);

/// Check for msg/CommonTaskRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__Sequence__are_equal(const aimdk_msgs__msg__CommonTaskRequest__Sequence * lhs, const aimdk_msgs__msg__CommonTaskRequest__Sequence * rhs);

/// Copy an array of msg/CommonTaskRequest messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__CommonTaskRequest__Sequence__copy(
  const aimdk_msgs__msg__CommonTaskRequest__Sequence * input,
  aimdk_msgs__msg__CommonTaskRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__FUNCTIONS_H_
