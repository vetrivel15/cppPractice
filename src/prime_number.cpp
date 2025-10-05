#include "prime_number.h"

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}