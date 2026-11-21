// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.hpp"
// Member 'input_source'
#include "aimdk_msgs/msg/detail/mc_input_source__struct.hpp"
// Member 'action_info'
#include "aimdk_msgs/msg/detail/mc_action_info__struct.hpp"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.hpp"
// Member 'motion_status'
#include "aimdk_msgs/msg/detail/mc_motion_status__struct.hpp"
// Member 'fsm_state'
#include "aimdk_msgs/msg/detail/mc_fsm_state__struct.hpp"
// Member 'form_state'
#include "aimdk_msgs/msg/detail/mc_form_state__struct.hpp"
// Member 'posture'
#include "aimdk_msgs/msg/detail/mc_posture__struct.hpp"
// Member 'lift_state'
#include "aimdk_msgs/msg/detail/mc_lift_state__struct.hpp"
// Member 'task_info'
#include "aimdk_msgs/msg/detail/mc_task_info__struct.hpp"
// Member 'held_state'
#include "aimdk_msgs/msg/detail/mc_hand_held_state__struct.hpp"
// Member 'posture_state'
#include "aimdk_msgs/msg/detail/mc_posture_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McCommonState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McCommonState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McCommonState_
{
  using Type = McCommonState_<ContainerAllocator>;

  explicit McCommonState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    input_source(_init),
    action_info(_init),
    runtime_model(_init),
    motion_status(_init),
    fsm_state(_init),
    form_state(_init),
    posture(_init),
    lift_state(_init),
    task_info(_init),
    held_state(_init),
    posture_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_moving = false;
      this->is_fallen = false;
    }
  }

  explicit McCommonState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    input_source(_alloc, _init),
    action_info(_alloc, _init),
    runtime_model(_alloc, _init),
    motion_status(_alloc, _init),
    fsm_state(_alloc, _init),
    form_state(_alloc, _init),
    posture(_alloc, _init),
    lift_state(_alloc, _init),
    task_info(_alloc, _init),
    held_state(_alloc, _init),
    posture_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_moving = false;
      this->is_fallen = false;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _input_source_type =
    aimdk_msgs::msg::McInputSource_<ContainerAllocator>;
  _input_source_type input_source;
  using _action_info_type =
    aimdk_msgs::msg::McActionInfo_<ContainerAllocator>;
  _action_info_type action_info;
  using _runtime_model_type =
    aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>;
  _runtime_model_type runtime_model;
  using _motion_status_type =
    aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>;
  _motion_status_type motion_status;
  using _fsm_state_type =
    aimdk_msgs::msg::McFsmState_<ContainerAllocator>;
  _fsm_state_type fsm_state;
  using _form_state_type =
    aimdk_msgs::msg::McFormState_<ContainerAllocator>;
  _form_state_type form_state;
  using _posture_type =
    aimdk_msgs::msg::McPosture_<ContainerAllocator>;
  _posture_type posture;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;
  using _is_fallen_type =
    bool;
  _is_fallen_type is_fallen;
  using _lift_state_type =
    aimdk_msgs::msg::McLiftState_<ContainerAllocator>;
  _lift_state_type lift_state;
  using _task_info_type =
    aimdk_msgs::msg::McTaskInfo_<ContainerAllocator>;
  _task_info_type task_info;
  using _held_state_type =
    aimdk_msgs::msg::McHandHeldState_<ContainerAllocator>;
  _held_state_type held_state;
  using _posture_state_type =
    aimdk_msgs::msg::McPostureState_<ContainerAllocator>;
  _posture_state_type posture_state;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__input_source(
    const aimdk_msgs::msg::McInputSource_<ContainerAllocator> & _arg)
  {
    this->input_source = _arg;
    return *this;
  }
  Type & set__action_info(
    const aimdk_msgs::msg::McActionInfo_<ContainerAllocator> & _arg)
  {
    this->action_info = _arg;
    return *this;
  }
  Type & set__runtime_model(
    const aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> & _arg)
  {
    this->runtime_model = _arg;
    return *this;
  }
  Type & set__motion_status(
    const aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> & _arg)
  {
    this->motion_status = _arg;
    return *this;
  }
  Type & set__fsm_state(
    const aimdk_msgs::msg::McFsmState_<ContainerAllocator> & _arg)
  {
    this->fsm_state = _arg;
    return *this;
  }
  Type & set__form_state(
    const aimdk_msgs::msg::McFormState_<ContainerAllocator> & _arg)
  {
    this->form_state = _arg;
    return *this;
  }
  Type & set__posture(
    const aimdk_msgs::msg::McPosture_<ContainerAllocator> & _arg)
  {
    this->posture = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }
  Type & set__is_fallen(
    const bool & _arg)
  {
    this->is_fallen = _arg;
    return *this;
  }
  Type & set__lift_state(
    const aimdk_msgs::msg::McLiftState_<ContainerAllocator> & _arg)
  {
    this->lift_state = _arg;
    return *this;
  }
  Type & set__task_info(
    const aimdk_msgs::msg::McTaskInfo_<ContainerAllocator> & _arg)
  {
    this->task_info = _arg;
    return *this;
  }
  Type & set__held_state(
    const aimdk_msgs::msg::McHandHeldState_<ContainerAllocator> & _arg)
  {
    this->held_state = _arg;
    return *this;
  }
  Type & set__posture_state(
    const aimdk_msgs::msg::McPostureState_<ContainerAllocator> & _arg)
  {
    this->posture_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McCommonState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McCommonState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McCommonState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McCommonState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McCommonState
    std::shared_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McCommonState
    std::shared_ptr<aimdk_msgs::msg::McCommonState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McCommonState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->input_source != other.input_source) {
      return false;
    }
    if (this->action_info != other.action_info) {
      return false;
    }
    if (this->runtime_model != other.runtime_model) {
      return false;
    }
    if (this->motion_status != other.motion_status) {
      return false;
    }
    if (this->fsm_state != other.fsm_state) {
      return false;
    }
    if (this->form_state != other.form_state) {
      return false;
    }
    if (this->posture != other.posture) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    if (this->is_fallen != other.is_fallen) {
      return false;
    }
    if (this->lift_state != other.lift_state) {
      return false;
    }
    if (this->task_info != other.task_info) {
      return false;
    }
    if (this->held_state != other.held_state) {
      return false;
    }
    if (this->posture_state != other.posture_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const McCommonState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McCommonState_

// alias to use template instance with default allocator
using McCommonState =
  aimdk_msgs::msg::McCommonState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_HPP_
