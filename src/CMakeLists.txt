add_library(ks-fatal 
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

target_compile_features(
  ks-fatal
  PUBLIC
    cxx_std_17
)

ks_install(
  TARGETS
    ks-fatal
)
