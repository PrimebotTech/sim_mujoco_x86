#pragma once

#include "converts/data/imu.h"
#include "manager/publisher/publisher_base.h"

namespace aimrt::module::publish {

template <class T>
class OdomDataPublisher : public BasePublisher {
  using MessageType = T;

 public:
  OdomDataPublisher();
  ~OdomDataPublisher() override = default;

  bool Init() override;
  void Publish() override;

 private:
  aimrt::channel::PublisherRef publisher_;
};

REGISTER_PUBLISHER_TEMPLATE_IMPL(tf_nav_data, OdomDataPublisher<tf2_msgs::msg::TFMessage>);

}  // namespace aimrt::module::publish