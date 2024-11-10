#ifndef SIGMOID_H
#define SIGMOID_H

#include <vector>

class Sigmoid {
public:
    double forward(const double& scalar);
    std::vector<double> forward(const std::vector<double>& vec);
    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& mat);
};

#endif