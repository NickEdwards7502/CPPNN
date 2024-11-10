#include "linear.h"

#include <vector>
#include <cmath>

double Linear::forward(const double& scalar) {
    return scalar;
}

std::vector<double> Linear::forward(const std::vector<double>& vec) {
    std::vector<double> out(vec.size());
    for (auto i = 0; i < vec.size(); i++) {
        out[i] = forward(vec[i]);
    }
    return out;
}

std::vector<std::vector<double>> Linear::forward(const std::vector<std::vector<double>>& mat) {
    std::vector<std::vector<double>> out(mat.size());
    for (auto i = 0; i < mat.size(); i++) {
        out[i] = forward(mat[i]);
    }
    return out;
}
