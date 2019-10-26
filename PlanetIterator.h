#ifndef PLANETITERATOR_H
#define PLANETITERATOR_H

#include "Planet.h"

class Node;

class PlanetQueue;

/** @brief Planet Iterator class
 */
class PlanetIterator {
    friend class PlanetQueue;
    public:
    /** default constructor
     */
        PlanetIterator();
    /** Overridden * operator
     */
        Planet& operator*();
    /** Overidden ++ operator
     */
        PlanetIterator operator++();
    /** Overidden == operator
     */
        bool operator==(const PlanetIterator&) const;

    protected:
    /** Paramaterised constructor
     */
        PlanetIterator(const PlanetQueue&, Node*);
        Node* head;
        Node* current;

};

#endif