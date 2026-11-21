#pragma once

// #include <sensor_msgs/msg/joint_command.hpp>
#include "manager/subscriber/subscriber_base.h"
#include "manager/subscriber/subscriber_tag.h"
// #include "aimdk/protocol/hal/joint/joint_channel.pb.h"
#include <aimdk_msgs/msg/joint_command_array.hpp>
#include "joint/msg/detail/joint_command__struct.hpp"
#include "joint/msg/joint_command.hpp"

namespace aimrt::module::subscribe {

template <class T, data::JointTag Tag>
class JointCommandSubscriber : public BaseSubscriber {
  using MessageType = T;

 public:
  JointCommandSubscriber();
  ~JointCommandSubscriber() override = default;

  bool Init() override;

 private:
  void Handle(const MessageType& msg);
};

template class JointCommandSubscriber<aimdk_msgs::msg::JointCommandArray, data::JointTag::MC_JOINT>;
template class JointCommandSubscriber<aimdk_msgs::msg::JointCommandArray, data::JointTag::HAL_JOINT>;
using MC_JointCommandSubscriber = JointCommandSubscriber<aimdk_msgs::msg::JointCommandArray, data::JointTag::MC_JOINT>;
using HAL_JointCommandSubscriber = JointCommandSubscriber<aimdk_msgs::msg::JointCommandArray, data::JointTag::HAL_JOINT>;

REGISTER_SUBSCRIBER_IMPL(joint_command, MC_JointCommandSubscriber);
REGISTER_SUBSCRIBER_IMPL(joint_mujoco_command, HAL_JointCommandSubscriber);

}  // namespace aimrt::module::subscribe