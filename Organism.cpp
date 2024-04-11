#include "Organism.h"
#include "City.h" // Include City.h to access the City class=

// Default constructor
Organism::Organism() : x(0), y(0), size(0), moved(false), city(nullptr) {}

// Parameterized constructor
Organism::Organism(City *city, int size) : x(0), y(0), size(size), moved(false), city(city) {}

// Default destructor
Organism::~Organism() {}

// Overloaded stream insertion operator
std::ostream& operator<<(std::ostream &output, Organism *organism) {
    output << organism;
    return output;
}
