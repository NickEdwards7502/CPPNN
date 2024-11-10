#ifndef RELU_H
#define RELU_H

#include <vector>

class ReLU {
public:
    double forward(const double& scalar);
    std::vector<double> forward(const std::vector<double>& vec);
    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& mat);
};

#endif