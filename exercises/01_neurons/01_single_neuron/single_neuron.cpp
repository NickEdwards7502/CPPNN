#include "single_neuron.h"
#include <iostream>
#include <vector>

double neuron_1() 
{
    std::vector<double> inputs = {1.0, 2.0, 3.0};
    std::vector<double> weights = {0.2, 0.8, -0.5};
    double bias = 2.0;

    double output = inputs[0] * weights[0]
                  + inputs[1] * weights[1]
                  + inputs[2] * weights[2]
                  + bias;

    return output;
}

double neuron_2()
{
    std::vector<double> inputs = {1.0, 2.0, 3.0, 2.5};
    std::vector<double> weights = {0.2, 0.8, -0.5, 1.0};
    double bias = 2.0;

    double output = inputs[0] * weights[0]
                  + inputs[1] * weights[1]
                  + inputs[2] * weights[2]
                  + inputs[3] * weights[3]
                  + bias;
    
    return output;
}

int main() {
    double output1 = neuron_1();
    std::cout << "Neuron 1 output: " << output1 << std::endl;

    double output2 = neuron_2();
    std::cout << "Neuron 2 output: " <<  output2 << std::endl;

    return 0;
}