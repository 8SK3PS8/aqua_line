// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/status_indicator__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_StatusIndicator_bg_color
{
public:
  explicit Init_StatusIndicator_bg_color(::aqua2_interfaces::msg::StatusIndicator & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::StatusIndicator bg_color(::aqua2_interfaces::msg::StatusIndicator::_bg_color_type arg)
  {
    msg_.bg_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::StatusIndicator msg_;
};

class Init_StatusIndicator_text_color
{
public:
  explicit Init_StatusIndicator_text_color(::aqua2_interfaces::msg::StatusIndicator & msg)
  : msg_(msg)
  {}
  Init_StatusIndicator_bg_color text_color(::aqua2_interfaces::msg::StatusIndicator::_text_color_type arg)
  {
    msg_.text_color = std::move(arg);
    return Init_StatusIndicator_bg_color(msg_);
  }

private:
  ::aqua2_interfaces::msg::StatusIndicator msg_;
};

class Init_StatusIndicator_text
{
public:
  explicit Init_StatusIndicator_text(::aqua2_interfaces::msg::StatusIndicator & msg)
  : msg_(msg)
  {}
  Init_StatusIndicator_text_color text(::aqua2_interfaces::msg::StatusIndicator::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_StatusIndicator_text_color(msg_);
  }

private:
  ::aqua2_interfaces::msg::StatusIndicator msg_;
};

class Init_StatusIndicator_header
{
public:
  Init_StatusIndicator_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusIndicator_text header(::aqua2_interfaces::msg::StatusIndicator::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusIndicator_text(msg_);
  }

private:
  ::aqua2_interfaces::msg::StatusIndicator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::StatusIndicator>()
{
  return aqua2_interfaces::msg::builder::Init_StatusIndicator_header();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__BUILDER_HPP_
