cmake_minimum_required(VERSION 3.10)
project(CppPractice)

set(CMAKE_CXX_STANDARD 17)

# Export compilation database for tools (compile_commands.json)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include directories
include_directories(include)

# GoogleTest
include(FetchContent)

# Place FetchContent downloads/populated projects under the build folder so CMake
# does not attempt to write into the source tree (_deps) which may be read-only.
set(FETCHCONTENT_BASE_DIR "${CMAKE_BINARY_DIR}/_deps")
# Prefer reproducible behavior for extracted timestamps
set(FETCHCONTENT_DOWNLOAD_EXTRACT_TIMESTAMP TRUE)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)
# Avoid overriding user compiler/linker flags
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Library
file(GLOB SRC_FILES "src/*.cpp")
add_library(sum_lib ${SRC_FILES})

# Test executable
file(GLOB TEST_FILES "tests/*.cpp")
add_executable(runTests ${TEST_FILES})
target_link_libraries(runTests PRIVATE sum_lib GTest::gtest_main)

# Enable testing
enable_testing()
add_test(NAME SumTests COMMAND runTests)
