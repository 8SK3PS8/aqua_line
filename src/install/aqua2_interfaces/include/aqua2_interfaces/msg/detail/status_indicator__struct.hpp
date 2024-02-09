// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__StatusIndicator __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__StatusIndicator __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusIndicator_
{
  using Type = StatusIndicator_<ContainerAllocator>;

  explicit StatusIndicator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      std::fill<typename std::array<float, 3>::iterator, float>(this->text_color.begin(), this->text_color.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->bg_color.begin(), this->bg_color.end(), 0.0f);
    }
  }

  explicit StatusIndicator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    text(_alloc),
    text_color(_alloc),
    bg_color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      std::fill<typename std::array<float, 3>::iterator, float>(this->text_color.begin(), this->text_color.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->bg_color.begin(), this->bg_color.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _text_color_type =
    std::array<float, 3>;
  _text_color_type text_color;
  using _bg_color_type =
    std::array<float, 3>;
  _bg_color_type bg_color;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__text_color(
    const std::array<float, 3> & _arg)
  {
    this->text_color = _arg;
    return *this;
  }
  Type & set__bg_color(
    const std::array<float, 3> & _arg)
  {
    this->bg_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__StatusIndicator
    std::shared_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__StatusIndicator
    std::shared_ptr<aqua2_interfaces::msg::StatusIndicator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusIndicator_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->text_color != other.text_color) {
      return false;
    }
    if (this->bg_color != other.bg_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusIndicator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusIndicator_

// alias to use template instance with default allocator
using StatusIndicator =
  aqua2_interfaces::msg::StatusIndicator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__STATUS_INDICATOR__STRUCT_HPP_
