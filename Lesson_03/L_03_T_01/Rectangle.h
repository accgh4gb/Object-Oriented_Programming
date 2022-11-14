#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
private:
	unsigned int a;
	unsigned int b;

public:
	Rectangle(const unsigned int& new_a = 1, const unsigned int& new_b = 1)
	: a(new_a), b(new_b) {}
	void area()
	{
		std::cout << "The area of the rectangle is " << a * b << std::endl;
	}
};
