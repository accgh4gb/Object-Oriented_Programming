#include "Ex.h"

class Bar
{
private:
	double y;

public:
	Bar(const double& _y = 0.0) : y(_y) {}
	void setBar(double a)
	{
		if ((y + a) > 100) 
		{
			y = a; 
		}
		else
		{
			throw Ex(a * y);
		}		
	}
};
