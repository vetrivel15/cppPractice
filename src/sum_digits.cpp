#include "sum_digits.h"

int sum_digits(int n)
{
    if (n < 0)
        return -1; // indicate error for negative input

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
