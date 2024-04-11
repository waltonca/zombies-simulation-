//
// Created by User on 4/10/2024.
//
#include "Human.h"
#include "City.h"

// Default constructor
Human::Human() : Organism() {}

// Constructor with City pointer and size parameter
Human::Human(City *city, int size) : Organism(city, size) {}

// Destructor
Human::~Human() {}

// Implement the turn method for Human

void Human::turn() {
    // Implement the turn function for Human here
    move();
    // Other behaviors for humans can be added here
}

// Move behavior for humans
void Human::move() {
    // Generate random direction (up, down, left, right)
    int direction = rand() % 4; // 0: up, 1: down, 2: left, 3: right

    // Get current position
    int newX = x;
    int newY = y;

    // Update position based on direction
    switch (direction) {
        case 0: // Up
            newX = (x - 1 + GRIDSIZE) % GRIDSIZE;
        break;
        case 1: // Down
            newX = (x + 1) % GRIDSIZE;
        break;
        case 2: // Left
            newY = (y - 1 + GRIDSIZE) % GRIDSIZE;
        break;
        case 3: // Right
            newY = (y + 1) % GRIDSIZE;
        break;
    }

    // Check if the new position is empty
    if (city->getOrganism(newX, newY) == nullptr) {
        // Move the human to the new position
        city->setOrganism(this, newX, newY);
        city->setOrganism(nullptr, x, y); // Remove human from old position
        x = newX;
        y = newY;
    }
}