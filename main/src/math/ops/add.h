#include <vector>

namespace ops
{
    std::vector<double> add(const std::vector<double>& lhs, const std::vector<double>& rhs);
    std::vector< std::vector<double> > add(
        const std::vector< std::vector<double> >& mat, 
        const std::vector<double>& vec
    );
}