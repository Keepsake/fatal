# SPDX-License-Identifier: MIT

include(GenerateExportHeader)
generate_export_header(ks-fatal
  EXPORT_FILE_NAME ks/fatal/detail/symbol_visibility.hpp
)

target_include_directories(
  ks-fatal
  PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)


target_sources(
  ks-fatal
  PUBLIC
    FILE_SET HEADERS
      BASE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR}
      FILES
        ks/fatal.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/ks/fatal/detail/symbol_visibility.hpp
)
