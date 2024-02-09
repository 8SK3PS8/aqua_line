// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__TRAITS_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__TRAITS_HPP_

#include "aqua2_interfaces/msg/detail/tag_feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::msg::TagFeedback>()
{
  return "aqua2_interfaces::msg::TagFeedback";
}

template<>
inline const char * name<aqua2_interfaces::msg::TagFeedback>()
{
  return "aqua2_interfaces/msg/TagFeedback";
}

template<>
struct has_fixed_size<aqua2_interfaces::msg::TagFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_interfaces::msg::TagFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_interfaces::msg::TagFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__TRAITS_HPP_
