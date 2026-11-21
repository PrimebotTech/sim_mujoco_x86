# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target joint::joint
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${joint_TARGETS}.
if(joint_TARGETS AND NOT TARGET joint::joint)
  add_library(joint::joint INTERFACE IMPORTED)
  set_target_properties(joint::joint PROPERTIES
    INTERFACE_LINK_LIBRARIES "${joint_TARGETS}")
endif()
