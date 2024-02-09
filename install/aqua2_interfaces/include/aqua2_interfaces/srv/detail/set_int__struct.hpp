// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:srv/SetInt.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_INT__STRUCT_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_INT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__srv__SetInt_Request __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__srv__SetInt_Request __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInt_Request_
{
  using Type = SetInt_Request_<ContainerAllocator>;

  explicit SetInt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit SetInt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__srv__SetInt_Request
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__srv__SetInt_Request
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInt_Request_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInt_Request_

// alias to use template instance with default allocator
using SetInt_Request =
  aqua2_interfaces::srv::SetInt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_interfaces


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__srv__SetInt_Response __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__srv__SetInt_Response __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInt_Response_
{
  using Type = SetInt_Response_<ContainerAllocator>;

  explicit SetInt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  explicit SetInt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__srv__SetInt_Response
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__srv__SetInt_Response
    std::shared_ptr<aqua2_interfaces::srv::SetInt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInt_Response_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInt_Response_

// alias to use template instance with default allocator
using SetInt_Response =
  aqua2_interfaces::srv::SetInt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_interfaces

namespace aqua2_interfaces
{

namespace srv
{

struct SetInt
{
  using Request = aqua2_interfaces::srv::SetInt_Request;
  using Response = aqua2_interfaces::srv::SetInt_Response;
};

}  // namespace srv

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_INT__STRUCT_HPP_
