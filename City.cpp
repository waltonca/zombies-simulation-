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

    // Populate city with humans
    for (int i = 0; i < HUMAN_STARTCOUNT; ++i) {
        int x = std::rand() % GRIDSIZE;
        int y = std::rand() % GRIDSIZE;
        if (grid[x][y] == nullptr) {
            grid[x][y] = new Human(x, y);
        }
    }

    // Populate city with zombies
    for (int i = 0; i < ZOMBIE_STARTCOUNT; ++i) {
        int x = std::rand() % GRIDSIZE;
        int y = std::rand() % GRIDSIZE;
        if (grid[x][y] == nullptr) {
            grid[x][y] = new Zombie(x, y);
        }
    }
}
