// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/BBox.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_HPP_

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
# define DEPRECATED__aqua2_interfaces__msg__BBox __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__BBox __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BBox_
{
  using Type = BBox_<ContainerAllocator>;

  explicit BBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->top_left_x = 0.0f;
      this->top_left_y = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->image_width = 0l;
      this->image_height = 0l;
    }
  }

  explicit BBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->top_left_x = 0.0f;
      this->top_left_y = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->image_width = 0l;
      this->image_height = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _valid_type =
    bool;
  _valid_type valid;
  using _top_left_x_type =
    float;
  _top_left_x_type top_left_x;
  using _top_left_y_type =
    float;
  _top_left_y_type top_left_y;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _image_width_type =
    int32_t;
  _image_width_type image_width;
  using _image_height_type =
    int32_t;
  _image_height_type image_height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__top_left_x(
    const float & _arg)
  {
    this->top_left_x = _arg;
    return *this;
  }
  Type & set__top_left_y(
    const float & _arg)
  {
    this->top_left_y = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__image_width(
    const int32_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_height(
    const int32_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::BBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::BBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::BBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::BBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__BBox
    std::shared_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__BBox
    std::shared_ptr<aqua2_interfaces::msg::BBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BBox_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->top_left_x != other.top_left_x) {
      return false;
    }
    if (this->top_left_y != other.top_left_y) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const BBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BBox_

// alias to use template instance with default allocator
using BBox =
  aqua2_interfaces::msg::BBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__B_BOX__STRUCT_HPP_
