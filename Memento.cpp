#include "Memento.h"

Memento::~Memento(){
    delete _state;
    _state = nullptr;
}

Memento::Memento(vector<Spaceship*> s){
    _state = new State(s);
}