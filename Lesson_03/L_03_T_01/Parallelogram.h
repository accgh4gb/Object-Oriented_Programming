#pragma once

#include "Figure.h"

class Parallelogram : public Figure
{
private:
	unsigned int AlphaAngle;	
	unsigned int a;
	unsigned int h;

public:
	//Parallelogram();
	Parallelogram(const unsigned int& new_angle = 90, const unsigned int& new_a = 1, const unsigned int& new_h = 1)
		: AlphaAngle(new_angle), a(new_a), h(new_h) {}

	virtual void area()
	{
       std::cout << "The area of the parallelogramm is " << a * h * std::sin(AlphaAngle * pi / 180) << std::endl;
    }

	virtual ~Parallelogram() {}
};
