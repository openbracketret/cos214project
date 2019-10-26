#ifndef NODE_H
#define NODE_H

#include "Planet.h"

class Node {
    public:
        Planet* el;
        Node* next;
        Node* prev;
};

#endif