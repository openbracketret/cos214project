#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

using namespace std;

class Caretaker {
	public:
  		void storeMemento(Memento* mem);
  		Memento* retreiveMemento();
		~Caretaker();
	private:
  	    Memento* _mem;
};

#endif