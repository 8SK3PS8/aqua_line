// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/RobodevelState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__RobodevelState __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__RobodevelState __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobodevelState_
{
  using Type = RobodevelState_<ContainerAllocator>;

  explicit RobodevelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrated = false;
      this->reverse = false;
      this->mode = 0l;
      this->ap_mode = 0l;
    }
  }

  explicit RobodevelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrated = false;
      this->reverse = false;
      this->mode = 0l;
      this->ap_mode = 0l;
    }
  }

  // field types and members
  using _calibrated_type =
    bool;
  _calibrated_type calibrated;
  using _reverse_type =
    bool;
  _reverse_type reverse;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _ap_mode_type =
    int32_t;
  _ap_mode_type ap_mode;

  // setters for named parameter idiom
  Type & set__calibrated(
    const bool & _arg)
  {
    this->calibrated = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__ap_mode(
    const int32_t & _arg)
  {
    this->ap_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__RobodevelState
    std::shared_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__RobodevelState
    std::shared_ptr<aqua2_interfaces::msg::RobodevelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobodevelState_ & other) const
  {
    if (this->calibrated != other.calibrated) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->ap_mode != other.ap_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobodevelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobodevelState_

// alias to use template instance with default allocator
using RobodevelState =
  aqua2_interfaces::msg::RobodevelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__STRUCT_HPP_
