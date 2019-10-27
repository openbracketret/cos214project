#include "FrigateFactory.h"
#include "Frigate.h"
using namespace std; 

FrigateFactory::FrigateFactory() : SpaceshipFactory(){

}
FrigateFactory::~FrigateFactory(){

}
Spaceship* FrigateFactory::spaceShipFactoryMethod(string n){

	Spaceship* s = new SickBay();
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new Frigate(n)); 
	return s;
}