#include "Planet.h"
#include <iostream>
#include <ctime>

using namespace std;

Planet::Planet(string n){
	name = n;
	srand(time(NULL));
	resourceRate = rand() % 9050 + 50;
	srand(time(NULL));
	threatLevel = rand() % 101;
}

Planet::Planet(string n, double rR, double tL){
	name = n;
	resourceRate = rR;
	threatLevel = tL;
}


Planet::~Planet(){

}


double Planet::getResourceRate(){
	return resourceRate;
}
double Planet::getThreatLevel(){
	return threatLevel;
}
void Planet::setResourceRate(double rR){
	resourceRate = rR;
}
void Planet::setThreatLevel(double tL){
	threatLevel = tL ;
}

void Planet::accept(Spaceship* s){
	visited = true;
	cout << "Planet accepting spaceship" << endl;
	s->visit(this);
}