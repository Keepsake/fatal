# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.23)

project(KsFatal VERSION 1.1.1 LANGUAGES CXX)

include(cmake/options.cmake)
include(cmake/dependencies.cmake)
include(cmake/project_setup.cmake)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(tests)

include(cmake/install.cmake)
