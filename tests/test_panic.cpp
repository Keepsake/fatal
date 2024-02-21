#include <gtest/gtest.h>

#include <ks/fatal.hpp>

TEST(PanicTest, CanPanic)
{
  ASSERT_DEATH(ks::fatal::panic(), "");
}
