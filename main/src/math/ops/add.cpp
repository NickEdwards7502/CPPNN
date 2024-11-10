#include "add.h"
#include <vector>
#include <cassert>

namespace ops
{
    std::vector<double> add(const std::vector<double>& lhs, const std::vector<double>& rhs)
    {
        assert(lhs.size() == rhs.size() && "Vector addition: size mismatch.");

        const size_t size = lhs.size();

        std::vector<double> out(size);

        for (auto i = 0; i < size; i++)
        {
            out[i] = lhs[i] + rhs[i];
        }

        return out;
    }

    std::vector< std::vector<double> > add(
        const std::vector< std::vector<double> >& mat, 
        const std::vector<double>& vec
    )
    {
        assert(mat[0].size() == vec.size() && "Matrix vector addition: size mismatch.");

        const size_t outer_size = mat.size();
        const size_t inner_size = vec.size();

        std::vector< std::vector<double> > out(outer_size, std::vector<double>(inner_size));

        for (auto i = 0; i < outer_size; i++)
        {
            out[i] = add(mat[i], vec);
        }

        return out;
    }
}