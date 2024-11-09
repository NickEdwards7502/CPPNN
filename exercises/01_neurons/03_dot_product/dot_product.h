#include <vector>

namespace ops
{
    double dot(const std::vector<double>& lhs, const std::vector<double>& rhs);
    std::vector<double> dot(const std::vector< std::vector<double> >& mat, const std::vector<double>& vec);
    std::vector<double> add(const std::vector<double>& lhs, const std::vector<double>& rhs);
}