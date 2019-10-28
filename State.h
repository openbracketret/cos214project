#ifndef STATE_H
#define STATE_H
#include "Spaceship.h"
#include <vector>

using namespace std;
/** @brief State class
 */
class State {
    public:
    /** Paramaterised constructor 
    *@param s vector of Spaceships
     */
        State(vector<Spaceship*> s);
    /** Get Spaceships from state
     * @return vector<Spaceship*>
     */
        vector<Spaceship*> getSpaceships(){return ships;};
    /** Default desctructor
     */
        ~State();


    private:
       vector<Spaceship*> ships;/**<ships saved*/
};

#endif