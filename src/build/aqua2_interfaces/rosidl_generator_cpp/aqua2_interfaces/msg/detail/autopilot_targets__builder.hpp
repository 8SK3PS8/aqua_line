// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/autopilot_targets__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_AutopilotTargets_yaw_target_angle
{
public:
  explicit Init_AutopilotTargets_yaw_target_angle(::aqua2_interfaces::msg::AutopilotTargets & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::AutopilotTargets yaw_target_angle(::aqua2_interfaces::msg::AutopilotTargets::_yaw_target_angle_type arg)
  {
    msg_.yaw_target_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotTargets msg_;
};

class Init_AutopilotTargets_pitch_target_angle
{
public:
  explicit Init_AutopilotTargets_pitch_target_angle(::aqua2_interfaces::msg::AutopilotTargets & msg)
  : msg_(msg)
  {}
  Init_AutopilotTargets_yaw_target_angle pitch_target_angle(::aqua2_interfaces::msg::AutopilotTargets::_pitch_target_angle_type arg)
  {
    msg_.pitch_target_angle = std::move(arg);
    return Init_AutopilotTargets_yaw_target_angle(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotTargets msg_;
};

class Init_AutopilotTargets_roll_target_angle
{
public:
  explicit Init_AutopilotTargets_roll_target_angle(::aqua2_interfaces::msg::AutopilotTargets & msg)
  : msg_(msg)
  {}
  Init_AutopilotTargets_pitch_target_angle roll_target_angle(::aqua2_interfaces::msg::AutopilotTargets::_roll_target_angle_type arg)
  {
    msg_.roll_target_angle = std::move(arg);
    return Init_AutopilotTargets_pitch_target_angle(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotTargets msg_;
};

class Init_AutopilotTargets_depth_target
{
public:
  Init_AutopilotTargets_depth_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutopilotTargets_roll_target_angle depth_target(::aqua2_interfaces::msg::AutopilotTargets::_depth_target_type arg)
  {
    msg_.depth_target = std::move(arg);
    return Init_AutopilotTargets_roll_target_angle(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotTargets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::AutopilotTargets>()
{
  return aqua2_interfaces::msg::builder::Init_AutopilotTargets_depth_target();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__BUILDER_HPP_
