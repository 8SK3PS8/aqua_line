// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/GetAutopilotState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/get_autopilot_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::GetAutopilotState_Request>()
{
  return ::aqua2_interfaces::srv::GetAutopilotState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAutopilotState_Response_target_yaw
{
public:
  explicit Init_GetAutopilotState_Response_target_yaw(::aqua2_interfaces::srv::GetAutopilotState_Response & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::srv::GetAutopilotState_Response target_yaw(::aqua2_interfaces::srv::GetAutopilotState_Response::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetAutopilotState_Response msg_;
};

class Init_GetAutopilotState_Response_target_pitch
{
public:
  explicit Init_GetAutopilotState_Response_target_pitch(::aqua2_interfaces::srv::GetAutopilotState_Response & msg)
  : msg_(msg)
  {}
  Init_GetAutopilotState_Response_target_yaw target_pitch(::aqua2_interfaces::srv::GetAutopilotState_Response::_target_pitch_type arg)
  {
    msg_.target_pitch = std::move(arg);
    return Init_GetAutopilotState_Response_target_yaw(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetAutopilotState_Response msg_;
};

class Init_GetAutopilotState_Response_target_roll
{
public:
  explicit Init_GetAutopilotState_Response_target_roll(::aqua2_interfaces::srv::GetAutopilotState_Response & msg)
  : msg_(msg)
  {}
  Init_GetAutopilotState_Response_target_pitch target_roll(::aqua2_interfaces::srv::GetAutopilotState_Response::_target_roll_type arg)
  {
    msg_.target_roll = std::move(arg);
    return Init_GetAutopilotState_Response_target_pitch(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetAutopilotState_Response msg_;
};

class Init_GetAutopilotState_Response_target_depth
{
public:
  explicit Init_GetAutopilotState_Response_target_depth(::aqua2_interfaces::srv::GetAutopilotState_Response & msg)
  : msg_(msg)
  {}
  Init_GetAutopilotState_Response_target_roll target_depth(::aqua2_interfaces::srv::GetAutopilotState_Response::_target_depth_type arg)
  {
    msg_.target_depth = std::move(arg);
    return Init_GetAutopilotState_Response_target_roll(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetAutopilotState_Response msg_;
};

class Init_GetAutopilotState_Response_autopilot_mode
{
public:
  Init_GetAutopilotState_Response_autopilot_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAutopilotState_Response_target_depth autopilot_mode(::aqua2_interfaces::srv::GetAutopilotState_Response::_autopilot_mode_type arg)
  {
    msg_.autopilot_mode = std::move(arg);
    return Init_GetAutopilotState_Response_target_depth(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetAutopilotState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::GetAutopilotState_Response>()
{
  return aqua2_interfaces::srv::builder::Init_GetAutopilotState_Response_autopilot_mode();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__BUILDER_HPP_
