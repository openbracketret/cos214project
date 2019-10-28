#include "FighterTransporterFactory.h"
#include "FighterTransporter.h"
using namespace std;
FighterTransporterFactory::FighterTransporterFactory() : SpaceshipFactory(){

}
FighterTransporterFactory::~FighterTransporterFactory(){

}
Spaceship* FighterTransporterFactory::spaceShipFactoryMethod(string n){

	Spaceship* s = new FighterTransporter(n);
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new FighterBay());
	s->addComponent(new SickBay()); 
	return s;
}