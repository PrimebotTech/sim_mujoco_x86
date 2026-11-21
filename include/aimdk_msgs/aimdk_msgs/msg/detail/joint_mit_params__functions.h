// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__FUNCTIONS_H_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aimdk_msgs/msg/detail/joint_mit_params__struct.h"

/// Initialize msg/JointMitParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aimdk_msgs__msg__JointMitParams
 * )) before or use
 * aimdk_msgs__msg__JointMitParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__JointMitParams__init(aimdk_msgs__msg__JointMitParams * msg);

/// Finalize msg/JointMitParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__JointMitParams__fini(aimdk_msgs__msg__JointMitParams * msg);

/// Create msg/JointMitParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aimdk_msgs__msg__JointMitParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__msg__JointMitParams *
aimdk_msgs__msg__JointMitParams__create();

/// Destroy msg/JointMitParams message.
/**
 * It calls
 * aimdk_msgs__msg__JointMitParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__JointMitParams__destroy(aimdk_msgs__msg__JointMitParams * msg);

/// Check for msg/JointMitParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__JointMitParams__are_equal(const aimdk_msgs__msg__JointMitParams * lhs, const aimdk_msgs__msg__JointMitParams * rhs);

/// Copy a msg/JointMitParams message.
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
aimdk_msgs__msg__JointMitParams__copy(
  const aimdk_msgs__msg__JointMitParams * input,
  aimdk_msgs__msg__JointMitParams * output);

/// Initialize array of msg/JointMitParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * aimdk_msgs__msg__JointMitParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__JointMitParams__Sequence__init(aimdk_msgs__msg__JointMitParams__Sequence * array, size_t size);

/// Finalize array of msg/JointMitParams messages.
/**
 * It calls
 * aimdk_msgs__msg__JointMitParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__JointMitParams__Sequence__fini(aimdk_msgs__msg__JointMitParams__Sequence * array);

/// Create array of msg/JointMitParams messages.
/**
 * It allocates the memory for the array and calls
 * aimdk_msgs__msg__JointMitParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__msg__JointMitParams__Sequence *
aimdk_msgs__msg__JointMitParams__Sequence__create(size_t size);

/// Destroy array of msg/JointMitParams messages.
/**
 * It calls
 * aimdk_msgs__msg__JointMitParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__msg__JointMitParams__Sequence__destroy(aimdk_msgs__msg__JointMitParams__Sequence * array);

/// Check for msg/JointMitParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__msg__JointMitParams__Sequence__are_equal(const aimdk_msgs__msg__JointMitParams__Sequence * lhs, const aimdk_msgs__msg__JointMitParams__Sequence * rhs);

/// Copy an array of msg/JointMitParams messages.
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
aimdk_msgs__msg__JointMitParams__Sequence__copy(
  const aimdk_msgs__msg__JointMitParams__Sequence * input,
  aimdk_msgs__msg__JointMitParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__FUNCTIONS_H_
