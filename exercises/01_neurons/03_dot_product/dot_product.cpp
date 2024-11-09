#include "dot_product.h"
#include <vector>
#include <cassert>

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

    std::vector<double> add(const std::vector<double>& lhs, const std::vector<double>& rhs)
    {
        assert(lhs.size() == rhs.size() && "Vector addition: size mismatch");

        const size_t size = lhs.size();

        std::vector<double> out(size);

        for (auto i = 0; i < size; i++)
        {
            out[i] = lhs[i] + rhs[i];
        }

        return out;
    }
}
