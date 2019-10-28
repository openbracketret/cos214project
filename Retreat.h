#ifndef Retreat_H
#define Retreat_H
#include "Command.h"
#include "ExplorationVessel.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;
/** @brief Planet class
 */
class Retreat : public Command{

    public:
    /** default constructor
     */
       Retreat(); 
    /** Execute Function That will call The Receivers action function
     */
     void execute(); 
      
      /**Default Destructor 
      */
       ~Retreat();

      /** Paramaterised constructor
       * @param ship
       */
      Retreat(Spaceship* ship) : receiver(ship){
        cout<<"Threat to high. Retreating from the planet"<<endl;
      };
       
     

    private:
      Spaceship* receiver; 
      
};
#endif