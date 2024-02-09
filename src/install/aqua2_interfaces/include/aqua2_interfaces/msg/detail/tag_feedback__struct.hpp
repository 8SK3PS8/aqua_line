// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__TagFeedback __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__TagFeedback __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TagFeedback_
{
  using Type = TagFeedback_<ContainerAllocator>;

  explicit TagFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->im_width_px = 0ull;
      this->im_height_px = 0ull;
      this->num_tags = 0ull;
      this->msg = "";
    }
  }

  explicit TagFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->im_width_px = 0ull;
      this->im_height_px = 0ull;
      this->num_tags = 0ull;
      this->msg = "";
    }
  }

  // field types and members
  using _im_width_px_type =
    uint64_t;
  _im_width_px_type im_width_px;
  using _im_height_px_type =
    uint64_t;
  _im_height_px_type im_height_px;
  using _num_tags_type =
    uint64_t;
  _num_tags_type num_tags;
  using _tag_corners_px_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _tag_corners_px_type tag_corners_px;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__im_width_px(
    const uint64_t & _arg)
  {
    this->im_width_px = _arg;
    return *this;
  }
  Type & set__im_height_px(
    const uint64_t & _arg)
  {
    this->im_height_px = _arg;
    return *this;
  }
  Type & set__num_tags(
    const uint64_t & _arg)
  {
    this->num_tags = _arg;
    return *this;
  }
  Type & set__tag_corners_px(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->tag_corners_px = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__TagFeedback
    std::shared_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__TagFeedback
    std::shared_ptr<aqua2_interfaces::msg::TagFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TagFeedback_ & other) const
  {
    if (this->im_width_px != other.im_width_px) {
      return false;
    }
    if (this->im_height_px != other.im_height_px) {
      return false;
    }
    if (this->num_tags != other.num_tags) {
      return false;
    }
    if (this->tag_corners_px != other.tag_corners_px) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const TagFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TagFeedback_

// alias to use template instance with default allocator
using TagFeedback =
  aqua2_interfaces::msg::TagFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__TAG_FEEDBACK__STRUCT_HPP_
