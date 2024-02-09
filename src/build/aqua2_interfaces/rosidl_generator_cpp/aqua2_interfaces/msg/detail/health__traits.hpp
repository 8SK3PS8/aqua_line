// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__HEALTH__TRAITS_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__HEALTH__TRAITS_HPP_

#include "aqua2_interfaces/msg/detail/health__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::msg::Health>()
{
  return "aqua2_interfaces::msg::Health";
}

template<>
inline const char * name<aqua2_interfaces::msg::Health>()
{
  return "aqua2_interfaces/msg/Health";
}

template<>
struct has_fixed_size<aqua2_interfaces::msg::Health>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<aqua2_interfaces::msg::Health>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<aqua2_interfaces::msg::Health>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__MSG__DETAIL__HEALTH__TRAITS_HPP_
