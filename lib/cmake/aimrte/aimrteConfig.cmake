# --------------------------------------------------------------------------------------------------------------
# 用于生成工程的 cmake_install.cmake 的模板文件。
# --------------------------------------------------------------------------------------------------------------
# 将使用的模板变量：
#
# PROJECT_NAME：Name of the project
#
# default_libraries：本工程内默认导出的库目标。
#
# basic_libraries：本工程内一定会导出的基础库目标。
#
# relative_install_root：本工程被安装的根目录，相对于本配置文件被安装的目录的相对目录。
#
# module_paths：随本工程一起安装的第三方库的配置文件，相对于安装根目录的所在目录。
# --------------------------------------------------------------------------------------------------------------

if (CMAKE_VERSION VERSION_LESS 2.6.0)
    message(FATAL_ERROR "aimrte requires at least CMake version 2.6.0")
endif()

# -------------------------------------------------------------
## 设置需要导入的本工程组件

# 若用户没有指定组件，则优先导入工程设置默认组件
if (NOT aimrte_FIND_COMPONENTS)
    if (NOT "" STREQUAL "")
        list(APPEND aimrte_FIND_COMPONENTS "")
    endif ()
endif()

# 导入本工程的基础组件
if (NOT "" STREQUAL "")
    list(APPEND aimrte_FIND_COMPONENTS "")
endif ()

# 要求一定要导入至少一个组件
if (NOT aimrte_FIND_COMPONENTS)
    set(aimrte_NOT_FOUND_MESSAGE "The aimrte package requires at least one component.")
    set(aimrte_FOUND False)
    return()
endif ()

# -------------------------------------------------------------
## 设置导入配置选项

# 设置 REQUIRED 参数
set(_aimrte_FIND_PARTS_REQUIRED)

if (aimrte_FIND_REQUIRED)
    set(_aimrte_FIND_PARTS_REQUIRED REQUIRED)
endif()

# 设置 QUIET 参数
set(_aimrte_FIND_PARTS_QUIET)

if (aimrte_FIND_QUIETLY)
    set(_aimrte_FIND_PARTS_QUIET QUIET)
endif()

# -------------------------------------------------------------
## 设置本工程的组件搜索路径，以及本地第三方库的搜索路径

# 设置搜索路径为 aimrteConfig.cmake 所在的目录，但不能影响默认的 cmake 搜索目录：
get_filename_component(_aimrte_install_prefix "${CMAKE_CURRENT_LIST_DIR}" ABSOLUTE)

set(_aimrte_CMAKE_PREFIX_PATH_old ${CMAKE_PREFIX_PATH})
list(APPEND CMAKE_PREFIX_PATH "${_aimrte_install_prefix}" "${_aimrte_install_prefix}/targets")

# 追加本工程模块以及其他第三方模块搜索路径
set(_aimrte_CMAKE_MODULE_PATH_old ${CMAKE_MODULE_PATH})
list(APPEND CMAKE_MODULE_PATH "${_aimrte_install_prefix}" "${_aimrte_install_prefix}/targets")

foreach(module_path )
    get_filename_component(
        _aimrte_one_module_path
        "${CMAKE_CURRENT_LIST_DIR}/../../..//${module_path}"
        ABSOLUTE)

    list(APPEND CMAKE_PREFIX_PATH ${_aimrte_one_module_path})

    unset(_aimrte_one_module_path)
endforeach()

# -------------------------------------------------------------
## 执行自定义的前处理 cmake 流程

file(GLOB _aimrte_prefix_cmake_files ${CMAKE_CURRENT_LIST_DIR}/extra/prefix/*.cmake)

foreach(cmake_file ${_aimrte_prefix_cmake_files})
    include(${cmake_file})
endforeach()

# -------------------------------------------------------------
## 导入指定组件

# 开始搜索指定组件，并且记录相关信息
set(_aimrte_NOT_FOUND_MESSAGE)
set(_aimrte_COMPONENTS_LIBRARIES)

foreach(module ${aimrte_FIND_COMPONENTS})
    # 寻找指定组件
    find_package(${module}
        ${_aimrte_FIND_PARTS_QUIET}
        ${_aimrte_FIND_PARTS_REQUIRED}
        PATHS "${_aimrte_install_prefix}/targets"
        NO_DEFAULT_PATH
        )

    list(APPEND _aimrte_COMPONENTS_LIBRARIES ${module})

    # 若找不到指定组件时，处理错误信息与警告信息
    if (NOT ${module}_FOUND)
        set(_aimrte_${module}_NOT_FOUND_MESSAGE
            "Failed to find aimrte component [${module}] config file "
            "at [${_aimrte_install_prefix}/targets/${module}Config.cmake]")

        if (aimrte_FIND_REQUIRED_${module})
            set(_aimrte_NOT_FOUND_MESSAGE
                "${_aimrte_NOT_FOUND_MESSAGE}${_aimrte_${module}_NOT_FOUND_MESSAGE}\n")
        elseif(NOT aimrte_FIND_QUIETLY)
            message(WARNING "${_aimrte_${module}_NOT_FOUND_MESSAGE}")
        endif ()

        unset(_aimrte_${module}_NOT_FOUND_MESSAGE)
    endif ()

    # 为了向后兼容，需要设置 LIBRARIES 变量
    list(APPEND aimrte_LIBRARIES "${module}")
endforeach()

# -------------------------------------------------------------
## 复原 cmake 变量

set(CMAKE_PREFIX_PATH ${_aimrte_CMAKE_PREFIX_PATH_old})
set(CMAKE_MODULE_PATH ${_aimrte_CMAKE_MODULE_PATH_old})

# -------------------------------------------------------------
## 处理最后的查询结果

if (_aimrte_NOT_FOUND_MESSAGE)
    set(aimrte_NOT_FOUND_MESSAGE "${_aimrte_NOT_FOUND_MESSAGE}")
    set(aimrte_FOUND False)
else()
    if (NOT TARGET aimrte)
        add_library(aimrte IMPORTED INTERFACE)
    endif()

    target_link_libraries(aimrte INTERFACE ${_aimrte_COMPONENTS_LIBRARIES})
    set(aimrte_FOUND True)
endif ()

# -------------------------------------------------------------
## 执行自定义的后处理 cmake 流程

file(GLOB _aimrte_pose_cmake_files
    ${CMAKE_CURRENT_LIST_DIR}/extra/post/*.cmake)

foreach(cmake_file ${_aimrte_pose_cmake_files})
    include(${cmake_file})
endforeach()

# -------------------------------------------------------------
## 清除临时变量

unset(_aimrte_FIND_PARTS_REQUIRED)
unset(_aimrte_FIND_PARTS_QUIET)
unset(_aimrte_CMAKE_PREFIX_PATH_old)
unset(_aimrte_CMAKE_MODULE_PATH_old)
unset(_aimrte_NOT_FOUND_MESSAGE)
unset(_aimrte_COMPONENTS_LIBRARIES)
unset(_aimrte_install_prefix)
unset(_aimrte_prefix_cmake_files)
unset(_aimrte_pose_cmake_files)
