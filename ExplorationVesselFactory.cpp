#include "ExplorationVesselFactory.h"
#include "ExplorationVessel.h"
using namespace std;

ExplorationVesselFactory::ExplorationVesselFactory() : SpaceshipFactory(){

}
ExplorationVesselFactory::~ExplorationVesselFactory(){

}
Spaceship* ExplorationVesselFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new ExplorationVessel()); 
	return s;
}