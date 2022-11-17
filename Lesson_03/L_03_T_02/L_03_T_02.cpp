#include "Minivan.h"

int main()
{
	Car* pC = new Car;// вызывается конструктор Car
	Bus* pB = new Bus;// вызывается Car > Bus
	PassengerCar* pP = new PassengerCar;// вызывается Car > PassengerCar
	Minivan* pM = new Minivan;// вызывается Car > Bus > PassengerCar > Minivan
	// если базовый класс Car не виртуальный, то будет вызываться
	// Car > Bus > Car > PassengerCar > Minivan

	return 0;
}
