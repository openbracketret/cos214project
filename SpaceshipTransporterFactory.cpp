#include "SpaceshipTransporterFactory.h"
#include "SpaceshipTransporter.h"
using namespace std;
SpaceshipTransporterFactory::SpaceshipTransporterFactory() : SpaceshipFactory(){

}
SpaceshipTransporterFactory::~SpaceshipTransporterFactory(){

}
Spaceship* SpaceshipTransporterFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new SpaceshipTransporter()); 
	return s;
}