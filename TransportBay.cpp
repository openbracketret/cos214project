#include "TransportBay.h"
#include <algorithm>
#include <iostream>

TransportBay::TransportBay() : SpaceshipDecorator() {

}

TransportBay::~TransportBay() {
    
}

TransportBay::TransportBay(int maxCapacity){
    this->maxCapacity = maxCapacity;
}

void TransportBay::addShip(Spaceship* s){
    if (currentCapacity < maxCapacity || maxCapacity == -1){
        ships.push_back(s);
        currentCapacity++;
    } else {
        cout<<"Transporter bay at full capacity"<<endl;
    }
}

void TransportBay::removeShip(Spaceship* s){
        vector<Spaceship*>::iterator it = find(ships.begin(), ships.end(), s);
        if (it != ships.end()){
            ships.erase(it);
            currentCapacity--;
        }
}

Memento* TransportBay::createMemento(vector<Spaceship*> s){
    return new Memento(s);
}

void TransportBay::reinstateMemento(Memento* mem){
    State* state = mem->_state;
    vector<Spaceship*> s = state->getSpaceships();

    for (int i=0;i<s.size();i++){
        ships[i] = s[i];
    }
}