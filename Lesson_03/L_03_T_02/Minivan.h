#include "Bus.h"
#include "PassengerCar.h"

class Minivan : public Bus, public PassengerCar
{
public:
	Minivan() {	std::cout << __FUNCTION__ << std::endl;	}
	~Minivan() { std::cout << "Minivan destructor" << std::endl; }
};
