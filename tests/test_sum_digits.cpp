#include <gtest/gtest.h>
#include "sum_digits.h"

TEST(sum_digitsTest, PositiveNumbers) {
    EXPECT_EQ(sum_digits(12345), 15);
    EXPECT_EQ(sum_digits(9), 9);
    EXPECT_EQ(sum_digits(1001), 2);
}

TEST(sum_digitsTest, Zero) {
    EXPECT_EQ(sum_digits(0), 0);
}

TEST(sum_digitsTest, NegativeInput) {
    EXPECT_EQ(sum_digits(-123), -1);
}
