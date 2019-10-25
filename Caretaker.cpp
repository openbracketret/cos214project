#include "Caretaker.h"

void Caretaker::storeMemento(Memento* mem) {
    _mem = mem;
}

Caretaker::~Caretaker() {
    delete _mem;
}

Memento* Caretaker::retreiveMemento(){
    return _mem;
}