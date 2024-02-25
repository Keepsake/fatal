find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(test-panic
  test_panic.cpp
)

target_link_libraries(test-panic
  PRIVATE
    GTest::gtest_main ks-fatal
)

gtest_discover_tests(test-panic
  DISCOVERY_MODE
    PRE_TEST
  XML_OUTPUT_DIR
    reports
)
