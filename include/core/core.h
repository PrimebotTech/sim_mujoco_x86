#pragma once
#include <memory>
#include <string>
#include "aimrt_module_cpp_interface/co/async_scope.h"
#include "aimrt_module_cpp_interface/co/task.h"
#include "aimrt_module_cpp_interface/module_base.h"
#include "manager/publisher/publisher_manager.h"
#include "manager/subscriber/subscriber_manager.h"

#include "module/main/mujoco/simulation_controller.h"

namespace sim::module {

struct ModelCfg {
  std::string gui_executor;
  std::string sim_executor;
  std::string simulation_model;  // simulation model path
  std::string robot_model;       // robot model path
};
PARAM_REFLECTION(ModelCfg, gui_executor, sim_executor, simulation_model, robot_model);

class MujocoSimModule : public aimrt::ModuleBase {
 public:
  MujocoSimModule() = default;
  ~MujocoSimModule() override = default;

  aimrt::ModuleInfo Info() const noexcept override { return aimrt::ModuleInfo{.name = "MujocoSimModule"}; }

  bool Initialize(aimrt::CoreRef core) noexcept override;

  bool Start() noexcept override;

  void Shutdown() noexcept override;

 private:
  // bool is_running_;
  std::atomic<bool> is_running_;
  ModelCfg config_;
  aimrt::CoreRef core_;

  aimrt::executor::ExecutorRef gui_executor_;
  aimrt::executor::ExecutorRef sim_executor_;
  sim::mj::SimulationController sim_controller_;
  std::shared_ptr<aimrt::module::publish::PublisherManager> publisher_manager_ptr_;
  std::shared_ptr<aimrt::module::subscribe::SubscriberManager> subscriber_manager_ptr_;
};

}  // namespace sim::module