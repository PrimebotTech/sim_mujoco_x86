include(FetchContent)

message(STATUS "get aimrte ...")

FetchContent_Declare(
  aimrte #
  GIT_REPOSITORY https://${CODE_IQIYUAN_COM_HTTP_TOKEN}code.iqiyuan-robot.com/software/qiyuan/modules/aimrte.git #
  GIT_TAG feat/t1)

set(AIMRTE_BUILD_SOME_OF_ROBOT_PROTOCOLS "mc;hal")

set(AIMRTE_IMPORT_PROTOCOL_ONLY ON)
set(AIMRTE_BUILD_ALL_OF_OMP_PROTOCOLS OFF)

FetchContent_GetProperties(aimrte)

if(NOT aimrte_POPULATED)
  FetchContent_MakeAvailable(aimrte)
  aimrte_project_init()
endif()
