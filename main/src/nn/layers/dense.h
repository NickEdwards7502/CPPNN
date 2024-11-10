#ifndef DENSE_H
#define DENSE_H

#include <vector>

class Dense {
public:
    int n_inputs;
    int n_neurons;
    std::vector<std::vector<double>> weights;
    std::vector<double> biases;

    Dense(int n_inputs, int n_neurons);

    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& inputs);
    void set_weights(const std::vector<std::vector<double>>& new_weights);
    void set_biases(const std::vector<double>& new_biases);
    void shape();
};

#endif