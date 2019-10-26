#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include <vector>

using namespace std;
/** @brief Planet class
 */
class Commmand{

    public:
    /** default constructor
     */
       Command();
    /** Pure Virtual Execute Function That will be implemented by sub classes
     */
      virtual void execute() = 0; 
      
      /**Default Destructor 
      */
       ~Command();
       
     

    private:
      

      
};
#endif