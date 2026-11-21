# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target aimrt_msgs::aimrt_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${aimrt_msgs_TARGETS}.
if(aimrt_msgs_TARGETS AND NOT TARGET aimrt_msgs::aimrt_msgs)
  add_library(aimrt_msgs::aimrt_msgs INTERFACE IMPORTED)
  set_target_properties(aimrt_msgs::aimrt_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${aimrt_msgs_TARGETS}")
endif()
