# SPDX-License-Identifier: MIT

add_library(ks-fatal
  fatal.cpp
)

add_library(${PROJECT_NAME}::ks-fatal ALIAS ks-fatal)

set_target_properties(
  ks-fatal
  PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
)
