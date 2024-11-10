# CMakeLists.txt for the 03_activations/04_linear exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_03_activations_04_linear)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(linear test_linear.cpp linear.cpp utils/utils_stdout.cpp)
