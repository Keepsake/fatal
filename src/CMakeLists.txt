add_library(ks-fatal
  fatal.cpp
)

target_include_directories(
  ks-fatal
  PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
    "$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
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

ks_install(
  TARGETS
    ks-fatal
)
