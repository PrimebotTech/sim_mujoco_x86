#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aimdk-protocol-ROS" for configuration "Release"
set_property(TARGET aimdk-protocol-ROS APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(aimdk-protocol-ROS PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libaimdk-protocol-ROS.a"
  )

list(APPEND _cmake_import_check_targets aimdk-protocol-ROS )
list(APPEND _cmake_import_check_files_for_aimdk-protocol-ROS "${_IMPORT_PREFIX}/lib/libaimdk-protocol-ROS.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
