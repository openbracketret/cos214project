#include "FrigateFactory.h"
using namespace std; 

FrigateFactory::FrigateFactory() : SpaceshipFactory(){

}
FrigateFactory::~FrigateFactory(){

}
Spaceship* s FrigateFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->add(new Armory());
	s->add(new SleepingQuarters());
	s->add(new Bridge());
	s->add(new Frigate()); 
	return s;
}