# 02 - Prime Number Check

## Problem

Write a function `isPrime` that checks whether a given integer is a prime number. A prime number is a number greater than 1 that has no divisors other than 1 and itself.

- Input: a single integer `n`
- Output: `1` if `n` is prime, `0` otherwise
- Special cases: return `0` for numbers less than 2 or negative numbers

## Function signature (C++)

int isPrime(int n);

## Files

- [Header: `include/prime_number.h`](../include/prime_number.h)
- [Implementation: `src/prime_number.cpp`](../src/prime_number.cpp)
- [Tests: `tests/test_prime_number.cpp`](../tests/test_prime_number.cpp)

## Examples

isPrime(2)    // -> 1, 2 is prime  
isPrime(15)   // -> 0, 15 is divisible by 3 and 5  
isPrime(1)    // -> 0, 1 is not prime  
isPrime(17)   // -> 1, 17 is prime  
isPrime(-7)   // -> 0, negative numbers are not prime

## Constraints and edge cases

Input limits: -10^9 <= n <= 10^9  
Negative numbers, 0, and 1 are not prime  
Time complexity: O(sqrt(n))  
Handle invalid inputs gracefully (return 0)
