#include "BattleshipFactory.h"
#include "Battleship.h"
using namespace std; 

BattleshipFactory::BattleshipFactory() : SpaceshipFactory() {

}

BattleshipFactory::~BattleshipFactory(){

}
Spaceship* BattleshipFactory::spaceShipFactoryMethod(){
	Spaceship* s = new SickBay();
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new Battleship()); 
	return s;
}
