#include "SpaceStationFactory.h"
#include "Spacestation.h"

SpaceStationFactory::SpaceStationFactory() : SpaceshipFactory(){

}

SpaceStationFactory::~SpaceStationFactory(){

}

Spaceship* SpaceStationFactory::spaceshipFactoryMethod(){
    Spaceship* s = new SickBay();
	s->addComponent(new TransportBay());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
    s->addComponent(new RefuelStation());
	s->addComponent(SpaceStation::instance());
}