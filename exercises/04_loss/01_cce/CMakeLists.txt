# CMakeLists.txt for the 04_loss/01_cce exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_04_loss_01_cce)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(cce test_cce.cpp cce.cpp utils/utils_stdout.cpp)
