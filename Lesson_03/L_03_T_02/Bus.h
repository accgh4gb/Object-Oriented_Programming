#include "Car.h"

class Bus : virtual public Car
{
public:
	Bus() { std::cout << __FUNCTION__ << std::endl; }
	~Bus() { std::cout << "Bus destructor" << std::endl; }
	
};
