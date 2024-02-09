// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_simulation_interfaces:srv/SetLegStatus.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__BUILDER_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__BUILDER_HPP_

#include "aqua2_simulation_interfaces/srv/detail/set_leg_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLegStatus_Request_status
{
public:
  explicit Init_SetLegStatus_Request_status(::aqua2_simulation_interfaces::srv::SetLegStatus_Request & msg)
  : msg_(msg)
  {}
  ::aqua2_simulation_interfaces::srv::SetLegStatus_Request status(::aqua2_simulation_interfaces::srv::SetLegStatus_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetLegStatus_Request msg_;
};

class Init_SetLegStatus_Request_index
{
public:
  Init_SetLegStatus_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLegStatus_Request_status index(::aqua2_simulation_interfaces::srv::SetLegStatus_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_SetLegStatus_Request_status(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetLegStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetLegStatus_Request>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetLegStatus_Request_index();
}

}  // namespace aqua2_simulation_interfaces


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLegStatus_Response_msg
{
public:
  Init_SetLegStatus_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::SetLegStatus_Response msg(::aqua2_simulation_interfaces::srv::SetLegStatus_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetLegStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetLegStatus_Response>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetLegStatus_Response_msg();
}

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_LEG_STATUS__BUILDER_HPP_
