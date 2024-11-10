#ifndef SOFTMAX_H
#define SOFTMAX_H

#include <vector>

class Softmax {
public:
    std::vector<double> forward(const std::vector<double>& vec);
    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& mat);
};

#endif