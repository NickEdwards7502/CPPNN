#include "dot.h"
#include <vector>
#include <cassert>
#include <iostream>

namespace ops
{
    double dot(const std::vector<double>& lhs, const std::vector<double>& rhs)
    {
        assert(lhs.size() == rhs.size() && "Dot product: vector size mismatch");
        
        const size_t size = lhs.size();

        double out = 0;

        for (auto i = 0; i < size; i++)
        {
        out += lhs[i] * rhs[i];
        }

        return out;
    }

    std::vector<double> dot(const std::vector< std::vector<double> >& mat, const std::vector<double>& vec)
    {
        const size_t size = mat.size();

        std::vector<double> out(size);

        for (auto i = 0; i < size; i++)
        {
            out[i] = dot(mat[i], vec);
        }

        return out;
    }

    std::vector< std::vector<double> > dot(
        const std::vector< std::vector<double> >& lhs,
        const std::vector< std::vector<double> >& rhs
    )
    {
        assert(lhs[0].size() == rhs[0].size() && "Inner dimension of matrices don't match.");
        const size_t outer_size = lhs.size();
        const size_t inner_size = rhs.size();

        std::vector< std::vector<double> > out(outer_size, std::vector<double>(inner_size));

        for (int i = 0; i < outer_size; i++)
        {
            out[i] = ops::dot(rhs, lhs[i]);
        }

        return out;
    }
}