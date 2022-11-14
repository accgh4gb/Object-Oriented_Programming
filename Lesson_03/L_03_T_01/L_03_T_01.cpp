#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"
#include "Circle.h"

int main()
{
	Parallelogram p(45, 10, 10);
	p.area();
	Circle c(100);
	c.area();
	Rectangle r(12, 2);
	r.area();
	Square s(16);
	s.area();
	Rhombus ro(45, 10);
	ro.area();

	return 0;
}
