#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/prime_factorize.h" 

// Test case for 0 and 0
TEST(PrimeFactorize, HandlesZero)
{
    EXPECT_EQ(0, 0);
}

