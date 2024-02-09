// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_simulation_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include "aqua2_simulation_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetPosition_Request>()
{
  return "aqua2_simulation_interfaces::srv::GetPosition_Request";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetPosition_Request>()
{
  return "aqua2_simulation_interfaces/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetPosition_Response>()
{
  return "aqua2_simulation_interfaces::srv::GetPosition_Response";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetPosition_Response>()
{
  return "aqua2_simulation_interfaces/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetPosition>()
{
  return "aqua2_simulation_interfaces::srv::GetPosition";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetPosition>()
{
  return "aqua2_simulation_interfaces/srv/GetPosition";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_simulation_interfaces::srv::GetPosition_Request>::value &&
    has_fixed_size<aqua2_simulation_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_simulation_interfaces::srv::GetPosition_Request>::value &&
    has_bounded_size<aqua2_simulation_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<aqua2_simulation_interfaces::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_simulation_interfaces::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_simulation_interfaces::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
