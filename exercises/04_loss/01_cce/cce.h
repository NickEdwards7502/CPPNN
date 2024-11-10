#include <vector>

namespace loss
{
    double categorical_cross_entropy(
        const std::vector<double>& output,
        const std::vector<double>& target
    );
    std::vector<double> categorical_cross_entropy(
        const std::vector<std::vector<double>>& output,
        const std::vector<std::vector<double>>& target
    );
};