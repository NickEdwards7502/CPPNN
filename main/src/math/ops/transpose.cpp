#include "dot.h"
#include <vector>
#include <cassert>

namespace ops
{
    std::vector< std::vector<double> > transpose(const std::vector< std::vector<double> >& mat)
    {
        assert(mat.size() > 0 && "Cannot transpose empty matrix");

        const size_t outer_size = mat.size();

        const size_t inner_size = mat[0].size();

        std::vector< std::vector<double> > out(inner_size, std::vector<double>(outer_size));

        for (auto i = 0; i < outer_size; i++)
        {
            for (auto j = 0; j < inner_size; j++)
            {
                out[j][i] = mat[i][j];
            }
        }

        return out;
    }
}