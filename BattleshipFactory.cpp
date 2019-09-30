#include "BattleshipFactory.cpp"
using namespace std; 

BattleshipFactory::BattleshipFactory() : SpaceshipFactory() {

}

BattleshipFactory::~BattleshipFactory(){

}
Spaceship* spaceShipFactoryMethod(){
	Spaceship* s = new SickBay();
	s->add(new Armory());
	s->add(new SleepingQuarters());
	s->add(new Bridge());
	s->add(new BattleShip()); 
	return s;
}
