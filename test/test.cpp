#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/prime_factorize.h" 

// Test case for 0
TEST(PrimeFactorizeTest, HandlesZero)
{
    std::vector<int> empty;
    EXPECT_EQ(primeFactorize(0), empty);
}

// Test case for 1
TEST(PrimeFactorizeTest, HandlesOne)
{
    std::vector<int> one = {1};
    EXPECT_EQ(primeFactorize(1), one);
}
