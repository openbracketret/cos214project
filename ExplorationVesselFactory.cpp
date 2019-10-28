#include "ExplorationVesselFactory.h"
#include "ExplorationVessel.h"
using namespace std;

ExplorationVesselFactory::ExplorationVesselFactory() : SpaceshipFactory(){

}
ExplorationVesselFactory::~ExplorationVesselFactory(){

}
Spaceship* ExplorationVesselFactory::spaceShipFactoryMethod(string n){

	Spaceship* s = new ExplorationVessel(n);
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new SickBay()); 
	return s;
}