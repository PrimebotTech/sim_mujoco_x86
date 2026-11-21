#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aimdk-protocol-hds-PROTOBUF" for configuration "Release"
set_property(TARGET aimdk-protocol-hds-PROTOBUF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(aimdk-protocol-hds-PROTOBUF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libaimdk-protocol-hds-PROTOBUF.a"
  )

list(APPEND _cmake_import_check_targets aimdk-protocol-hds-PROTOBUF )
list(APPEND _cmake_import_check_files_for_aimdk-protocol-hds-PROTOBUF "${_IMPORT_PREFIX}/lib/libaimdk-protocol-hds-PROTOBUF.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
