function(gen_top_header GEN_FILE SCAN_DIR)
  # 扫描 SCAN_DIR 目录下的所有.h/.hpp文件，排除 GEN_FILE
  file(
    GLOB_RECURSE HEADER_FILES
    RELATIVE ${SCAN_DIR}
    ${SCAN_DIR}/*.h ${SCAN_DIR}/*.hpp)

  # 生成头文件内容
  set(HEADER_CONTENT "#pragma once\n")
  foreach(HEADER_FILE ${HEADER_FILES})
    if(NOT HEADER_FILE STREQUAL ${GEN_FILE})
      set(HEADER_PATH "./${HEADER_FILE}")
      set(HEADER_CONTENT "${HEADER_CONTENT}#include \"${HEADER_PATH}\"\n")
    endif()
  endforeach()

  # 读取旧的头文件内容
  set(OLD_HEADER_CONTENT "")
  if(EXISTS ${GEN_FILE})
    file(READ ${GEN_FILE} OLD_HEADER_CONTENT)
  endif()

  # 如果新的头文件内容和旧的头文件内容不一样，则进行替换
  if(NOT "${OLD_HEADER_CONTENT}" STREQUAL "${HEADER_CONTENT}")
    file(WRITE ${GEN_FILE} "${HEADER_CONTENT}")
    message("Updated ${GEN_FILE}")
  endif()
endfunction()
