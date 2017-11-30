
# Generated by cps2cmake
# https://github.com/mwoehlke/pycps

if(CMAKE_MAJOR_VERSION LESS 3)
  message(FATAL_ERROR "CMake >= 3.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 3.0)
set(CMAKE_IMPORT_FILE_VERSION 1)

if(CMAKE_VERSION VERSION_LESS 3.9.0)
  # Imported from CMake 3.9.0
  macro(find_dependency dep)
    if (NOT ${dep}_FOUND)
      set(cmake_fd_quiet_arg)
      if(${CMAKE_FIND_PACKAGE_NAME}_FIND_QUIETLY)
        set(cmake_fd_quiet_arg QUIET)
      endif()
      set(cmake_fd_required_arg)
      if(${CMAKE_FIND_PACKAGE_NAME}_FIND_REQUIRED)
        set(cmake_fd_required_arg REQUIRED)
      endif()

      get_property(cmake_fd_alreadyTransitive GLOBAL PROPERTY
        _CMAKE_${dep}_TRANSITIVE_DEPENDENCY
      )

      find_package(${dep} ${ARGN}
        ${cmake_fd_quiet_arg}
        ${cmake_fd_required_arg}
      )

      if(NOT DEFINED cmake_fd_alreadyTransitive OR cmake_fd_alreadyTransitive)
        set_property(GLOBAL PROPERTY _CMAKE_${dep}_TRANSITIVE_DEPENDENCY TRUE)
      endif()

      if (NOT ${dep}_FOUND)
        set(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE "${CMAKE_FIND_PACKAGE_NAME} could not be found because dependency ${dep} could not be found.")
        set(${CMAKE_FIND_PACKAGE_NAME}_FOUND False)
        return()
      endif()
      set(cmake_fd_required_arg)
      set(cmake_fd_quiet_arg)
      set(cmake_fd_exact_arg)
    endif()
  endmacro()
else()
  include(CMakeFindDependencyMacro)
endif()


get_filename_component(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}" PATH)
get_filename_component(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}" PATH)
get_filename_component(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}" PATH)

if(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX STREQUAL "/")
  set(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX)
endif()

find_dependency(lcm CONFIG HINTS "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/cmake/lcm")
find_dependency(bot2-core-lcmtypes CONFIG HINTS "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/cmake/bot2-core-lcmtypes")
set(_expectedTargets libbot::bot2-lcmgl-java libbot::lcmtypes_bot2-lcmgl-cpp libbot::lcmtypes_bot2-procman libbot::lcmtypes_bot2-lcmgl-java libbot::lcmtypes_bot2-procman-cpp libbot::bot2-param-client libbot::bot-spy libbot::lcmtypes_bot2-param libbot::bot2-lcmgl-client libbot::lcmtypes_bot2-frames-java libbot::bot-param-tool libbot::bot2-lcmgl-render libbot::lcmtypes_bot2-param-java libbot::bot-procman-deputy libbot::bot-param-server libbot::bot-lcm-logfilter libbot::lcmtypes_bot2-frames libbot::bot-lcm-tunnel libbot::bot-lcm-who libbot::bot2-frames libbot::lcmtypes_bot2-param-cpp libbot::bot-param-dump libbot::lcmtypes_bot2-frames-cpp libbot::bot-lcm-logsplice libbot::lcmtypes_bot2-lcmgl libbot::lcmtypes_bot2-procman-java libbot::bot-procman-sheriff libbot::bot2-core)

set(_targetsDefined)
set(_targetsNotDefined)

foreach(_expectedTarget ${_expectedTargets})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)

add_library(libbot::bot2-lcmgl-java STATIC IMPORTED)
set_target_properties(libbot::bot2-lcmgl-java PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/bot2_lcmgl.jar"
  JAR_FILE "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/bot2_lcmgl.jar"
)

