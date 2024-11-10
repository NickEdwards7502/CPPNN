# CMakeLists.txt for the 03_activations/01_relu exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_03_activations_01_relu)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(relu test_relu.cpp relu.cpp utils/utils_stdout.cpp)
