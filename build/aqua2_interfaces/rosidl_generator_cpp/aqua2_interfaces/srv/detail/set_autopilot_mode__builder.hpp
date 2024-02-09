// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/SetAutopilotMode.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/set_autopilot_mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAutopilotMode_Request_mode
{
public:
  Init_SetAutopilotMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::SetAutopilotMode_Request mode(::aqua2_interfaces::srv::SetAutopilotMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetAutopilotMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetAutopilotMode_Request>()
{
  return aqua2_interfaces::srv::builder::Init_SetAutopilotMode_Request_mode();
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAutopilotMode_Response_response
{
public:
  Init_SetAutopilotMode_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::SetAutopilotMode_Response response(::aqua2_interfaces::srv::SetAutopilotMode_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetAutopilotMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetAutopilotMode_Response>()
{
  return aqua2_interfaces::srv::builder::Init_SetAutopilotMode_Response_response();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__BUILDER_HPP_
