cmake_minimum_required(VERSION 3.10)
project(CppPractice)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Library
add_library(sum_lib src/sum_digits.cpp)

# Test executable
# Link with gtest_main instead of gtest
add_executable(runTests tests/test_sum_digits.cpp)
target_link_libraries(runTests sum_lib GTest::gtest_main)

# Enable testing
enable_testing()
add_test(NAME SumTests COMMAND runTests)
