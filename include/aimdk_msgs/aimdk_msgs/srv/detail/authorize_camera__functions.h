// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aimdk_msgs:srv/AuthorizeCamera.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__AUTHORIZE_CAMERA__FUNCTIONS_H_
#define AIMDK_MSGS__SRV__DETAIL__AUTHORIZE_CAMERA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aimdk_msgs/srv/detail/authorize_camera__struct.h"

/// Initialize srv/AuthorizeCamera message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aimdk_msgs__srv__AuthorizeCamera_Request
 * )) before or use
 * aimdk_msgs__srv__AuthorizeCamera_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Request__init(aimdk_msgs__srv__AuthorizeCamera_Request * msg);

/// Finalize srv/AuthorizeCamera message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Request__fini(aimdk_msgs__srv__AuthorizeCamera_Request * msg);

/// Create srv/AuthorizeCamera message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__srv__AuthorizeCamera_Request *
aimdk_msgs__srv__AuthorizeCamera_Request__create();

/// Destroy srv/AuthorizeCamera message.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Request__destroy(aimdk_msgs__srv__AuthorizeCamera_Request * msg);

/// Check for srv/AuthorizeCamera message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Request__are_equal(const aimdk_msgs__srv__AuthorizeCamera_Request * lhs, const aimdk_msgs__srv__AuthorizeCamera_Request * rhs);

/// Copy a srv/AuthorizeCamera message.
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
aimdk_msgs__srv__AuthorizeCamera_Request__copy(
  const aimdk_msgs__srv__AuthorizeCamera_Request * input,
  aimdk_msgs__srv__AuthorizeCamera_Request * output);

/// Initialize array of srv/AuthorizeCamera messages.
/**
 * It allocates the memory for the number of elements and calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__init(aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * array, size_t size);

/// Finalize array of srv/AuthorizeCamera messages.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__fini(aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * array);

/// Create array of srv/AuthorizeCamera messages.
/**
 * It allocates the memory for the array and calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence *
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__create(size_t size);

/// Destroy array of srv/AuthorizeCamera messages.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__destroy(aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * array);

/// Check for srv/AuthorizeCamera message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__are_equal(const aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * lhs, const aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * rhs);

/// Copy an array of srv/AuthorizeCamera messages.
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
aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__copy(
  const aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * input,
  aimdk_msgs__srv__AuthorizeCamera_Request__Sequence * output);

/// Initialize srv/AuthorizeCamera message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aimdk_msgs__srv__AuthorizeCamera_Response
 * )) before or use
 * aimdk_msgs__srv__AuthorizeCamera_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Response__init(aimdk_msgs__srv__AuthorizeCamera_Response * msg);

/// Finalize srv/AuthorizeCamera message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Response__fini(aimdk_msgs__srv__AuthorizeCamera_Response * msg);

/// Create srv/AuthorizeCamera message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__srv__AuthorizeCamera_Response *
aimdk_msgs__srv__AuthorizeCamera_Response__create();

/// Destroy srv/AuthorizeCamera message.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Response__destroy(aimdk_msgs__srv__AuthorizeCamera_Response * msg);

/// Check for srv/AuthorizeCamera message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Response__are_equal(const aimdk_msgs__srv__AuthorizeCamera_Response * lhs, const aimdk_msgs__srv__AuthorizeCamera_Response * rhs);

/// Copy a srv/AuthorizeCamera message.
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
aimdk_msgs__srv__AuthorizeCamera_Response__copy(
  const aimdk_msgs__srv__AuthorizeCamera_Response * input,
  aimdk_msgs__srv__AuthorizeCamera_Response * output);

/// Initialize array of srv/AuthorizeCamera messages.
/**
 * It allocates the memory for the number of elements and calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__init(aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * array, size_t size);

/// Finalize array of srv/AuthorizeCamera messages.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__fini(aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * array);

/// Create array of srv/AuthorizeCamera messages.
/**
 * It allocates the memory for the array and calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence *
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__create(size_t size);

/// Destroy array of srv/AuthorizeCamera messages.
/**
 * It calls
 * aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
void
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__destroy(aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * array);

/// Check for srv/AuthorizeCamera message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aimdk_msgs
bool
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__are_equal(const aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * lhs, const aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * rhs);

/// Copy an array of srv/AuthorizeCamera messages.
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
aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__copy(
  const aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * input,
  aimdk_msgs__srv__AuthorizeCamera_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__AUTHORIZE_CAMERA__FUNCTIONS_H_
