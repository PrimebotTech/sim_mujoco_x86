#pragma once

// #include <sensor_msgs/msg/joint_state.hpp>

// #include "joint_command/msg/joint_command.hpp"
// #include "joint/msg/joint_state.hpp"
// #include "joint_state/msg/joint_state.hpp"

#include "data/base/joint.hpp"
#include "joint/msg/joint_command.hpp"

#include <aimdk_msgs/msg/joint_command.hpp>
#include <aimdk_msgs/msg/joint_command_array.hpp>

namespace sim::converts {

// void Converts(sensor_msgs::msg::JointState& out, const sim::data::JointCommands& in);
// void Converts(joint_state::msg::JointState& out, const sim::data::JointCommands& in);
// void Converts(joint_command::msg::JointCommand& out, const sim::data::JointCommands& in);
void Converts(::joint::msg::JointCommand& out, const sim::data::JointCommands& in);

// void Converts(sim::data::JointCommands& out, const sensor_msgs::msg::JointState& in);
// void Converts(sim::data::JointCommands& out, const joint_state::msg::JointState& in);
// void Converts(sim::data::JointCommands& out, const joint_command::msg::JointCommand& in);
void Converts(sim::data::JointCommands& out, const ::joint::msg::JointCommand& in);

void Converts(aimdk_msgs::msg::JointCommandArray& out, const data::JointCommands& in);

void Converts(data::JointCommands& out, const aimdk_msgs::msg::JointCommandArray& in);
}  // namespace sim::converts
