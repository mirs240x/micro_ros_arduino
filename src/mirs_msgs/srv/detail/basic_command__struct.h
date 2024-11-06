// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mirs_msgs:srv/BasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_H_
#define MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BasicCommand in the package mirs_msgs.
typedef struct mirs_msgs__srv__BasicCommand_Request
{
  double param1;
  double param2;
  double param3;
  double param4;
} mirs_msgs__srv__BasicCommand_Request;

// Struct for a sequence of mirs_msgs__srv__BasicCommand_Request.
typedef struct mirs_msgs__srv__BasicCommand_Request__Sequence
{
  mirs_msgs__srv__BasicCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__srv__BasicCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BasicCommand in the package mirs_msgs.
typedef struct mirs_msgs__srv__BasicCommand_Response
{
  bool success;
} mirs_msgs__srv__BasicCommand_Response;

// Struct for a sequence of mirs_msgs__srv__BasicCommand_Response.
typedef struct mirs_msgs__srv__BasicCommand_Response__Sequence
{
  mirs_msgs__srv__BasicCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__srv__BasicCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_H_
