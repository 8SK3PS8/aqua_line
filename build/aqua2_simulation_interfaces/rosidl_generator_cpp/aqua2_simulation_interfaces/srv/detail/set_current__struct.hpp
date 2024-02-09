// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_simulation_interfaces:srv/SetCurrent.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__STRUCT_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Request __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Request __declspec(deprecated)
#endif

namespace aqua2_simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrent_Request_
{
  using Type = SetCurrent_Request_<ContainerAllocator>;

  explicit SetCurrent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit SetCurrent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Request
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Request
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrent_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrent_Request_

// alias to use template instance with default allocator
using SetCurrent_Request =
  aqua2_simulation_interfaces::srv::SetCurrent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_simulation_interfaces


#ifndef _WIN32
# define DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Response __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Response __declspec(deprecated)
#endif

namespace aqua2_simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrent_Response_
{
  using Type = SetCurrent_Response_<ContainerAllocator>;

  explicit SetCurrent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  explicit SetCurrent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  // field types and members
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Response
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__SetCurrent_Response
    std::shared_ptr<aqua2_simulation_interfaces::srv::SetCurrent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrent_Response_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrent_Response_

// alias to use template instance with default allocator
using SetCurrent_Response =
  aqua2_simulation_interfaces::srv::SetCurrent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_simulation_interfaces

namespace aqua2_simulation_interfaces
{

namespace srv
{

struct SetCurrent
{
  using Request = aqua2_simulation_interfaces::srv::SetCurrent_Request;
  using Response = aqua2_simulation_interfaces::srv::SetCurrent_Response;
};

}  // namespace srv

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__STRUCT_HPP_
