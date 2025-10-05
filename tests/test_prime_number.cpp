#include "gtest/gtest.h"
#include "prime_number.h"

// Test positive numbers that are prime
TEST(PrimeTest, PositivePrimes) {
    EXPECT_EQ(isPrime(2), 1);
    EXPECT_EQ(isPrime(3), 1);
    EXPECT_EQ(isPrime(5), 1);
    EXPECT_EQ(isPrime(7), 1);
    EXPECT_EQ(isPrime(17), 1);
    EXPECT_EQ(isPrime(97), 1);
}

// Test positive numbers that are not prime
TEST(PrimeTest, PositiveNonPrimes) {
    EXPECT_EQ(isPrime(1), 0);   // 1 is not prime
    EXPECT_EQ(isPrime(4), 0);
    EXPECT_EQ(isPrime(6), 0);
    EXPECT_EQ(isPrime(15), 0);
    EXPECT_EQ(isPrime(100), 0);
}

// Test zero and negative numbers
TEST(PrimeTest, ZeroAndNegative) {
    EXPECT_EQ(isPrime(0), 0);
    EXPECT_EQ(isPrime(-1), 0);
    EXPECT_EQ(isPrime(-7), 0);
}

// Edge case: large prime number
TEST(PrimeTest, LargePrime) {
    EXPECT_EQ(isPrime(9973), 1); // 9973 is prime
}

// Edge case: large non-prime number
TEST(PrimeTest, LargeNonPrime) {
    EXPECT_EQ(isPrime(10000), 0); // divisible by 2, 5, etc.
}

// main() is provided by gtest_main
