#ifndef INVADE_H
#define INVADE_H
#include "Command.h"
#include "ExplorationVessel.h"
#include <string>
#include <vector>
#include <iostream>

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
      Invade(Spaceship* ship) : receiver(ship){
          cout<<"Threat level high, but resources higher. Invading planet."<<endl;
      };
       
     

    private:
      Spaceship* receiver; 
      
};
#endif