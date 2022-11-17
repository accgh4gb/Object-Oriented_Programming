#include "Parallelogram.h"

class Rhombus : public Parallelogram
{
private:
 	unsigned int angle;
 	unsigned int a;

public:
	Rhombus(const unsigned int& new_angle = 45, const unsigned int& new_a = 1)
	: angle(new_angle), a(new_a) {}
	void area()
	{
	 	std::cout << "The area of the rhombus is " << a * a * std::sin(angle * pi / 180) << std::endl;
	}

	virtual ~Rhombus() {}
};
