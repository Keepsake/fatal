ks_add_unit_test(test-panic
  SOURCES
    test_panic.cpp
  LIBS
    PRIVATE
      GTest::gtest_main
      ks-fatal
)
