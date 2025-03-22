#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/prime_factorize.h" 

// Test case for 0 and 1
TEST(PrimeFactorizeTest, HandlesZero)
{
    std::vector<int> empty;
    EXPECT_EQ(primeFactorize(0), empty);
    EXPECT_EQ(primeFactorize(1), empty);
}

// Test case for PrimeNumbers
TEST(PrimeFactorizeTest, PrimeNumbers)
{
    // std::vector<int> prime = {2};
    EXPECT_EQ(primeFactorize(2), std::vector<int>{2});
    EXPECT_EQ(primeFactorize(3), std::vector<int>{3});
    EXPECT_EQ(primeFactorize(5), std::vector<int>{5});
    EXPECT_EQ(primeFactorize(7), std::vector<int>{7});
}

TEST(PrimeFactorizeTest, NonPrime4)
{
    std::vector<int> non_prime = {2, 2};
    EXPECT_EQ(primeFactorize(4), non_prime);
}

TEST(PrimeFactorizeTest, NonPrime6)
{
    std::vector<int> non_prime = {2, 3};
    EXPECT_EQ(primeFactorize(6), non_prime);
}

TEST(PrimeFactorizeTest, NonPrime8)
{
    std::vector<int> non_prime = {2, 2, 2};
    EXPECT_EQ(primeFactorize(8), non_prime);
}

TEST(PrimeFactorizeTest, NonPrime9)
{
    std::vector<int> non_prime = {3, 3};
    EXPECT_EQ(primeFactorize(9), non_prime);
}

TEST(PrimeFactorizeTest, NonPrime10)
{
    std::vector<int> non_prime = {2, 5};
    EXPECT_EQ(primeFactorize(10), non_prime);
}

TEST(PrimeFactorize, LargeNumber12) {
    std::vector<int> large_number = {2, 2, 3};
    EXPECT_EQ(primeFactorize(12), large_number);  
}

TEST(PrimeFactorize, LargeNumber60) {
    std::vector<int> large_number = {2, 2, 3, 5};
    EXPECT_EQ(primeFactorize(60), large_number); 
}

TEST(PrimeFactorize, LargeNumber125) {
    std::vector<int> large_number = {5, 5, 5};
    EXPECT_EQ(primeFactorize(125), large_number);
}