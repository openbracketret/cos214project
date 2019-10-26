#include "Planet.h"
#include <iostream>
using namespace std;

Planet::Planet(){
	
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
	s->visit(this);
}