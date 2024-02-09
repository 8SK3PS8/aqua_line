// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/tag_feedback__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_TagFeedback_msg
{
public:
  explicit Init_TagFeedback_msg(::aqua2_interfaces::msg::TagFeedback & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::TagFeedback msg(::aqua2_interfaces::msg::TagFeedback::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::TagFeedback msg_;
};

class Init_TagFeedback_tag_corners_px
{
public:
  explicit Init_TagFeedback_tag_corners_px(::aqua2_interfaces::msg::TagFeedback & msg)
  : msg_(msg)
  {}
  Init_TagFeedback_msg tag_corners_px(::aqua2_interfaces::msg::TagFeedback::_tag_corners_px_type arg)
  {
    msg_.tag_corners_px = std::move(arg);
    return Init_TagFeedback_msg(msg_);
  }

private:
  ::aqua2_interfaces::msg::TagFeedback msg_;
};

class Init_TagFeedback_num_tags
{
public:
  explicit Init_TagFeedback_num_tags(::aqua2_interfaces::msg::TagFeedback & msg)
  : msg_(msg)
  {}
  Init_TagFeedback_tag_corners_px num_tags(::aqua2_interfaces::msg::TagFeedback::_num_tags_type arg)
  {
    msg_.num_tags = std::move(arg);
    return Init_TagFeedback_tag_corners_px(msg_);
  }

private:
  ::aqua2_interfaces::msg::TagFeedback msg_;
};

class Init_TagFeedback_im_height_px
{
public:
  explicit Init_TagFeedback_im_height_px(::aqua2_interfaces::msg::TagFeedback & msg)
  : msg_(msg)
  {}
  Init_TagFeedback_num_tags im_height_px(::aqua2_interfaces::msg::TagFeedback::_im_height_px_type arg)
  {
    msg_.im_height_px = std::move(arg);
    return Init_TagFeedback_num_tags(msg_);
  }

private:
  ::aqua2_interfaces::msg::TagFeedback msg_;
};

class Init_TagFeedback_im_width_px
{
public:
  Init_TagFeedback_im_width_px()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TagFeedback_im_height_px im_width_px(::aqua2_interfaces::msg::TagFeedback::_im_width_px_type arg)
  {
    msg_.im_width_px = std::move(arg);
    return Init_TagFeedback_im_height_px(msg_);
  }

private:
  ::aqua2_interfaces::msg::TagFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::TagFeedback>()
{
  return aqua2_interfaces::msg::builder::Init_TagFeedback_im_width_px();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__BUILDER_HPP_
