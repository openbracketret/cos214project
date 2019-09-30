#ifndef SpaceshipFactory_H
#define SpaceshipFactory_H

#include <string>
#include <vector>

using namespace std;

class SpaceshipFactory
{
private:
	
double displacement;
double power;
double thrust;
double maxSpeed;
double stallSpeed;
int crew;
int passengerCapacities;


public:

	SpaceshipFactory();
	~SpaceshipFactory();
	
};

#endif