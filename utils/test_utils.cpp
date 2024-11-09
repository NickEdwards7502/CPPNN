#include "test_utils.h"
#include "utils_stdout.h"
#include <iostream>
#include <vector>

int main()
{
    std::cout << "Testing empty double vector:" << std::endl;
    std::vector<double> empty_double_vec = {};
    nn_utils::print(empty_double_vec);

    std::cout << "Testing normal double vector" << std::endl;
    std::vector<double> normal_double_vec = {0.1, 0.2, 0.3};
    nn_utils::print(normal_double_vec);
}