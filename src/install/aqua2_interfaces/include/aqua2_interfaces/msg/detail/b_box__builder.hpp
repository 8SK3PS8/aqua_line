// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/BBox.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__B_BOX__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__B_BOX__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/b_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_BBox_image_height
{
public:
  explicit Init_BBox_image_height(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::BBox image_height(::aqua2_interfaces::msg::BBox::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_image_width
{
public:
  explicit Init_BBox_image_width(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_image_height image_width(::aqua2_interfaces::msg::BBox::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_BBox_image_height(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_height
{
public:
  explicit Init_BBox_height(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_image_width height(::aqua2_interfaces::msg::BBox::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BBox_image_width(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_width
{
public:
  explicit Init_BBox_width(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_height width(::aqua2_interfaces::msg::BBox::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BBox_height(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_top_left_y
{
public:
  explicit Init_BBox_top_left_y(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_width top_left_y(::aqua2_interfaces::msg::BBox::_top_left_y_type arg)
  {
    msg_.top_left_y = std::move(arg);
    return Init_BBox_width(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_top_left_x
{
public:
  explicit Init_BBox_top_left_x(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_top_left_y top_left_x(::aqua2_interfaces::msg::BBox::_top_left_x_type arg)
  {
    msg_.top_left_x = std::move(arg);
    return Init_BBox_top_left_y(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_valid
{
public:
  explicit Init_BBox_valid(::aqua2_interfaces::msg::BBox & msg)
  : msg_(msg)
  {}
  Init_BBox_top_left_x valid(::aqua2_interfaces::msg::BBox::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_BBox_top_left_x(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

class Init_BBox_header
{
public:
  Init_BBox_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBox_valid header(::aqua2_interfaces::msg::BBox::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BBox_valid(msg_);
  }

private:
  ::aqua2_interfaces::msg::BBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::BBox>()
{
  return aqua2_interfaces::msg::builder::Init_BBox_header();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__B_BOX__BUILDER_HPP_
