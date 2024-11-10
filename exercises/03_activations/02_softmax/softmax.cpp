#include "softmax.h"

#include <cmath>

std::vector<double> Softmax::forward(const std::vector<double>& vec)
{
    size_t size = vec.size();

    std::vector<double> exps(size);
    for (auto i = 0; i < size; i++)
    {
        exps[i] = std::exp(vec[i]);
    }

    double sum = 0;
    for (auto i = 0; i < size; i++)
    {
        sum += exps[i];
    }

    std::vector<double> out(size);
    for (auto i = 0; i < size; i++)
    {
        out[i] = exps[i] / sum;
    }

    return out;
}

std::vector<std::vector<double>> Softmax::forward(const std::vector<std::vector<double>>& mat)
{
    std::vector<std::vector<double>> out(mat.size(), std::vector<double>(mat[0].size()));
    for (auto i = 0; i < mat.size(); i++)
    {
        out[i] = forward(mat[i]);
    }

    return out;
}