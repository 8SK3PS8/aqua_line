// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoint_target_depth
{
public:
  explicit Init_Waypoint_target_depth(::aqua2_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::Waypoint target_depth(::aqua2_interfaces::msg::Waypoint::_target_depth_type arg)
  {
    msg_.target_depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_target_y
{
public:
  explicit Init_Waypoint_target_y(::aqua2_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_target_depth target_y(::aqua2_interfaces::msg::Waypoint::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_Waypoint_target_depth(msg_);
  }

private:
  ::aqua2_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_target_x
{
public:
  Init_Waypoint_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_target_y target_x(::aqua2_interfaces::msg::Waypoint::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_Waypoint_target_y(msg_);
  }

private:
  ::aqua2_interfaces::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::Waypoint>()
{
  return aqua2_interfaces::msg::builder::Init_Waypoint_target_x();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
