include(FetchContent)

message(STATUS "get agibot_robot_model ...")

FetchContent_Declare(
  agibot_robot_model #
  GIT_REPOSITORY https://${CODE_AGIBOT_COM_HTTP_TOKEN}code.agibot.com/agibot_playground/aima/robot_model.git #
  GIT_TAG f2c0c9655c3a6acd7d2739e3d8d03e4b077ca7f2) # arm_planning_v0.5.0

FetchContent_GetProperties(agibot_robot_model)

if(NOT agibot_robot_model_POPULATED)
  FetchContent_MakeAvailable(agibot_robot_model)
endif()
