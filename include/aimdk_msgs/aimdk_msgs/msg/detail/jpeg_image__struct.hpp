// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/JpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__JpegImage __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__JpegImage __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JpegImage_
{
  using Type = JpegImage_<ContainerAllocator>;

  explicit JpegImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = "";
      this->device = "";
      this->width = 0ul;
      this->height = 0ul;
      this->framerate = 0ul;
      this->exposure = 0ul;
      this->gain = 0ul;
    }
  }

  explicit JpegImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_id(_alloc),
    device(_alloc),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = "";
      this->device = "";
      this->width = 0ul;
      this->height = 0ul;
      this->framerate = 0ul;
      this->exposure = 0ul;
      this->gain = 0ul;
    }
  }

  // field types and members
  using _camera_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_id_type camera_id;
  using _device_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_type device;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _framerate_type =
    uint32_t;
  _framerate_type framerate;
  using _exposure_type =
    uint32_t;
  _exposure_type exposure;
  using _gain_type =
    uint32_t;
  _gain_type gain;
  using _image_type =
    sensor_msgs::msg::CompressedImage_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__camera_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__device(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__framerate(
    const uint32_t & _arg)
  {
    this->framerate = _arg;
    return *this;
  }
  Type & set__exposure(
    const uint32_t & _arg)
  {
    this->exposure = _arg;
    return *this;
  }
  Type & set__gain(
    const uint32_t & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::CompressedImage_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::JpegImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::JpegImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JpegImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JpegImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__JpegImage
    std::shared_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__JpegImage
    std::shared_ptr<aimdk_msgs::msg::JpegImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JpegImage_ & other) const
  {
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->device != other.device) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->framerate != other.framerate) {
      return false;
    }
    if (this->exposure != other.exposure) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const JpegImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JpegImage_

// alias to use template instance with default allocator
using JpegImage =
  aimdk_msgs::msg::JpegImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__STRUCT_HPP_
