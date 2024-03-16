add_library(ks-fatal STATIC
  fatal.cpp
)

target_include_directories(
  ks-fatal
  PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
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
      FILES
        ${PROJECT_SOURCE_DIR}/include/ks/fatal.hpp
)

ks_install(
  TARGETS
    ks-fatal
)
