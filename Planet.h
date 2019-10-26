#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <vector>
#include <ExplorationVessel.h>
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
      ~Planet();
      double getResourceRate();
      double getThreatLevel(); 
      void setResourceRate(double);
      void setThreatLevel(double);
      bool attach(ExplorationVessel* e);
      bool detach(ExplorationVessel* e);
      void notify();
      

    private:
    	string name;/**<Name Of The Planet*/
      vector<ExplorationVessel*> observers;/**list of observers to planet*/
    	double resourceRate; /**<Rate At Which Resources Can Be Mined on The Planet*/
    	double threatLevel; /**<Level of Threat The Planet Possesses */
      vector<Spaceship*> stationed; /**Spaceships stationed on planet */
      
};
#endif