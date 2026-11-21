// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/music_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_MusicState_url_resp_warning
{
public:
  explicit Init_MusicState_url_resp_warning(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::MusicState url_resp_warning(::aimdk_msgs::msg::MusicState::_url_resp_warning_type arg)
  {
    msg_.url_resp_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_search_resp_code
{
public:
  explicit Init_MusicState_search_resp_code(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_url_resp_warning search_resp_code(::aimdk_msgs::msg::MusicState::_search_resp_code_type arg)
  {
    msg_.search_resp_code = std::move(arg);
    return Init_MusicState_url_resp_warning(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_search_resp_tts_text
{
public:
  explicit Init_MusicState_search_resp_tts_text(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_search_resp_code search_resp_tts_text(::aimdk_msgs::msg::MusicState::_search_resp_tts_text_type arg)
  {
    msg_.search_resp_tts_text = std::move(arg);
    return Init_MusicState_search_resp_code(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_search_resp_status
{
public:
  explicit Init_MusicState_search_resp_status(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_search_resp_tts_text search_resp_status(::aimdk_msgs::msg::MusicState::_search_resp_status_type arg)
  {
    msg_.search_resp_status = std::move(arg);
    return Init_MusicState_search_resp_tts_text(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_sp
{
public:
  explicit Init_MusicState_sp(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_search_resp_status sp(::aimdk_msgs::msg::MusicState::_sp_type arg)
  {
    msg_.sp = std::move(arg);
    return Init_MusicState_search_resp_status(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_playback_index
{
public:
  explicit Init_MusicState_playback_index(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_sp playback_index(::aimdk_msgs::msg::MusicState::_playback_index_type arg)
  {
    msg_.playback_index = std::move(arg);
    return Init_MusicState_sp(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_song_list_size
{
public:
  explicit Init_MusicState_song_list_size(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_playback_index song_list_size(::aimdk_msgs::msg::MusicState::_song_list_size_type arg)
  {
    msg_.song_list_size = std::move(arg);
    return Init_MusicState_playback_index(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_song_list_name
{
public:
  explicit Init_MusicState_song_list_name(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_song_list_size song_list_name(::aimdk_msgs::msg::MusicState::_song_list_name_type arg)
  {
    msg_.song_list_name = std::move(arg);
    return Init_MusicState_song_list_size(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_search_command_id
{
public:
  explicit Init_MusicState_search_command_id(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_song_list_name search_command_id(::aimdk_msgs::msg::MusicState::_search_command_id_type arg)
  {
    msg_.search_command_id = std::move(arg);
    return Init_MusicState_song_list_name(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_quality_index
{
public:
  explicit Init_MusicState_quality_index(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_search_command_id quality_index(::aimdk_msgs::msg::MusicState::_quality_index_type arg)
  {
    msg_.quality_index = std::move(arg);
    return Init_MusicState_search_command_id(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_qualities
{
public:
  explicit Init_MusicState_qualities(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_quality_index qualities(::aimdk_msgs::msg::MusicState::_qualities_type arg)
  {
    msg_.qualities = std::move(arg);
    return Init_MusicState_quality_index(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_playable_code
{
public:
  explicit Init_MusicState_playable_code(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_qualities playable_code(::aimdk_msgs::msg::MusicState::_playable_code_type arg)
  {
    msg_.playable_code = std::move(arg);
    return Init_MusicState_qualities(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_trail
{
public:
  explicit Init_MusicState_trail(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_playable_code trail(::aimdk_msgs::msg::MusicState::_trail_type arg)
  {
    msg_.trail = std::move(arg);
    return Init_MusicState_playable_code(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_vip_song
{
public:
  explicit Init_MusicState_vip_song(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_trail vip_song(::aimdk_msgs::msg::MusicState::_vip_song_type arg)
  {
    msg_.vip_song = std::move(arg);
    return Init_MusicState_trail(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_current_time
{
public:
  explicit Init_MusicState_current_time(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_vip_song current_time(::aimdk_msgs::msg::MusicState::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return Init_MusicState_vip_song(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_total_duration
{
public:
  explicit Init_MusicState_total_duration(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_current_time total_duration(::aimdk_msgs::msg::MusicState::_total_duration_type arg)
  {
    msg_.total_duration = std::move(arg);
    return Init_MusicState_current_time(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_artist
{
public:
  explicit Init_MusicState_artist(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_total_duration artist(::aimdk_msgs::msg::MusicState::_artist_type arg)
  {
    msg_.artist = std::move(arg);
    return Init_MusicState_total_duration(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_song_name
{
public:
  explicit Init_MusicState_song_name(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_artist song_name(::aimdk_msgs::msg::MusicState::_song_name_type arg)
  {
    msg_.song_name = std::move(arg);
    return Init_MusicState_artist(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_playback_state
{
public:
  explicit Init_MusicState_playback_state(::aimdk_msgs::msg::MusicState & msg)
  : msg_(msg)
  {}
  Init_MusicState_song_name playback_state(::aimdk_msgs::msg::MusicState::_playback_state_type arg)
  {
    msg_.playback_state = std::move(arg);
    return Init_MusicState_song_name(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

class Init_MusicState_control_command_id
{
public:
  Init_MusicState_control_command_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MusicState_playback_state control_command_id(::aimdk_msgs::msg::MusicState::_control_command_id_type arg)
  {
    msg_.control_command_id = std::move(arg);
    return Init_MusicState_playback_state(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::MusicState>()
{
  return aimdk_msgs::msg::builder::Init_MusicState_control_command_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__BUILDER_HPP_
