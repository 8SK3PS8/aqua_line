// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_simulation_interfaces:srv/EmptyWorkaround.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__BUILDER_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__BUILDER_HPP_

#include "aqua2_simulation_interfaces/srv/detail/empty_workaround__struct.hpp"
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
auto build<::aqua2_simulation_interfaces::srv::EmptyWorkaround_Request>()
{
  return ::aqua2_simulation_interfaces::srv::EmptyWorkaround_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aqua2_simulation_interfaces


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_EmptyWorkaround_Response_msg
{
public:
  Init_EmptyWorkaround_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::EmptyWorkaround_Response msg(::aqua2_simulation_interfaces::srv::EmptyWorkaround_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::EmptyWorkaround_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::EmptyWorkaround_Response>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_EmptyWorkaround_Response_msg();
}

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__BUILDER_HPP_
