# CMakeLists.txt for the 02_layers/02_dense_layer exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_02_layers_02_dense_layer)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(dense_layer dense.cpp ops/dot.cpp ops/add.cpp utils/utils_stdout.cpp)
