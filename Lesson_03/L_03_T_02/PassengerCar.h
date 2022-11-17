#include "Car.h"

class PassengerCar : virtual public Car
{
public:
	PassengerCar() { std::cout << __FUNCTION__ << std::endl; }
	~PassengerCar() { std::cout << "PassengerCar Destructor" << std::endl; }
};
