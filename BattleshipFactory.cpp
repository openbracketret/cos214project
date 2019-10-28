#include "BattleshipFactory.h"
#include "Battleship.h"
using namespace std; 

BattleshipFactory::BattleshipFactory() : SpaceshipFactory() {

}

BattleshipFactory::~BattleshipFactory(){

}
Spaceship* BattleshipFactory::spaceShipFactoryMethod(string n){
	Spaceship* s = new Battleship(n);
	s->addComponent(new Armory());
	s->addComponent(new SleepingQuarters());
	s->addComponent(new Bridge());
	s->addComponent(new FighterBay());
	s->addComponent(new SickBay()); 
	return s;
}
