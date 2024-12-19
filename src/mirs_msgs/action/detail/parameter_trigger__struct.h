// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mirs_msgs:action/ParameterTrigger.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__STRUCT_H_
#define MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_Goal
{
  float parameter;
} mirs_msgs__action__ParameterTrigger_Goal;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_Goal.
typedef struct mirs_msgs__action__ParameterTrigger_Goal__Sequence
{
  mirs_msgs__action__ParameterTrigger_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_Result
{
  bool success;
} mirs_msgs__action__ParameterTrigger_Result;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_Result.
typedef struct mirs_msgs__action__ParameterTrigger_Result__Sequence
{
  mirs_msgs__action__ParameterTrigger_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_Feedback
{
  float feedback;
} mirs_msgs__action__ParameterTrigger_Feedback;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_Feedback.
typedef struct mirs_msgs__action__ParameterTrigger_Feedback__Sequence
{
  mirs_msgs__action__ParameterTrigger_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mirs_msgs/action/detail/parameter_trigger__struct.h"

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mirs_msgs__action__ParameterTrigger_Goal goal;
} mirs_msgs__action__ParameterTrigger_SendGoal_Request;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_SendGoal_Request.
typedef struct mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence
{
  mirs_msgs__action__ParameterTrigger_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mirs_msgs__action__ParameterTrigger_SendGoal_Response;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_SendGoal_Response.
typedef struct mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence
{
  mirs_msgs__action__ParameterTrigger_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mirs_msgs__action__ParameterTrigger_GetResult_Request;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_GetResult_Request.
typedef struct mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence
{
  mirs_msgs__action__ParameterTrigger_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mirs_msgs/action/detail/parameter_trigger__struct.h"

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_GetResult_Response
{
  int8_t status;
  mirs_msgs__action__ParameterTrigger_Result result;
} mirs_msgs__action__ParameterTrigger_GetResult_Response;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_GetResult_Response.
typedef struct mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence
{
  mirs_msgs__action__ParameterTrigger_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mirs_msgs/action/detail/parameter_trigger__struct.h"

/// Struct defined in action/ParameterTrigger in the package mirs_msgs.
typedef struct mirs_msgs__action__ParameterTrigger_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mirs_msgs__action__ParameterTrigger_Feedback feedback;
} mirs_msgs__action__ParameterTrigger_FeedbackMessage;

// Struct for a sequence of mirs_msgs__action__ParameterTrigger_FeedbackMessage.
typedef struct mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence
{
  mirs_msgs__action__ParameterTrigger_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__STRUCT_H_
