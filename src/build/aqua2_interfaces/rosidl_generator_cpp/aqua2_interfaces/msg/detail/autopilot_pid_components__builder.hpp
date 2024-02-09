// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_AutopilotPIDComponents_yaw_kd_component
{
public:
  explicit Init_AutopilotPIDComponents_yaw_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::AutopilotPIDComponents yaw_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_yaw_kd_component_type arg)
  {
    msg_.yaw_kd_component = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_yaw_ki_component
{
public:
  explicit Init_AutopilotPIDComponents_yaw_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_yaw_kd_component yaw_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_yaw_ki_component_type arg)
  {
    msg_.yaw_ki_component = std::move(arg);
    return Init_AutopilotPIDComponents_yaw_kd_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_yaw_kp_component
{
public:
  explicit Init_AutopilotPIDComponents_yaw_kp_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_yaw_ki_component yaw_kp_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_yaw_kp_component_type arg)
  {
    msg_.yaw_kp_component = std::move(arg);
    return Init_AutopilotPIDComponents_yaw_ki_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_pitch_kd_component
{
public:
  explicit Init_AutopilotPIDComponents_pitch_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_yaw_kp_component pitch_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_pitch_kd_component_type arg)
  {
    msg_.pitch_kd_component = std::move(arg);
    return Init_AutopilotPIDComponents_yaw_kp_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_pitch_ki_component
{
public:
  explicit Init_AutopilotPIDComponents_pitch_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_pitch_kd_component pitch_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_pitch_ki_component_type arg)
  {
    msg_.pitch_ki_component = std::move(arg);
    return Init_AutopilotPIDComponents_pitch_kd_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_pitch_kp_component
{
public:
  explicit Init_AutopilotPIDComponents_pitch_kp_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_pitch_ki_component pitch_kp_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_pitch_kp_component_type arg)
  {
    msg_.pitch_kp_component = std::move(arg);
    return Init_AutopilotPIDComponents_pitch_ki_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_roll_kd_component
{
public:
  explicit Init_AutopilotPIDComponents_roll_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_pitch_kp_component roll_kd_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_roll_kd_component_type arg)
  {
    msg_.roll_kd_component = std::move(arg);
    return Init_AutopilotPIDComponents_pitch_kp_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_roll_ki_component
{
public:
  explicit Init_AutopilotPIDComponents_roll_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents & msg)
  : msg_(msg)
  {}
  Init_AutopilotPIDComponents_roll_kd_component roll_ki_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_roll_ki_component_type arg)
  {
    msg_.roll_ki_component = std::move(arg);
    return Init_AutopilotPIDComponents_roll_kd_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

class Init_AutopilotPIDComponents_roll_kp_component
{
public:
  Init_AutopilotPIDComponents_roll_kp_component()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutopilotPIDComponents_roll_ki_component roll_kp_component(::aqua2_interfaces::msg::AutopilotPIDComponents::_roll_kp_component_type arg)
  {
    msg_.roll_kp_component = std::move(arg);
    return Init_AutopilotPIDComponents_roll_ki_component(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotPIDComponents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::AutopilotPIDComponents>()
{
  return aqua2_interfaces::msg::builder::Init_AutopilotPIDComponents_roll_kp_component();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__BUILDER_HPP_
