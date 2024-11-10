#include "dense.h"
#include "../../math/ops/dot.h"
#include "../../math/ops/add.h"
#include <random>
#include <iostream>

Dense::Dense(int n_inputs, int n_neurons)
    : n_inputs(n_inputs), n_neurons(n_neurons),
        weights(n_inputs, std::vector<double>(n_neurons)),
        biases(n_neurons, 0.0)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<double> dist(0.0, 1.0);

    for (auto i = 0; i < n_inputs; i++) {
        for (auto j = 0; j < n_neurons; j++) {
            weights[i][j] = 0.01 * dist(gen);
        }
    }

    for (auto i = 0; i < n_neurons; i++) {
        biases[i] = 0;
    }
}

std::vector<std::vector<double>> Dense::forward(
    const std::vector<std::vector<double>>& inputs
)
{
    return ops::add(ops::dot(inputs, weights), biases);
}

void Dense::set_weights(const std::vector<std::vector<double>>& new_weights)
{
    weights = new_weights;
}

void Dense::set_biases(const std::vector<double>& new_biases)
{
    biases = new_biases;
}

void Dense::shape()
{
    std::cout << "Shape (weights): [" << weights.size() << ", " << weights[0].size() << "]" << std::endl;
    std::cout << "Shape (biases): [" << biases.size() << "]" << std::endl;
}