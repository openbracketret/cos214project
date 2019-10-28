#ifndef INVADE_H
#define INVADE_H
#include "Command.h"
#include "ExplorationVessel.h"
#include <string>
#include <vector>

using namespace std;
/** @brief Planet class
 */
class Invade : public Command{

    public:
    /** default constructor
     */
       Invade(); 
    /** Execute Function That will call The Receivers action function
     */
     void execute(); 
      
      /**Default Destructor 
      */
       ~Invade();

      /** Paramaterised constructor
       * @param ship
       */
      Invade(Spaceship* ship) : receiver(ship){};
       
     

    private:
      Spaceship* receiver; 
      
};
#endif