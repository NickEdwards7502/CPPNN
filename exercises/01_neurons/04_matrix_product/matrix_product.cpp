#include "matrix_product.h"
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

    std::vector< std::vector<double> > dot(
        const std::vector< std::vector<double> >& lhs,
        const std::vector< std::vector<double> >& rhs
    )
    {
        assert(lhs.size() == rhs.size() && "Outer dimension of matrices don't match.");
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

    std::vector< std::vector<double> > transpose(const std::vector< std::vector<double> >& mat)
    {
        assert(mat.size() > 0 && "Cannot transpose empty matrix");

        const size_t outer_size = mat.size();

        const size_t inner_size = mat[0].size();

        std::vector< std::vector<double> > out(inner_size, std::vector<double>(outer_size));

        for (int i = 0; i < outer_size; i++)
        {
            for (int j = 0; j < inner_size; j++)
            {
                out[j][i] = mat[i][j];
            }
        }

        return out;
    }

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
        const std::vector<double>& vec)
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
