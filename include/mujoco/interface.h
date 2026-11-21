#pragma once

#include "data/base/imu.hpp"
#include "data/base/joint.hpp"

namespace sim::mj {

void GetJointState(sim::data::JointStates& states);
void GetArmJointState(sim::data::JointStates& states);
void GetHeadJointState(sim::data::JointStates& states);
void GetLegJointState(sim::data::JointStates& states);
void GetLiftJointState(sim::data::JointStates& states);
void GetWaistJointState(sim::data::JointStates& states);
void GetWheelJointState(sim::data::JointStates& states);

void SetJointCommand(sim::data::JointCommands& commands);
void SetArmJointCommand(sim::data::JointCommands& commands);
void SetLegJointCommand(sim::data::JointCommands& commands);
void SetLiftJointCommand(sim::data::JointCommands& commands);
void SetWaistJointCommand(sim::data::JointCommands& commands);
void SetWheelJointCommand(sim::data::JointCommands& commands);
void SetHeadJointCommand(sim::data::JointCommands& commands);

void GetImuData(sim::data::ImuData& imu_data, std::string imu_frame_type);
// void GetImuData(sim::data::ImuData& imu_data);
// void GetFootSensorData(std::vector<std::vector<double>>& foot_sensor_data);

}  // namespace sim::mj
