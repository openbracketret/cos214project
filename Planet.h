#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <vector>
using namespace std;
/** @brief Planet class
 */
class Planet {

    public:
    /** default constructor
     */
       Planet();
    /** Paramaterised constructor
     */
       Planet(string n, double rR , double tL);
      /**Default Destructor 
      */
       ~Planet(){};
       double getResourceRate();
       double getThreatLevel(); 
       void setResourceRate();
       void setThreatLevel();

    private:
    	string name;/**<Name Of The Planet*/
    	double resourceRate; /**<Rate At Which Resources Can Be Mined on The Planet*/
    	double threatLevel; /**<Level of Threat The Planet Possesses  */
};