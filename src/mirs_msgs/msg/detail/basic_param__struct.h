// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_H_
#define MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BasicParam in the package mirs_msgs.
typedef struct mirs_msgs__msg__BasicParam
{
  double wheel_radius;
  double wheel_base;
  double rkp;
  double rki;
  double rkd;
  double lkp;
  double lki;
  double lkd;
} mirs_msgs__msg__BasicParam;

// Struct for a sequence of mirs_msgs__msg__BasicParam.
typedef struct mirs_msgs__msg__BasicParam__Sequence
{
  mirs_msgs__msg__BasicParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mirs_msgs__msg__BasicParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_H_
