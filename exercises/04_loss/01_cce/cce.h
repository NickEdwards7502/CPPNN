#include <vector>

namespace loss
{
    double categorical_cross_entropy(
        const std::vector<double>& output,
        const std::vector<double>& target
    );
    double categorical_cross_entropy(
        const std::vector<std::vector<double>>& output,
        const std::vector<std::vector<double>>& target
    );
};