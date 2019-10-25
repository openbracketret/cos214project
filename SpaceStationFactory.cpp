#include "SpaceStationFactory.h"
#include "Spacestation.h"

SpaceStationFactory::SpaceStationFactory() : SpaceshipFactory(){

}

SpaceStationFactory::~SpaceStationFactory(){

}

Spaceship* SpaceStationFactory::spaceshipFactoryMethod(){
    Spaceship* s = new SickBay();
	s->addComponent(new TransportBay(-1)); //We give the spacestation -1 maxCapacity as this allows infinite spaceships to be added
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
    s->addComponent(new RefuelStation());
	s->addComponent(SpaceStation::instance());
	return s;
}