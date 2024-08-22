# SPDX-License-Identifier: MIT

set(CMAKE_FIND_PACKAGE_SORT_ORDER NATURAL)

find_package(KsCMakeHelpers 3.0.0 CONFIG REQUIRED)

if(KS_FATAL_BUILD_TEST)
  find_package(GTest 1.15.0 CONFIG REQUIRED)
endif()
