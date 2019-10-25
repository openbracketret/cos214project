#ifndef MEMENTO_H
#define MEMENTO_H
#include "Fighter.h"
#include "SpaceshipTransporter.h"
#include "State.h"
using namespace std;
/** @brief Memento class
 */
class Memento {
    public:
    /** Virtual default destructor
     */
        virtual ~Memento();
    private:
        friend class TransportBay;
    /** Paramaterised constructor
     */
        Memento(vector<Spaceship*> s);
        State* _state; /**<saved state*/
};

#endif