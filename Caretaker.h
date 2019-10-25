#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

using namespace std;
/** @brief Caretaker class
 */
class Caretaker {
	public:
	/** Store the memento
	 * @param mem - memento to be stored
	 */
  		void storeMemento(Memento* mem);
	/** Retrieve the memento
	 * @return memento
	 */
  		Memento* retreiveMemento();
	/** Default destructor
	 */
		~Caretaker();
	private:
  	    Memento* _mem; /**<the memento that is stored*/
};

#endif