// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_simulation_interfaces:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_

#include "aqua2_simulation_interfaces/srv/detail/get_float__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_simulation_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::GetFloat_Request>()
{
  return ::aqua2_simulation_interfaces::srv::GetFloat_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aqua2_simulation_interfaces


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetFloat_Response_value
{
public:
  Init_GetFloat_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::GetFloat_Response value(::aqua2_simulation_interfaces::srv::GetFloat_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::GetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::GetFloat_Response>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_GetFloat_Response_value();
}

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_
