#include "SpaceshipTransporterFactory.h"
#include "SpaceshipTransporter.h"
using namespace std;
SpaceshipTransporterFactory::SpaceshipTransporterFactory() : SpaceshipFactory(){

}
SpaceshipTransporterFactory::~SpaceshipTransporterFactory(){

}
Spaceship* SpaceshipTransporterFactory::spaceShipFactoryMethod(string n){

	Spaceship* s = new SickBay();
	s->addComponent(new TransportBay());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new RefuelStation());
	s->addComponent(new SpaceshipTransporter(n)); 
	return s;
}