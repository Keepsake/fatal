cmake_minimum_required(VERSION 3.23)

project(KsFatal LANGUAGES CXX)

find_package(KsCMakeHelpers CONFIG REQUIRED)

ks_setup()

add_subdirectory(src)

if(BUILD_TESTING)
  find_package(GTest CONFIG REQUIRED)
  add_subdirectory(tests)
endif()
