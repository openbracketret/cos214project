#include "FrigateFactory.h"
#include "Frigate.h"
using namespace std; 

FrigateFactory::FrigateFactory() : SpaceshipFactory(){

}
FrigateFactory::~FrigateFactory(){

}
Spaceship* FrigateFactory::spaceShipFactoryMethod(string n){

	Spaceship* s = new Frigate(n);
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new SickBay()); 
	return s;
}