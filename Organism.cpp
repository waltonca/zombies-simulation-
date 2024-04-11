#include "Organism.h"
#include "City.h" // Include City.h to access the City class

// Constructor with City pointer and size parameter
Organism::Organism(City *city, int size) : city(city), size(size) {}

// Destructor
Organism::~Organism() {}

// Overloaded stream insertion operator to print Organism information
std::ostream& operator<<(std::ostream &output, Organism *organism) {
    if (organism) {
        output << "Organism at position (" << organism->x << ", " << organism->y << ")";
    } else {
        output << "Null organism";
    }
    return output;
}
