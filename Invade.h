#ifndef INVADE_H
#define INVADE_H
#include "Command.h"
#include <string>
#include <vector>

using namespace std;
/** @brief Planet class
 */
class Inavde : public Command{

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
       
     

    private:
      ExplorationVessel* receiver; 
      
};
#endif