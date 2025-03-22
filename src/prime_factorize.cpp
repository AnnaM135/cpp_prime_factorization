#include <vector>

std::vector<int> primeFactorize(int n)
{
    std::vector<int> factors;
    int divisor = 2;
    if(n <=1) 
        return std::vector<int>{};
    while(divisor < n)
    {
        while(n % divisor == 0)
        {
            factors.push_back(divisor);   
            n = n / divisor;
        }
        divisor++;
    }

    if(n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}
