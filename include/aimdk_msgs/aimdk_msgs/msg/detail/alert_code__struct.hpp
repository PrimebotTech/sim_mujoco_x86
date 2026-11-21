// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__AlertCode __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__AlertCode __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlertCode_
{
  using Type = AlertCode_<ContainerAllocator>;

  explicit AlertCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0ull;
      this->timestamp = 0ull;
      this->appeared_timestamp = 0ull;
      this->code = "";
      this->alert_event_type = 0;
      this->level = 0;
      this->text = "";
      this->is_audio_cycle = false;
      this->light_msg = "";
      this->emotion_id = 0ul;
      this->post_process = 0ul;
      this->app_show_id = "";
      this->breakdown_msg = "";
      this->capability_limit = "";
      this->diag_name = "";
      this->audio_strategy = 0;
      this->nlg_scene_id = "";
    }
  }

  explicit AlertCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc),
    text(_alloc),
    light_msg(_alloc),
    app_show_id(_alloc),
    breakdown_msg(_alloc),
    capability_limit(_alloc),
    diag_name(_alloc),
    nlg_scene_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0ull;
      this->timestamp = 0ull;
      this->appeared_timestamp = 0ull;
      this->code = "";
      this->alert_event_type = 0;
      this->level = 0;
      this->text = "";
      this->is_audio_cycle = false;
      this->light_msg = "";
      this->emotion_id = 0ul;
      this->post_process = 0ul;
      this->app_show_id = "";
      this->breakdown_msg = "";
      this->capability_limit = "";
      this->diag_name = "";
      this->audio_strategy = 0;
      this->nlg_scene_id = "";
    }
  }

  // field types and members
  using _uuid_type =
    uint64_t;
  _uuid_type uuid;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _appeared_timestamp_type =
    uint64_t;
  _appeared_timestamp_type appeared_timestamp;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;
  using _alert_event_type_type =
    uint8_t;
  _alert_event_type_type alert_event_type;
  using _level_type =
    uint8_t;
  _level_type level;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _is_audio_cycle_type =
    bool;
  _is_audio_cycle_type is_audio_cycle;
  using _light_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _light_msg_type light_msg;
  using _emotion_id_type =
    uint32_t;
  _emotion_id_type emotion_id;
  using _post_process_type =
    uint32_t;
  _post_process_type post_process;
  using _app_show_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_show_id_type app_show_id;
  using _breakdown_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _breakdown_msg_type breakdown_msg;
  using _capability_limit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _capability_limit_type capability_limit;
  using _diag_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _diag_name_type diag_name;
  using _audio_strategy_type =
    uint8_t;
  _audio_strategy_type audio_strategy;
  using _disabled_capabilities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disabled_capabilities_type disabled_capabilities;
  using _nlg_scene_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nlg_scene_id_type nlg_scene_id;

  // setters for named parameter idiom
  Type & set__uuid(
    const uint64_t & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__appeared_timestamp(
    const uint64_t & _arg)
  {
    this->appeared_timestamp = _arg;
    return *this;
  }
  Type & set__code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__alert_event_type(
    const uint8_t & _arg)
  {
    this->alert_event_type = _arg;
    return *this;
  }
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__is_audio_cycle(
    const bool & _arg)
  {
    this->is_audio_cycle = _arg;
    return *this;
  }
  Type & set__light_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->light_msg = _arg;
    return *this;
  }
  Type & set__emotion_id(
    const uint32_t & _arg)
  {
    this->emotion_id = _arg;
    return *this;
  }
  Type & set__post_process(
    const uint32_t & _arg)
  {
    this->post_process = _arg;
    return *this;
  }
  Type & set__app_show_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_show_id = _arg;
    return *this;
  }
  Type & set__breakdown_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->breakdown_msg = _arg;
    return *this;
  }
  Type & set__capability_limit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->capability_limit = _arg;
    return *this;
  }
  Type & set__diag_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->diag_name = _arg;
    return *this;
  }
  Type & set__audio_strategy(
    const uint8_t & _arg)
  {
    this->audio_strategy = _arg;
    return *this;
  }
  Type & set__disabled_capabilities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disabled_capabilities = _arg;
    return *this;
  }
  Type & set__nlg_scene_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nlg_scene_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUDIO_STRATEGY_NONE =
    0u;
  static constexpr uint8_t AUDIO_STRATEGY_ONCE =
    1u;
  static constexpr uint8_t AUDIO_STRATEGY_REPEAT =
    2u;
  static constexpr uint8_t AUDIO_STRATEGY_ACTIVATION =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::AlertCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::AlertCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AlertCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AlertCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__AlertCode
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__AlertCode
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlertCode_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->appeared_timestamp != other.appeared_timestamp) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->alert_event_type != other.alert_event_type) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->is_audio_cycle != other.is_audio_cycle) {
      return false;
    }
    if (this->light_msg != other.light_msg) {
      return false;
    }
    if (this->emotion_id != other.emotion_id) {
      return false;
    }
    if (this->post_process != other.post_process) {
      return false;
    }
    if (this->app_show_id != other.app_show_id) {
      return false;
    }
    if (this->breakdown_msg != other.breakdown_msg) {
      return false;
    }
    if (this->capability_limit != other.capability_limit) {
      return false;
    }
    if (this->diag_name != other.diag_name) {
      return false;
    }
    if (this->audio_strategy != other.audio_strategy) {
      return false;
    }
    if (this->disabled_capabilities != other.disabled_capabilities) {
      return false;
    }
    if (this->nlg_scene_id != other.nlg_scene_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlertCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlertCode_

// alias to use template instance with default allocator
using AlertCode =
  aimdk_msgs::msg::AlertCode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AlertCode_<ContainerAllocator>::AUDIO_STRATEGY_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AlertCode_<ContainerAllocator>::AUDIO_STRATEGY_ONCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AlertCode_<ContainerAllocator>::AUDIO_STRATEGY_REPEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AlertCode_<ContainerAllocator>::AUDIO_STRATEGY_ACTIVATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_
