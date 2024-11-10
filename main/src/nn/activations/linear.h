#ifndef LINEAR_H
#define LINEAR_H

#include <vector>

class Linear {
public:
    double forward(const double& scalar);
    std::vector<double> forward(const std::vector<double>& vec);
    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& mat);
};

#endif