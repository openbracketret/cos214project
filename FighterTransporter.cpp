#include "FighterTransporter.h"
#include <algorithm>
#include <iostream>

FighterTransporter::FighterTransporter()
{

}

FighterTransporter::~FighterTransporter(){

}

FighterTransporter::FighterTransporter(string n){
    maxCapacity = 50;
    currentCapacity = 0;
}

void FighterTransporter::addPerson(People* p){
    if (currentCapacity < maxCapacity || maxCapacity == -1){
        persons.push_back(p);
        currentCapacity++;
    } else {
        cout<<"Transporter bay at full capacity"<<endl;
    }
}

void FighterTransporter::removePerson(People* p){
    vector<People*>::iterator it = find(persons.begin(), persons.end(), p);
    if (it != persons.end()){
        persons.erase(it);
        currentCapacity--;
    } else {
        cout << "Person is not on this ship" <<endl;
    }
}
