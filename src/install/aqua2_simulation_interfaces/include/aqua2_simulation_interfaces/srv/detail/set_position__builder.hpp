// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_simulation_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_

#include "aqua2_simulation_interfaces/srv/detail/set_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Request_pose
{
public:
  Init_SetPosition_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::SetPosition_Request pose(::aqua2_simulation_interfaces::srv::SetPosition_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetPosition_Request>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetPosition_Request_pose();
}

}  // namespace aqua2_simulation_interfaces


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Response_msg
{
public:
  Init_SetPosition_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::SetPosition_Response msg(::aqua2_simulation_interfaces::srv::SetPosition_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetPosition_Response>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetPosition_Response_msg();
}

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
