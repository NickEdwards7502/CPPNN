# CMakeLists.txt for utilities

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_utils)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(utils_stdout utils_stdout.cpp)
