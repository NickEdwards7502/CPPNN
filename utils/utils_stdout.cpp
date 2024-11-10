#include "utils_stdout.h"
#include <iostream>
#include <vector>
#include <iterator>

namespace nn_utils
{
    void print(const double& scalar)
    {
        std::cout << scalar << std::endl;
    }

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

    void print(const std::vector<std::vector<double>>& mat)
    {
        int mat_size = mat.size();

        if (mat_size == 0) {
            std::cout << "[]" << std::endl;
        } else {
            std::cout << "[" << std::endl;
            for (auto i = 0; i < mat_size; ++i) {
                int row_size = mat[i].size();
                if (row_size == 0) {
                    std::cout << "[]";
                } else {
                    std::cout << " [";
                    std::copy(
                        mat[i].begin(),
                        mat[i].end() - 1,
                        std::ostream_iterator<double>(std::cout, ", ")
                    );
                    std::cout << mat[i].back();
                    std::cout << "]";
                }
                if (i != mat_size - 1) {
                    std::cout << ",";
                }
                std::cout << std::endl;
            }
            std::cout << "]" << std::endl;
        }
    }
}
