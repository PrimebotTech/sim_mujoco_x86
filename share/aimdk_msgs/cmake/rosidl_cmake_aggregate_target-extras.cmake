# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target aimdk_msgs::aimdk_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${aimdk_msgs_TARGETS}.
if(aimdk_msgs_TARGETS AND NOT TARGET aimdk_msgs::aimdk_msgs)
  add_library(aimdk_msgs::aimdk_msgs INTERFACE IMPORTED)
  set_target_properties(aimdk_msgs::aimdk_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${aimdk_msgs_TARGETS}")
endif()
