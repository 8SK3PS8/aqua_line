// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__TRAITS_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__TRAITS_HPP_

#include "aqua2_interfaces/msg/detail/status_indicator__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::msg::StatusIndicator>()
{
  return "aqua2_interfaces::msg::StatusIndicator";
}

template<>
inline const char * name<aqua2_interfaces::msg::StatusIndicator>()
{
  return "aqua2_interfaces/msg/StatusIndicator";
}

template<>
struct has_fixed_size<aqua2_interfaces::msg::StatusIndicator>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_interfaces::msg::StatusIndicator>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_interfaces::msg::StatusIndicator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__TRAITS_HPP_
