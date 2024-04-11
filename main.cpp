#include <iostream>
#include "City.h"
#include "GameSpecs.h" // Include GameSpecs.h for configuration constants

int main() {
    // Create a City object
    City city;

    // Print the initial state of the city
    std::cout << "Initial state of the city:" << std::endl;
    std::cout << city << std::endl;

    // Simulate the city for a certain number of iterations
    for (int i = 0; i < ITERATIONS; ++i) {
        // Perform one step in the simulation
        city.step();

        // Print the state of the city after each step
        std::cout << "Generation: " << i + 1 << std::endl;
        std::cout << city << std::endl;

        // Add a delay between steps
        // Implement this if you want to see the simulation step by step
        // std::this_thread::sleep_for(std::chrono::milliseconds(INTERVAL));
    }

    return 0;
}