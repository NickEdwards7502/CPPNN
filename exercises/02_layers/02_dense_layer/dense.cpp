#include "dense.h"
#include "ops/dot.h"
#include "ops/add.h"
#include "utils/utils_stdout.h"
#include <random>
#include <iostream>

class Dense {
    public:
        int n_inputs;
        int n_neurons;
        std::vector<std::vector<double>> weights;
        std::vector<double> biases;

        Dense(int n_inputs, int n_neurons)
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

        std::vector<std::vector<double>> forward(
            const std::vector<std::vector<double>>& inputs
        )
        {
            return ops::add(ops::dot(inputs, weights), biases);
        }

        void set_weights(const std::vector<std::vector<double>>& new_weights)
        {
            weights = new_weights;
        }

        void set_biases(const std::vector<double>& new_biases)
        {
            biases = new_biases;
        }

        void shape()
        {
            std::cout << "Shape (weights): [" << weights.size() << ", " << weights[0].size() << "]" << std::endl;
            std::cout << "Shape (biases): [" << biases.size() << "]" << std::endl;
        }
};

int main() {
    std::vector< std::vector<double> > inputs = {
        {1.0, 2.0, 3.0, 2.5},
        {2.0, 5.0, -1.0, 2.0},
        {-1.5, 2.7, 3.3, -0.8},
    };

    Dense dense1 = Dense(4, 4);
    dense1.shape();
    std::vector<std::vector<double>> dense1_output = dense1.forward(inputs);

    nn_utils::print(dense1_output);
}