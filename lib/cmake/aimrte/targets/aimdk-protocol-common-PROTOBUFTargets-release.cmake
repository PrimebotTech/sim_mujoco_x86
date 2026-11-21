#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aimdk-protocol-common-PROTOBUF" for configuration "Release"
set_property(TARGET aimdk-protocol-common-PROTOBUF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(aimdk-protocol-common-PROTOBUF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libaimdk-protocol-common-PROTOBUF.a"
  )

list(APPEND _cmake_import_check_targets aimdk-protocol-common-PROTOBUF )
list(APPEND _cmake_import_check_files_for_aimdk-protocol-common-PROTOBUF "${_IMPORT_PREFIX}/lib/libaimdk-protocol-common-PROTOBUF.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
