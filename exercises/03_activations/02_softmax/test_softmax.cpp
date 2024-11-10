#include "softmax.h"
#include "utils/utils_stdout.h"

#include <vector>

int main()
{
    std::vector<double> layer_outputs1 = {4.8, 1.21, 2.385};
    Softmax activation = Softmax();

    nn_utils::print(activation.forward(layer_outputs1));

    std::vector<std::vector<double>> layer_outputs2 = {
        {4.8, 1.21, 2.385},
        {8.9, -1.81, 0.2},
        {1.41, 1.051, 0.026}
    };

    nn_utils::print(activation.forward(layer_outputs2));

    return 0;
}