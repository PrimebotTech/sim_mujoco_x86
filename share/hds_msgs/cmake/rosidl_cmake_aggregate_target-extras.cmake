# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target hds_msgs::hds_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${hds_msgs_TARGETS}.
if(hds_msgs_TARGETS AND NOT TARGET hds_msgs::hds_msgs)
  add_library(hds_msgs::hds_msgs INTERFACE IMPORTED)
  set_target_properties(hds_msgs::hds_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${hds_msgs_TARGETS}")
endif()
