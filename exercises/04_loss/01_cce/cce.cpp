#include "cce.h"

#include <vector>
#include <cmath>
#include <cassert>
#include <numeric>

namespace loss
{
    double categorical_cross_entropy(
        const std::vector<double>& output,
        const std::vector<double>& target)
    {
        assert(output.size() == target.size()
            && "Mismatch in output and target shape.");
        
        double result;
        const double epsilon = 1e-12;

        for (auto i = 0; i < output.size(); i++)
        {
            if (target[i] == 0) {
                continue;
            }
            result += std::log(output[i] + epsilon);
        }

        return -result;
    }

    double categorical_cross_entropy(
        const std::vector<std::vector<double>>& output,
        const std::vector<std::vector<double>>& target
    )
    {
        assert(output.size() == target.size()
            && "Mistmatch in number of outputs and number of samples.");

        std::vector<double> out(output.size());

        for (auto i = 0; i < output.size(); i++)
        {
            out[i] = categorical_cross_entropy(output[i], target[i]);
        }

        double sum = std::accumulate(out.begin(), out.end(), 0.0);

        return sum / out.size();
    }
}