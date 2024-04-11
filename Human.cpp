//
// Created by User on 4/10/2024.
//
#include "Human.h"

// Default constructor
Human::Human() : Organism() {}

// Constructor with City pointer and size parameter
Human::Human(City *city, int size) : Organism(city, size) {}

// Destructor
Human::~Human() {}

// Implement the turn method for Human

void Human::turn() {
    // Implement the turn function for Human here
    // For now, we'll keep it empty as we're starting with a simple implementation
}
