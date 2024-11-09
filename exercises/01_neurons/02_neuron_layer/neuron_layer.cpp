#include "neuron_layer.h"
#include "utils_stdout.h"
#include <iostream>
#include <vector>

double process_neuron(
    const std::vector<double>& inputs,
    const std::vector<double>& weights,
    const double& bias)
{
    double output = inputs[0] * weights[0]
                  + inputs[1] * weights[1]
                  + inputs[2] * weights[2]
                  + inputs[3] * weights[3]
                  + bias;

    return output;
}

std::vector<double> layer_1()
{
    std::vector<double> inputs = {1, 2, 3, 2.5};

    std::vector<double> weights1 = {0.2, 0.8, -0.5, 1};
    std::vector<double> weights2 = {0.5, -0.91, 0.26, -0.5};
    std::vector<double> weights3 = {-0.26, -0.27, 0.17, 0.87};

    double bias1 = 2;
    double bias2 = 3;
    double bias3 = 0.5;

    double output1 = process_neuron(inputs, weights1, bias1);
    double output2 = process_neuron(inputs, weights2, bias2);
    double output3 = process_neuron(inputs, weights3, bias3);

    std::vector<double> output = {output1, output2, output3};

    return output;
}

std::vector<double> layer_2()
{
    std::vector<double> inputs = {1, 2, 3, 2.5};
    std::vector< std::vector<double> > weights = {
        {0.2, 0.8, -0.5, 1},
        {0.5, -0.91, 0.26, -0.5},
        {-0.26, -0.27, 0.17, 0.87}
    };
    std::vector<double> biases = {2, 3, 0.5};

    std::vector<double> layer_outputs = {};

    int num_weights = weights.size();
    int num_inputs = inputs.size();

    for (int i = 0; i < num_weights; i++)
    {
        double neuron_output = 0.0;
        for (int j = 0; j < num_inputs; j++)
        {
            neuron_output = neuron_output
                          + inputs[j]*weights[i][j];
        }
        neuron_output = neuron_output + biases[i];
        layer_outputs.push_back(neuron_output);
    }

    return layer_outputs;
}

int main() {
    std::vector<double> layer1 = layer_1();
    nn_utils::print(layer1);

    std::vector<double> layer2 = layer_2();
    nn_utils::print(layer2);

    return 0;
}