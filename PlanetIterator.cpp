#include "PlanetIterator.h"
#include "PlanetQueue.h"
#include "Node.h"

PlanetIterator::PlanetIterator() : head(0), current(0) {}

PlanetIterator::PlanetIterator(const PlanetQueue& source, Node* p) : head(source.head), current(p) {}

// Planet& PlanetIterator::operator*(){
//     return current->el;
// }
//TODO: Check this operator?


PlanetIterator PlanetIterator::operator++(){
    if (this != 0){
        this->current = this->current->next;
    }
    return *this;
}

bool PlanetIterator::operator==(const PlanetIterator& rhs) const {
    return current == rhs.current;
}