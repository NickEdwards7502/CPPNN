#include "utils/utils_stdout.h"
#include "relu.h"
#include <vector>

int main()
{
    ReLU activation = ReLU();

    std::vector<double> inputs1 = {0, 2, -1, 3.3, -2.7, 1.1, 2.2, -100};

    nn_utils::print(activation.forward(inputs1));

    std::vector<std::vector<double>> inputs2 = {
        {1.0, 2.0, 3.0, 2.5},
        {2.0, 5.0, -1.0, 2.0},
        {-1.5, 2.7, 3.3, -0.8},
    };

    nn_utils::print(inputs2);

    nn_utils::print(activation.forward(inputs2));

    return 0;
}