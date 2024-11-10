#include "relu.h"
#include "utils/utils_stdout.h"
#include <vector>

double ReLU::forward(const double& scalar) {
    return (scalar > 0) ? scalar : 0.0;
}

std::vector<double> ReLU::forward(const std::vector<double>& vec) {
    std::vector<double> out(vec.size());
    for (auto i = 0; i < vec.size(); i++) {
        out[i] = forward(vec[i]);
    }
    return out;
}

std::vector<std::vector<double>> ReLU::forward(const std::vector<std::vector<double>>& mat) {
    std::vector<std::vector<double>> out(mat.size());
    for (auto i = 0; i < mat.size(); i++) {
        out[i] = forward(mat[i]);
    }
    return out;
}
