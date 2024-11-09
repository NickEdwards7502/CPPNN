#include "utils_stdout.h"
#include "dot_product.h"

#include <vector>
#include <iostream>

int main()
{
    std::cout << "Dot product of two vectors" << std::endl;
    std::vector<double> a = {1, 2, 3};
    std::vector<double> b = {2, 3, 4};
    std::cout << ops::dot(a, b) << std::endl;
    std::cout << std::endl;

    std::cout << "Single neuron with dot product" << std::endl;
    std::vector<double> inputs1 = {1.0, 2.0, 3.0, 2.5};
    std::vector<double> weights1 = {0.2, 0.8, -0.5, 1.0};
    std::cout << ops::dot(weights1, inputs1) << std::endl;
    std::cout << std::endl;

    std::cout << "Layer of neurons with dot product" << std::endl;
    std::vector<double> inputs2 = {1.0, 2.0, 3.0, 2.5};
    std::vector< std::vector<double> > weights2 = {
        {0.2, 0.8, -0.5, 1},
        {0.5, -0.91, 0.26, -0.5},
        {-0.26, -0.27, 0.17, 0.87}
    };
    std::vector<double> biases2 = {2.0, 3.0, 0.5};
    nn_utils::print(ops::dot(weights2, inputs2));
    std::cout << std::endl;

    std::cout << "Layer of neurons with dot product and bias terms" << std::endl;
    nn_utils::print(ops::add(ops::dot(weights2, inputs2), biases2));
    std::cout << std::endl;

    return 0;
}