// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__MusicState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__MusicState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MusicState_
{
  using Type = MusicState_<ContainerAllocator>;

  explicit MusicState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_command_id = 0ull;
      this->playback_state = 0l;
      this->song_name = "";
      this->total_duration = 0.0;
      this->current_time = 0.0;
      this->vip_song = false;
      this->trail = false;
      this->playable_code = 0l;
      this->quality_index = 0l;
      this->search_command_id = 0ull;
      this->song_list_name = "";
      this->song_list_size = 0l;
      this->playback_index = 0l;
      this->sp = 0l;
      this->search_resp_status = 0l;
      this->search_resp_tts_text = "";
      this->search_resp_code = "";
      this->url_resp_warning = "";
    }
  }

  explicit MusicState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : song_name(_alloc),
    song_list_name(_alloc),
    search_resp_tts_text(_alloc),
    search_resp_code(_alloc),
    url_resp_warning(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_command_id = 0ull;
      this->playback_state = 0l;
      this->song_name = "";
      this->total_duration = 0.0;
      this->current_time = 0.0;
      this->vip_song = false;
      this->trail = false;
      this->playable_code = 0l;
      this->quality_index = 0l;
      this->search_command_id = 0ull;
      this->song_list_name = "";
      this->song_list_size = 0l;
      this->playback_index = 0l;
      this->sp = 0l;
      this->search_resp_status = 0l;
      this->search_resp_tts_text = "";
      this->search_resp_code = "";
      this->url_resp_warning = "";
    }
  }

  // field types and members
  using _control_command_id_type =
    uint64_t;
  _control_command_id_type control_command_id;
  using _playback_state_type =
    int32_t;
  _playback_state_type playback_state;
  using _song_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _song_name_type song_name;
  using _artist_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _artist_type artist;
  using _total_duration_type =
    double;
  _total_duration_type total_duration;
  using _current_time_type =
    double;
  _current_time_type current_time;
  using _vip_song_type =
    bool;
  _vip_song_type vip_song;
  using _trail_type =
    bool;
  _trail_type trail;
  using _playable_code_type =
    int32_t;
  _playable_code_type playable_code;
  using _qualities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _qualities_type qualities;
  using _quality_index_type =
    int32_t;
  _quality_index_type quality_index;
  using _search_command_id_type =
    uint64_t;
  _search_command_id_type search_command_id;
  using _song_list_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _song_list_name_type song_list_name;
  using _song_list_size_type =
    int32_t;
  _song_list_size_type song_list_size;
  using _playback_index_type =
    int32_t;
  _playback_index_type playback_index;
  using _sp_type =
    int32_t;
  _sp_type sp;
  using _search_resp_status_type =
    int32_t;
  _search_resp_status_type search_resp_status;
  using _search_resp_tts_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _search_resp_tts_text_type search_resp_tts_text;
  using _search_resp_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _search_resp_code_type search_resp_code;
  using _url_resp_warning_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _url_resp_warning_type url_resp_warning;

  // setters for named parameter idiom
  Type & set__control_command_id(
    const uint64_t & _arg)
  {
    this->control_command_id = _arg;
    return *this;
  }
  Type & set__playback_state(
    const int32_t & _arg)
  {
    this->playback_state = _arg;
    return *this;
  }
  Type & set__song_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->song_name = _arg;
    return *this;
  }
  Type & set__artist(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->artist = _arg;
    return *this;
  }
  Type & set__total_duration(
    const double & _arg)
  {
    this->total_duration = _arg;
    return *this;
  }
  Type & set__current_time(
    const double & _arg)
  {
    this->current_time = _arg;
    return *this;
  }
  Type & set__vip_song(
    const bool & _arg)
  {
    this->vip_song = _arg;
    return *this;
  }
  Type & set__trail(
    const bool & _arg)
  {
    this->trail = _arg;
    return *this;
  }
  Type & set__playable_code(
    const int32_t & _arg)
  {
    this->playable_code = _arg;
    return *this;
  }
  Type & set__qualities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->qualities = _arg;
    return *this;
  }
  Type & set__quality_index(
    const int32_t & _arg)
  {
    this->quality_index = _arg;
    return *this;
  }
  Type & set__search_command_id(
    const uint64_t & _arg)
  {
    this->search_command_id = _arg;
    return *this;
  }
  Type & set__song_list_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->song_list_name = _arg;
    return *this;
  }
  Type & set__song_list_size(
    const int32_t & _arg)
  {
    this->song_list_size = _arg;
    return *this;
  }
  Type & set__playback_index(
    const int32_t & _arg)
  {
    this->playback_index = _arg;
    return *this;
  }
  Type & set__sp(
    const int32_t & _arg)
  {
    this->sp = _arg;
    return *this;
  }
  Type & set__search_resp_status(
    const int32_t & _arg)
  {
    this->search_resp_status = _arg;
    return *this;
  }
  Type & set__search_resp_tts_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->search_resp_tts_text = _arg;
    return *this;
  }
  Type & set__search_resp_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->search_resp_code = _arg;
    return *this;
  }
  Type & set__url_resp_warning(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->url_resp_warning = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t PLAYBACK_STATE_IDLE =
    0;
  static constexpr int32_t PLAYBACK_STATE_PLAYING =
    1;
  static constexpr int32_t PLAYBACK_STATE_PAUSED =
    2;
  static constexpr int32_t PLAYBACK_STATE_STOPED =
    4;
  static constexpr int32_t PLAYBACK_STATE_ERROR =
    5;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::MusicState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::MusicState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MusicState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MusicState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__MusicState
    std::shared_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__MusicState
    std::shared_ptr<aimdk_msgs::msg::MusicState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MusicState_ & other) const
  {
    if (this->control_command_id != other.control_command_id) {
      return false;
    }
    if (this->playback_state != other.playback_state) {
      return false;
    }
    if (this->song_name != other.song_name) {
      return false;
    }
    if (this->artist != other.artist) {
      return false;
    }
    if (this->total_duration != other.total_duration) {
      return false;
    }
    if (this->current_time != other.current_time) {
      return false;
    }
    if (this->vip_song != other.vip_song) {
      return false;
    }
    if (this->trail != other.trail) {
      return false;
    }
    if (this->playable_code != other.playable_code) {
      return false;
    }
    if (this->qualities != other.qualities) {
      return false;
    }
    if (this->quality_index != other.quality_index) {
      return false;
    }
    if (this->search_command_id != other.search_command_id) {
      return false;
    }
    if (this->song_list_name != other.song_list_name) {
      return false;
    }
    if (this->song_list_size != other.song_list_size) {
      return false;
    }
    if (this->playback_index != other.playback_index) {
      return false;
    }
    if (this->sp != other.sp) {
      return false;
    }
    if (this->search_resp_status != other.search_resp_status) {
      return false;
    }
    if (this->search_resp_tts_text != other.search_resp_tts_text) {
      return false;
    }
    if (this->search_resp_code != other.search_resp_code) {
      return false;
    }
    if (this->url_resp_warning != other.url_resp_warning) {
      return false;
    }
    return true;
  }
  bool operator!=(const MusicState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MusicState_

// alias to use template instance with default allocator
using MusicState =
  aimdk_msgs::msg::MusicState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MusicState_<ContainerAllocator>::PLAYBACK_STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MusicState_<ContainerAllocator>::PLAYBACK_STATE_PLAYING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MusicState_<ContainerAllocator>::PLAYBACK_STATE_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MusicState_<ContainerAllocator>::PLAYBACK_STATE_STOPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t MusicState_<ContainerAllocator>::PLAYBACK_STATE_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__STRUCT_HPP_
