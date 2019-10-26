#ifndef Retreat_H
#define Retreat_H
#include "Command.h"
#include <string>
#include <vector>

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
       
     

    private:
      ExplorationVessel* receiver; 
      
};
#endif