#include "FighterTransporterFactory.h"
using namespace std;
FighterTransporterFactory::FighterTransporterFactory() : SpaceshipFactory(){

}
FighterTransporterFactory::~FighterTransporterFactory(){

}
Spaceship* FighterTransporterFactory::spaceShipFactoryMethod(){

	Spaceship* s = new SickBay();
	s->add(new Armory());
	s->add(new SleepingQuarters());
	s->add(new Bridge());
	s->add(new FighterTransporter()); 
	return s;
}