#ifndef MINE_H
#define MINE_H
#include "Command.h"
#include "ExplorationVessel.h"
#include <string>
#include <vector>

using namespace std;
/** @brief Planet class
 */
class Mine : public Command{

    public:
    /** default constructor
     */
       Mine(); 
    /** Execute Function That will call The Receivers action function
     */
     void execute(); 
      
      /**Default Destructor 
      */
       ~Mine();

      /** Paramaterised constructor
       * @param ship
       */

      Mine(Spaceship* ship) : receiver(ship){};
       
     

    private:
      Spaceship* receiver; 
      
};
#endif