# CMakeLists.txt for the 02_layers/01_hidden_layers exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_02_layers_01_hidden_layers)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(hidden_layers hidden_layers.cpp matrix_product.cpp utils_stdout.cpp)
