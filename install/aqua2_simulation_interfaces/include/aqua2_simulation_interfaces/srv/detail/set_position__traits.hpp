// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_simulation_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_

#include "aqua2_simulation_interfaces/srv/detail/set_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::SetPosition_Request>()
{
  return "aqua2_simulation_interfaces::srv::SetPosition_Request";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::SetPosition_Request>()
{
  return "aqua2_simulation_interfaces/srv/SetPosition_Request";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::SetPosition_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::SetPosition_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::SetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::SetPosition_Response>()
{
  return "aqua2_simulation_interfaces::srv::SetPosition_Response";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::SetPosition_Response>()
{
  return "aqua2_simulation_interfaces/srv/SetPosition_Response";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::SetPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::SetPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::SetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::SetPosition>()
{
  return "aqua2_simulation_interfaces::srv::SetPosition";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::SetPosition>()
{
  return "aqua2_simulation_interfaces/srv/SetPosition";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::SetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_simulation_interfaces::srv::SetPosition_Request>::value &&
    has_fixed_size<aqua2_simulation_interfaces::srv::SetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::SetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_simulation_interfaces::srv::SetPosition_Request>::value &&
    has_bounded_size<aqua2_simulation_interfaces::srv::SetPosition_Response>::value
  >
{
};

template<>
struct is_service<aqua2_simulation_interfaces::srv::SetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_simulation_interfaces::srv::SetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_simulation_interfaces::srv::SetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_
