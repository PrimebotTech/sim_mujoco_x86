include(FetchContent)

message(STATUS "get aimrt ...")

FetchContent_Declare(
  aimrt #
  GIT_REPOSITORY https://${CODE_IQIYUAN_COM_HTTP_TOKEN}code.iqiyuan-robot.com/software/qiyuan/modules/aimrt.git #
  GIT_TAG v1.2.0-rc1)

FetchContent_GetProperties(aimrt)

if(NOT aimrt_POPULATED)

  set(AIMRT_BUILD_TESTS
      OFF
      CACHE BOOL "")
  set(AIMRT_BUILD_EXAMPLES
      OFF
      CACHE BOOL "")
  set(AIMRT_BUILD_DOCUMENT
      OFF
      CACHE BOOL "")

  set(AIMRT_BUILD_CLI_TOOLS
      OFF
      CACHE BOOL "")
  set(AIMRT_BUILD_PYTHON_RUNTIME
      OFF
      CACHE BOOL "")

  set(AIMRT_BUILD_RUNTIME
      ON
      CACHE BOOL "")
  set(AIMRT_USE_FMT_LIB
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_WITH_PROTOBUF
      ON
      CACHE BOOL "")
  set(AIMRT_USE_LOCAL_PROTOC_COMPILER
      OFF
      CACHE BOOL "")
  set(AIMRT_USE_PROTOC_PYTHON_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_WITH_ROS2
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_ROS2_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_NET_PLUGIN
      ON
      CACHE BOOL "")

  set(AIMRT_BUILD_MQTT_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_RECORD_PLAYBACK_PLUGIN
      OFF
      CACHE BOOL "")
  set(AIMRT_BUILD_TIME_MANIPULATOR_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_PARAMETER_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_LOG_CONTROL_PLUGIN
      ON
      CACHE BOOL "")
  set(AIMRT_BUILD_OPENTELEMETRY_PLUGIN
      OFF
      CACHE BOOL "")

  FetchContent_MakeAvailable(aimrt)
endif()
