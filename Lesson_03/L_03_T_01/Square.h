#include "Parallelogram.h"

class Square : public Parallelogram
{
private:
	unsigned int a;

public:
	Square(const unsigned int& new_a = 1) : a(new_a) {}
	void area()
	{
		std::cout << "The area of the square is " << a * a << std::endl;
	}

	virtual ~Square() {}
};
