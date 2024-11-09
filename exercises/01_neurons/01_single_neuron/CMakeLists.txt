# CMakeLists.txt for the 01_neurons/01_single_neuron exercise

# CMake version
cmake_minimum_required(VERSION 3.15)

# Define project
project(CPPNN_01_neurons_01_single_neuron)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the source files
add_executable(single_neuron single_neuron.cpp)
