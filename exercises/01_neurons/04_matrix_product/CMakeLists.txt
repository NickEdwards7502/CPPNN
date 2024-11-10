# CMakeLists.txt for the 01_neurons/04_matrix_product exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_01_neurons_04_matrix_product)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(matrix test_matrix_product.cpp matrix_product.cpp utils_stdout.cpp)
