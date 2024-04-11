//
// Created by User on 4/10/2024.
//
#include "City.h"
#include "Organism.h"
#include "Human.h"
#include "Zombie.h"

#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

City::City() : generation(0) {
    // Initialize grid with nullptrs
    for (int i = 0; i < GRIDSIZE; ++i) {
        for (int j = 0; j < GRIDSIZE; ++j) {
            grid[i][j] = nullptr;
        }
    }

    // Seed random number generator
    std::srand(std::time(nullptr));
}

// Count the number of organisms of a certain type
int City::countType(char symbol) {
    int count = 0;
    for (int i = 0; i < GRIDSIZE; ++i) {
        for (int j = 0; j < GRIDSIZE; ++j) {
            if (grid[i][j] != nullptr) {
                // Check if the symbol matches the type of organism
                if ((symbol == HUMAN_CH && typeid(*grid[i][j]) == typeid(Human)) ||
                    (symbol == ZOMBIE_CH && typeid(*grid[i][j]) == typeid(Zombie))) {
                    count++;
                    }
            }
        }
    }
    return count;
}

// Destructor
City::~City() {
    // Deallocate memory for organisms
    for (int i = 0; i < GRIDSIZE; ++i) {
        for (int j = 0; j < GRIDSIZE; ++j) {
            delete grid[i][j];
        }
    }
}

// Perform one step in the simulation
void City::step() {
    // Implement the behavior of the city during one step of the simulation
    // For example, you can iterate through the grid and call the turn method of each organism
    // This implementation will depend on your specific requirements
}

// Reset the city
void City::reset() {
    // Implement the reset behavior of the city
    // This implementation will depend on your specific requirements
}

// Overloaded stream insertion operator to print the city
std::ostream& operator<<(std::ostream &output, City &city) {
    for (int i = 0; i < GRIDSIZE; ++i) {
        for (int j = 0; j < GRIDSIZE; ++j) {
            if (city.grid[i][j] != nullptr) {
                if (typeid(*city.grid[i][j]) == typeid(Human)) {
                    output << HUMAN_CH << ' ';
                } else if (typeid(*city.grid[i][j]) == typeid(Zombie)) {
                    output << ZOMBIE_CH << ' ';
                } else {
                    output << SPACE_CH << ' ';
                }
            } else {
                output << SPACE_CH << ' ';
            }
        }
        output << std::endl;
    }
    return output;
}

// Function for colors (not implemented in this solution)
void City::col(int c) {
    // Implement color functionality if needed
}
