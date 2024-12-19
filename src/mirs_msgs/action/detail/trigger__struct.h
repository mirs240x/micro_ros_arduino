// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mirs_msgs:action/Trigger.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__ACTION__DETAIL__TRIGGER__STRUCT_H_
#define MIRS_MSGS__ACTION__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_Goal
{
  uint8_t structure_needs_at_least_one_member;
} mirs_msgs__action__Trigger_Goal;

// Struct for a sequence of mirs_msgs__action__Trigger_Goal.
typedef struct mirs_msgs__action__Trigger_Goal__Sequence
{
  mirs_msgs__action__Trigger_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_Result
{
  bool success;
} mirs_msgs__action__Trigger_Result;

// Struct for a sequence of mirs_msgs__action__Trigger_Result.
typedef struct mirs_msgs__action__Trigger_Result__Sequence
{
  mirs_msgs__action__Trigger_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} mirs_msgs__action__Trigger_Feedback;

// Struct for a sequence of mirs_msgs__action__Trigger_Feedback.
typedef struct mirs_msgs__action__Trigger_Feedback__Sequence
{
  mirs_msgs__action__Trigger_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mirs_msgs/action/detail/trigger__struct.h"

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mirs_msgs__action__Trigger_Goal goal;
} mirs_msgs__action__Trigger_SendGoal_Request;

// Struct for a sequence of mirs_msgs__action__Trigger_SendGoal_Request.
typedef struct mirs_msgs__action__Trigger_SendGoal_Request__Sequence
{
  mirs_msgs__action__Trigger_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mirs_msgs__action__Trigger_SendGoal_Response;

// Struct for a sequence of mirs_msgs__action__Trigger_SendGoal_Response.
typedef struct mirs_msgs__action__Trigger_SendGoal_Response__Sequence
{
  mirs_msgs__action__Trigger_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mirs_msgs__action__Trigger_GetResult_Request;

// Struct for a sequence of mirs_msgs__action__Trigger_GetResult_Request.
typedef struct mirs_msgs__action__Trigger_GetResult_Request__Sequence
{
  mirs_msgs__action__Trigger_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mirs_msgs/action/detail/trigger__struct.h"

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_GetResult_Response
{
  int8_t status;
  mirs_msgs__action__Trigger_Result result;
} mirs_msgs__action__Trigger_GetResult_Response;

// Struct for a sequence of mirs_msgs__action__Trigger_GetResult_Response.
typedef struct mirs_msgs__action__Trigger_GetResult_Response__Sequence
{
  mirs_msgs__action__Trigger_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mirs_msgs/action/detail/trigger__struct.h"

/// Struct defined in action/Trigger in the package mirs_msgs.
typedef struct mirs_msgs__action__Trigger_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mirs_msgs__action__Trigger_Feedback feedback;
} mirs_msgs__action__Trigger_FeedbackMessage;

// Struct for a sequence of mirs_msgs__action__Trigger_FeedbackMessage.
typedef struct mirs_msgs__action__Trigger_FeedbackMessage__Sequence
{
  mirs_msgs__action__Trigger_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__action__Trigger_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__ACTION__DETAIL__TRIGGER__STRUCT_H_
