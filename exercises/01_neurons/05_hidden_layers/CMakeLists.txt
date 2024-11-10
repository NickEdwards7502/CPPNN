# CMakeLists.txt for the 01_neurons/02_neuron_layer exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_01_neurons_02_neuron_layer)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(hidden_layers hidden_layers.cpp matrix_product.cpp utils_stdout.cpp)
