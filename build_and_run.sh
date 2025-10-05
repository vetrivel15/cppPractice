#!/bin/bash
# =========================================
# build_and_run.sh
# Build and run all C++ tests for cpp-practice
# =========================================

# Exit immediately if any command fails
set -e

# Colors for terminal output
GREEN="\033[0;32m"
RED="\033[0;31m"
BLUE="\033[0;34m"
NC="\033[0m" # No Color

# Detect repo root (script location)
ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
BUILD_DIR="$ROOT_DIR/build"

echo -e "${BLUE}==== cpp-practice: Build & Run Tests ====${NC}"

# Remove old build folder
if [ -d "$BUILD_DIR" ]; then
    echo -e "${BLUE}Cleaning old build folder...${NC}"
    rm -rf "$BUILD_DIR"
fi

# Create build folder
echo -e "${BLUE}Creating build folder...${NC}"
mkdir "$BUILD_DIR"
cd "$BUILD_DIR"

# Run CMake
echo -e "${BLUE}Configuring project with CMake...${NC}"
cmake ..

# Build project
echo -e "${BLUE}Building project...${NC}"
make -j$(sysctl -n hw.ncpu)

# Run tests
echo -e "${GREEN}Running tests...${NC}"
./runTests

echo -e "${GREEN}All done! ✅${NC}"
