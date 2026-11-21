// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__FUNCTIONS_H_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hds_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hds_msgs/msg/detail/exception_channel__struct.h"

/// Initialize msg/ExceptionChannel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hds_msgs__msg__ExceptionChannel
 * )) before or use
 * hds_msgs__msg__ExceptionChannel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__init(hds_msgs__msg__ExceptionChannel * msg);

/// Finalize msg/ExceptionChannel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
void
hds_msgs__msg__ExceptionChannel__fini(hds_msgs__msg__ExceptionChannel * msg);

/// Create msg/ExceptionChannel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hds_msgs__msg__ExceptionChannel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
hds_msgs__msg__ExceptionChannel *
hds_msgs__msg__ExceptionChannel__create();

/// Destroy msg/ExceptionChannel message.
/**
 * It calls
 * hds_msgs__msg__ExceptionChannel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
void
hds_msgs__msg__ExceptionChannel__destroy(hds_msgs__msg__ExceptionChannel * msg);

/// Check for msg/ExceptionChannel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__are_equal(const hds_msgs__msg__ExceptionChannel * lhs, const hds_msgs__msg__ExceptionChannel * rhs);

/// Copy a msg/ExceptionChannel message.
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
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__copy(
  const hds_msgs__msg__ExceptionChannel * input,
  hds_msgs__msg__ExceptionChannel * output);

/// Initialize array of msg/ExceptionChannel messages.
/**
 * It allocates the memory for the number of elements and calls
 * hds_msgs__msg__ExceptionChannel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__Sequence__init(hds_msgs__msg__ExceptionChannel__Sequence * array, size_t size);

/// Finalize array of msg/ExceptionChannel messages.
/**
 * It calls
 * hds_msgs__msg__ExceptionChannel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
void
hds_msgs__msg__ExceptionChannel__Sequence__fini(hds_msgs__msg__ExceptionChannel__Sequence * array);

/// Create array of msg/ExceptionChannel messages.
/**
 * It allocates the memory for the array and calls
 * hds_msgs__msg__ExceptionChannel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
hds_msgs__msg__ExceptionChannel__Sequence *
hds_msgs__msg__ExceptionChannel__Sequence__create(size_t size);

/// Destroy array of msg/ExceptionChannel messages.
/**
 * It calls
 * hds_msgs__msg__ExceptionChannel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
void
hds_msgs__msg__ExceptionChannel__Sequence__destroy(hds_msgs__msg__ExceptionChannel__Sequence * array);

/// Check for msg/ExceptionChannel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__Sequence__are_equal(const hds_msgs__msg__ExceptionChannel__Sequence * lhs, const hds_msgs__msg__ExceptionChannel__Sequence * rhs);

/// Copy an array of msg/ExceptionChannel messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hds_msgs
bool
hds_msgs__msg__ExceptionChannel__Sequence__copy(
  const hds_msgs__msg__ExceptionChannel__Sequence * input,
  hds_msgs__msg__ExceptionChannel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__FUNCTIONS_H_
