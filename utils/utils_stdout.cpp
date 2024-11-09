#include "utils_stdout.h"
#include <iostream>
#include <vector>
#include <iterator>

namespace nn_utils
{
    void print(const std::vector<double>& vec)
    {
        int vec_size = vec.size();

        if (vec_size == 0) {
            std::cout << "[]" << std::endl;
        } else {
            std::cout << "[";
            std::copy(
                vec.begin(), 
                vec.end() - 1, 
                std::ostream_iterator<double>(std::cout, ", ")
            );
            std::cout << vec.back();
            std::cout << "]" << std::endl;
        }
    }
}
