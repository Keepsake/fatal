cmake_minimum_required(VERSION 3.23)

project(KsFatal LANGUAGES CXX)

find_package(KsCMakeHelpers CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

ks_setup()

add_subdirectory(src)

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
