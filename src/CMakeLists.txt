# SPDX-License-Identifier: MIT

add_library(ks-fatal
  fatal.cpp
)

add_library(${PROJECT_NAME}::ks-fatal ALIAS ks-fatal)

target_include_directories(
  ks-fatal
  PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
    "$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

set_target_properties(
  ks-fatal
  PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
)

target_sources(
  ks-fatal
  PUBLIC
    FILE_SET headers
      TYPE
        HEADERS
      BASE_DIRS
        ${PROJECT_SOURCE_DIR}/include/
        ${PROJECT_BINARY_DIR}/include/
      FILES
        ${PROJECT_SOURCE_DIR}/include/ks/fatal.hpp
        ${PROJECT_BINARY_DIR}/include/ks/fatal/detail/symbol_visibility.hpp
)
