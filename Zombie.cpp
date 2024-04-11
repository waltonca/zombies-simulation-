#include "Zombie.h"
#include "City.h" // Include City.h to access the City class

// Default constructor
Zombie::Zombie() : Organism() {}

// Constructor with City pointer and size parameter
Zombie::Zombie(City *city, int size) : Organism(city, size) {}

// Destructor (if needed)
Zombie::~Zombie() {}

// Implement the turn method for Zombie
void Zombie::turn() {
    // Implement the behavior of Zombie during its turn
    // For example, move, eat, breed, starve, etc.
    // You can access the city grid using the city pointer
    // and update the position of the zombie accordingly
    // This implementation will depend on your specific requirements
    // and the interactions with other organisms in the simulation
}
