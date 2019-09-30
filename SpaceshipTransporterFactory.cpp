#include "SpaceshipTransporterFactory.h"
using namespace std;
SpaceshipTransporterFactory::SpaceshipTransporterFactory() : SpaceshipFactory(){

}
SpaceshipTransporterFactory::~SpaceshipTransporterFactory(){

}
Spaceship* SpaceshipTransporterFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->add(new Armory());
	s->add(new SleepingQuarters());
	s->add(new Bridge());
	s->add(new SpaceshipTransporter()); 
	return s;
}