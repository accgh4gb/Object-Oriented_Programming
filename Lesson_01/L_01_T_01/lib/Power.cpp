#include "Power.h"
#include <cassert>


void Power::set(double value, double power)
{
	a = value;
	b = power;
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
		while (b > 0)
		{
			result *= a;
			--b;
			std::cout << result << ", ";
		}	
		return result;
	}
}
