#include "Power.h"
#include <cassert>


void Power::set(double value, double exp)
{
	a = value;
	b = exp;
}

double Power::calculate()
{
	assert(b >= 0);
	double result = 1;
	if (b == 0)
	{
		return result;
	}
	else
	{
		std::cout << "The result of raising the number " << a << " to the power of " << b << " is ";
		return std::pow(a, b);
	}
}
