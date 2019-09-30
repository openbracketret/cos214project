#include "ExplorationVesselFactory.h"
using namespace std;

ExplorationVesselFactory::ExplorationVesselFactory() : SpaceshipFactory(){

}
ExplorationVesselFactory::~ExplorationVesselFactory(){

}
Spaceship* ExplorationVesselFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->add(new Armory());
	s->add(new SleepingQuarters());
	s->add(new Bridge());
	s->add(new ExplorationVessel()); 
	return s;
}