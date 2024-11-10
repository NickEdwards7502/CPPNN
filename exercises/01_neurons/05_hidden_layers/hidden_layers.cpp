#include "hidden_layers.h"
#include "matrix_product.h"
#include "utils_stdout.h"
#include <vector>
#include <iostream>

std::vector< std::vector<double> > layer_2()
{
    std::vector< std::vector<double> > inputs = {
        {1.0, 2.0, 3.0, 2.5},
        {2.0, 5.0, -1.0, 2.0},
        {-1.5, 2.7, 3.3, -0.8},
    };

    std::vector< std::vector<double> > weights1 = {
        {0.2, 0.8, -0.5, 1.0},
        {0.5, -0.91, 0.26, -0.5},
        {-0.26, -0.27, 0.17, 0.87}
    };
    std::vector<double> biases1 = {2.0, 3.0, 0.5};

    std::vector< std::vector<double> > weights2 = {
        {0.1, -0.14, 0.5},
        {-0.5, 0.12, -0.33},
        {-0.44, 0.73, -0.13}
    };
    std::vector<double> biases2 = {-1.0, 2.0, -0.5};

    std::vector< std::vector<double> > layer1_outputs = ops::add(ops::dot(inputs, weights1), biases1);
    std::vector< std::vector<double> > layer2_outputs = ops::add(ops::dot(layer1_outputs, weights2), biases2);

    return layer2_outputs;
}

int main()
{
    nn_utils::print(layer_2());
}