// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/AutopilotCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/autopilot_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_AutopilotCommand_target_depth
{
public:
  explicit Init_AutopilotCommand_target_depth(::aqua2_interfaces::msg::AutopilotCommand & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::AutopilotCommand target_depth(::aqua2_interfaces::msg::AutopilotCommand::_target_depth_type arg)
  {
    msg_.target_depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

class Init_AutopilotCommand_target_yaw
{
public:
  explicit Init_AutopilotCommand_target_yaw(::aqua2_interfaces::msg::AutopilotCommand & msg)
  : msg_(msg)
  {}
  Init_AutopilotCommand_target_depth target_yaw(::aqua2_interfaces::msg::AutopilotCommand::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return Init_AutopilotCommand_target_depth(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

class Init_AutopilotCommand_target_pitch
{
public:
  explicit Init_AutopilotCommand_target_pitch(::aqua2_interfaces::msg::AutopilotCommand & msg)
  : msg_(msg)
  {}
  Init_AutopilotCommand_target_yaw target_pitch(::aqua2_interfaces::msg::AutopilotCommand::_target_pitch_type arg)
  {
    msg_.target_pitch = std::move(arg);
    return Init_AutopilotCommand_target_yaw(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

class Init_AutopilotCommand_target_roll
{
public:
  explicit Init_AutopilotCommand_target_roll(::aqua2_interfaces::msg::AutopilotCommand & msg)
  : msg_(msg)
  {}
  Init_AutopilotCommand_target_pitch target_roll(::aqua2_interfaces::msg::AutopilotCommand::_target_roll_type arg)
  {
    msg_.target_roll = std::move(arg);
    return Init_AutopilotCommand_target_pitch(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

class Init_AutopilotCommand_heave
{
public:
  explicit Init_AutopilotCommand_heave(::aqua2_interfaces::msg::AutopilotCommand & msg)
  : msg_(msg)
  {}
  Init_AutopilotCommand_target_roll heave(::aqua2_interfaces::msg::AutopilotCommand::_heave_type arg)
  {
    msg_.heave = std::move(arg);
    return Init_AutopilotCommand_target_roll(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

class Init_AutopilotCommand_surge
{
public:
  Init_AutopilotCommand_surge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutopilotCommand_heave surge(::aqua2_interfaces::msg::AutopilotCommand::_surge_type arg)
  {
    msg_.surge = std::move(arg);
    return Init_AutopilotCommand_heave(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::AutopilotCommand>()
{
  return aqua2_interfaces::msg::builder::Init_AutopilotCommand_surge();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__BUILDER_HPP_
