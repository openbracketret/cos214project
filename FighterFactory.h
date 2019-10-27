/**
 * @file FighterFactory
*/
#ifndef FighterFactory_H
#define FighterFactory_H

#include <string>
#include <vector>
#include "PeopleFactory.h"
#include "Fighter.h"

using namespace std;
/** @brief Fighter Factory class
 */
class FighterFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	FighterFactory() {};
/** Default desctructor
 */
	~FighterFactory() {};
	People* create(){return new Fighter();};
};

#endif