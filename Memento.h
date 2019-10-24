#ifndef MEMENTO_H
#define MEMENTO_H
#include "Fighter.h"
#include "SpaceshipTransporter.h"

using namespace std;

class Memento {
    public:
        virtual ~Memento();
    private:
        friend class Fighter;
        Memento();
        State* _state;
};

#endif