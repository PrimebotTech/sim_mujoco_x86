include(FetchContent)

message(STATUS "get mujoco ...")

set(MUJOCO_THIRD_PARTY_BASE_URL
    "https://artifactory.iqiyuan-robot.com/artifactory/third_party/mujoco"
    CACHE STRING "Base URL for internal mirrors of nested MuJoCo dependencies")

function(_coreon_declare_archive_dep dep_name archive_name)
  FetchContent_Declare(
    ${dep_name}
    URL ${MUJOCO_THIRD_PARTY_BASE_URL}/${archive_name}
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
endfunction()

function(_coreon_declare_sdflib_archive_dep dep_name archive_name)
  FetchContent_Declare(
    ${dep_name}
    URL ${MUJOCO_THIRD_PARTY_BASE_URL}/SdfLib/${archive_name}
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
endfunction()

function(_coreon_declare_mujoco_third_party_archives)
  # FetchContent keeps the first declaration for a dependency name. Declaring
  # MuJoCo's nested packages here prevents MuJoCo/SdfLib from later replacing
  # them with their default GitHub GIT_REPOSITORY declarations.
  _coreon_declare_archive_dep(lodepng lodepng-b4ed2cd7ecf61d29076169b49199371456d4f90b.tar.gz)
  _coreon_declare_archive_dep(marchingcubecpp MarchingCubeCpp-f03a1b3ec29b1d7d865691ca8aea4f1eb2c2873d.tar.gz)
  _coreon_declare_archive_dep(qhull qhull-0c8fc90d2037588024d9964515c1e684f6007ecc.tar.gz)
  _coreon_declare_archive_dep(tinyxml2 tinyxml2-9a89766acc42ddfa9e7133c7d81a5bda108a0ade.tar.gz)
  _coreon_declare_archive_dep(tinyobjloader tinyobjloader-1421a10d6ed9742f5b2c1766d22faa6cfbc56248.tar.gz)
  _coreon_declare_archive_dep(sdflib SdfLib-1927bee6bb8225258a39c8cbf14e18a4d50409ae.tar.gz)
  _coreon_declare_archive_dep(ccd libccd-7931e764a19ef6b21b443376c699bbc9c6d4fba8.tar.gz)
  _coreon_declare_archive_dep(glfw3 glfw-7482de6071d21db77a7236155da44c172a7f6c9e.tar.gz)

  _coreon_declare_sdflib_archive_dep(glm_lib glm-89e52e327d7a3ae61eb402850ba36ac4dd111987.tar.gz)
  _coreon_declare_sdflib_archive_dep(spdlog_lib spdlog-eb3220622e73a4889eee355ffa37972b3cac3df5.tar.gz)
  _coreon_declare_sdflib_archive_dep(cereal_lib cereal-ebef1e929807629befafbb2918ea1a08c7194554.tar.gz)
endfunction()

# set(mujoco_DOWNLOAD_URL
#     "https://github.com/deepmind/mujoco/archive/3.1.6.tar.gz"
#     CACHE STRING "")
# cmake-format: off
# FetchContent_Declare(
#   mujoco
#   URL ${mujoco_DOWNLOAD_URL}
#   DOWNLOAD_EXTRACT_TIMESTAMP TRUE
#   OVERRIDE_FIND_PACKAGE
# )
# cmake-format: on

set(mujoco_REPOSITORY
    # https://code.iqiyuan-robot.com/software/qiyuan/modules/mojoco.git
    https://${CODE_IQIYUAN_COM_HTTP_TOKEN}code.iqiyuan-robot.com/software/qiyuan/modules/mojoco.git
    CACHE STRING "")

FetchContent_Declare(
  mujoco #
  GIT_REPOSITORY ${mujoco_REPOSITORY} #
  GIT_TAG 3.1.6)

FetchContent_GetProperties(mujoco)
if(NOT mujoco_POPULATED)
  set(MUJOCO_BUILD_EXAMPLES
      OFF
      CACHE BOOL "")
  set(MUJOCO_BUILD_SIMULATE
      ON
      CACHE BOOL "")
  set(MUJOCO_BUILD_TESTS
      OFF
      CACHE BOOL "")
  set(MUJOCO_TEST_PYTHON_UTIL
      OFF
      CACHE BOOL "")
  set(SIMULATE_BUILD_EXECUTABLE
      OFF
      CACHE BOOL "")

  _coreon_declare_mujoco_third_party_archives()
  FetchContent_MakeAvailable(mujoco)
endif()
