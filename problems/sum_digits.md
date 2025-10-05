# Sum Digits — Coding Challenge

## Problem
Write a function `sum_digits` that returns the sum of the decimal digits of a non-negative integer.

- If the input is negative, the function should return -1 (indicating invalid input).

## Function signature (C++)

int sum_digits(int n);

## Files

- [Header: include/sum_digits.h](../include/sum_digits.h)
- [Implementation: src/sum_digits.cpp](../src/sum_digits.cpp)
- [Tests: tests/test_sum_digits.cpp](../tests/test_sum_digits.cpp)
- [Build script: build_and_run.sh](../build_and_run.sh)
- [Project CMakeLists.txt](../CMakeLists.txt)

## Examples

- `sum_digits(12345)` -> `15` (1 + 2 + 3 + 4 + 5)
- `sum_digits(9)` -> `9`
- `sum_digits(1001)` -> `2` (1 + 0 + 0 + 1)
- `sum_digits(0)` -> `0`
- `sum_digits(-123)` -> `-1` (invalid input)

## Constraints and edge cases

- Input type: 32-bit signed integer (`int`).
- If `n < 0` return `-1`.
- The function should handle `0` correctly and return `0`.