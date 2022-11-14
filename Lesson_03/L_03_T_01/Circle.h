#include "Figure.h"

class Circle : public Figure
{
private:
	unsigned int Radius;

public:
	Circle(const unsigned int& new_R = 1) : Radius(new_R) {}
	void area()
    {
		std::cout << "The area of the circle is " << Radius * Radius * pi << std::endl;
	}		

	virtual ~Circle() {}
};
