#ifndef CaptainFactory_H
#define CaptainFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"
#include "Captain.h"

using namespace std;
/** @brief Captain Factory class
 */
class CaptainFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	CaptainFactory() {};
/** Default desctructor
 */
	~CaptainFactory() {};
	People* create() {return new Captain();};
};

#endif