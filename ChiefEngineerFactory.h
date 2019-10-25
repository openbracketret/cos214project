#ifndef CheifEngineerFactory_H
#define CheifEngineerFactory_H

#include <string>
#include <vector>
#include "People.h"
#include "PeopleFactory.h"

using namespace std;
/** @brief Chief Engineer Factory
 */
class CheifEngineerFactory : public PeopleFactory
{


public:
/** Default constructor
 */
	CheifEngineerFactory();
	/** Default destructor
	 */
	~CheifEngineerFactory();
	
};

#endif