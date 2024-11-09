#include "test_matrix_product.h"
#include "matrix_product.h"
#include "utils_stdout.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector< std::vector<double> > inputs = {
        {1.0, 2.0, 3.0, 2.5},
        {2.0, 5.0, -1.0, 2.0},
        {-1.5, 2.7, 3.3, -0.8}
    };
    std::vector< std::vector<double> > weights = {
        {0.2, 0.8, -0.5, 1},
        {0.5, -0.91, 0.26, -0.5},
        {-0.26, -0.27, 0.17, 0.87}
    };
    std::vector<double> biases = {2.0, 3.0, 0.5};
    nn_utils::print(ops::add(ops::dot(inputs, weights), biases));

    return 0;
}