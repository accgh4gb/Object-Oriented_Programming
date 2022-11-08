#include <iostream>
#include "Power.h"


int main()
{
	Power one;
	std::cout << one.calculate() << std::endl;
	one.set(1.1, 12);
	std::cout << one.calculate() << std::endl;
	one.set(3.1, -3);
	std::cout << one.calculate() << std::endl;
	return 0;
}
