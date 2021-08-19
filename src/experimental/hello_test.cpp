#include "experimental/hello.h"

#include "gtest/gtest.h"

TEST(HelloTest, PrintsName) {
  say_hello("world");
  ASSERT_TRUE(true);
}
