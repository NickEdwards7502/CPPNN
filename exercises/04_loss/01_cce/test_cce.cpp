#include "cce.h"
#include "utils/utils_stdout.h"

#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    std::vector<double> softmax_output1 = {0.7, 0.1, 0.2};
    std::vector<double> target1 = {1, 0, 0};

    nn_utils::print(loss::categorical_cross_entropy(softmax_output1, target1));

    std::vector<std::vector<double>> softmax_output2 = {
        {0.7, 0.1, 0.2},
        {0.1, 0.75, 0.15},
        {0.3, 0.3, 0.4}
    };
    std::vector<std::vector<double>> target2 = {
        {1, 0, 0},
        {0, 1, 0},
        {1, 0, 0}
    };

    nn_utils::print(loss::categorical_cross_entropy(softmax_output2,target2));

    return 0;
}