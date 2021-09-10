#include "expert_c_programming/intro/max_time.h"

#include "gtest/gtest.h"

TEST(TimeTest, PrintMaxTime) {
  EXPECT_EQ(std::string{get_max_time()}, "Fri Dec 31 23:59:59 9999\n");
}
