# SPDX-License-Identifier: MIT

if(KS_FATAL_BUILD_TEST)
  add_executable(ks-fatal-unit-tests
    test_panic.cpp
  )

  target_link_libraries(ks-fatal-unit-tests
    PRIVATE
      GTest::gtest_main
      ${PROJECT_NAME}::ks-fatal
  )

  include(GoogleTest)
  gtest_discover_tests(ks-fatal-unit-tests
    DISCOVERY_MODE
      PRE_TEST
    XML_OUTPUT_DIR
      reports
  )
endif()