add_library(libbot::lcmtypes_bot2-lcmgl-cpp INTERFACE IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-lcmgl-cpp PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_library(libbot::lcmtypes_bot2-procman SHARED IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-procman PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/liblcmtypes_bot2_procman_c.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_library(libbot::lcmtypes_bot2-lcmgl-java STATIC IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-lcmgl-java PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_lcmgl.jar"
  JAR_FILE "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_lcmgl.jar"
)

add_library(libbot::lcmtypes_bot2-procman-cpp INTERFACE IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-procman-cpp PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_library(libbot::bot2-param-client SHARED IMPORTED)
set_target_properties(libbot::bot2-param-client PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/libbot2_param_client.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/libbot"
  INTERFACE_LINK_LIBRARIES "libbot::bot2-core;libbot::lcmtypes_bot2-param;lcm::lcm;-lglib-2.0;-lgthread-2.0"
)

add_executable(libbot::bot-spy IMPORTED)
set_target_properties(libbot::bot-spy PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-spy"
)

add_library(libbot::lcmtypes_bot2-param SHARED IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-param PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/liblcmtypes_bot2_param_c.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_library(libbot::bot2-lcmgl-client SHARED IMPORTED)
set_target_properties(libbot::bot2-lcmgl-client PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/libbot2_lcmgl_client.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/libbot"
  INTERFACE_LINK_LIBRARIES "libbot::lcmtypes_bot2-lcmgl;lcm::lcm;-lglib-2.0"
)

add_library(libbot::lcmtypes_bot2-frames-java STATIC IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-frames-java PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_frames.jar"
  JAR_FILE "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_frames.jar"
)

add_executable(libbot::bot-param-tool IMPORTED)
set_target_properties(libbot::bot-param-tool PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-param-tool"
)

add_library(libbot::bot2-lcmgl-render SHARED IMPORTED)
set_target_properties(libbot::bot2-lcmgl-render PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/libbot2_lcmgl_client.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/libbot"
  INTERFACE_LINK_LIBRARIES "libbot::bot2-lcmgl-client;libbot::lcmtypes_bot2-lcmgl;lcm::lcm"
)

add_library(libbot::lcmtypes_bot2-param-java STATIC IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-param-java PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_param.jar"
  JAR_FILE "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_param.jar"
)

add_executable(libbot::bot-procman-deputy IMPORTED)
set_target_properties(libbot::bot-procman-deputy PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-procman-deputy"
)

add_executable(libbot::bot-param-server IMPORTED)
set_target_properties(libbot::bot-param-server PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-param-server"
)

add_executable(libbot::bot-lcm-logfilter IMPORTED)
set_target_properties(libbot::bot-lcm-logfilter PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-lcm-logfilter"
)

add_library(libbot::lcmtypes_bot2-frames SHARED IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-frames PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/liblcmtypes_bot2_frames_c.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_executable(libbot::bot-lcm-tunnel IMPORTED)
set_target_properties(libbot::bot-lcm-tunnel PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-lcm-tunnel"
)

add_executable(libbot::bot-lcm-who IMPORTED)
set_target_properties(libbot::bot-lcm-who PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-lcm-who"
)

add_library(libbot::bot2-frames SHARED IMPORTED)
set_target_properties(libbot::bot2-frames PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/libbot2_frames.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/libbot"
  INTERFACE_LINK_LIBRARIES "libbot::bot2-core;libbot::bot2-param-client;libbot::lcmtypes_bot2-frames;lcm::lcm;-lglib-2.0"
)

add_library(libbot::lcmtypes_bot2-param-cpp INTERFACE IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-param-cpp PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_executable(libbot::bot-param-dump IMPORTED)
set_target_properties(libbot::bot-param-dump PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-param-dump"
)

add_library(libbot::lcmtypes_bot2-frames-cpp INTERFACE IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-frames-cpp PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_executable(libbot::bot-lcm-logsplice IMPORTED)
set_target_properties(libbot::bot-lcm-logsplice PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-lcm-logsplice"
)

add_library(libbot::lcmtypes_bot2-lcmgl SHARED IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-lcmgl PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/liblcmtypes_bot2_lcmgl_c.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/lcmtypes"
  INTERFACE_LINK_LIBRARIES "lcm::lcm-coretypes"
)

add_library(libbot::lcmtypes_bot2-procman-java STATIC IMPORTED)
set_target_properties(libbot::lcmtypes_bot2-procman-java PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_procman.jar"
  JAR_FILE "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/share/java/lcmtypes_bot2_procman.jar"
)

add_executable(libbot::bot-procman-sheriff IMPORTED)
set_target_properties(libbot::bot-procman-sheriff PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/bin/bot-procman-sheriff"
)

add_library(libbot::bot2-core SHARED IMPORTED)
set_target_properties(libbot::bot2-core PROPERTIES
  IMPORTED_LOCATION "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/lib/libbot2_core.so"
  INTERFACE_INCLUDE_DIRECTORIES "${${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX}/include/libbot"
  INTERFACE_LINK_LIBRARIES "bot2-core-lcmtypes::lcmtypes_bot2-core;lcm::lcm;-lglib-2.0"
)

set(libbot_LIBRARIES "libbot::bot2-core")
set(libbot_INCLUDE_DIRS "")


unset(${CMAKE_FIND_PACKAGE_NAME}_IMPORT_PREFIX)
unset(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
