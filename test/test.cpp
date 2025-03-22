#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/prime_factorize.h" 

// Test case for 0 and 0
TEST(PrimeFactorizeTest, HandlesZero)
{
    EXPECT_EQ(primeFactorize(0), {});
}

