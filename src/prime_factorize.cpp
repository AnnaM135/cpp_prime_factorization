#include <vector>

std::vector<int> primeFactorize(int n)
{
    std::vector<int> factors;

    for (int divisor = 2; n > 1; divisor++)  // ✅ Correct condition
    {
        while (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        }
    }

    return factors;
}
