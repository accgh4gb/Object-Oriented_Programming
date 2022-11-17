#include "Fraction.h"

int main()
{
	Fraction f1(12, 177);
	Fraction f2(14, 5);
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;
	f1 = -f1;
	f2.GetValues();
	f3.GetValues();
	f4.GetValues();
	f5.GetValues();
	f6.GetValues();
	f1.GetValues();

	if (f1 == f2)
	{
		std::cout << "Equal" << std::endl;
	}
	
	if (f1 != f2)
	{
		std::cout << "Not equal" << std::endl;
	}
	
	if (f1 > f2)
	{
		std::cout << "Number " << f1.GetNum() << "/" << f1.GetDenom()
		<< " > " << f2.GetNum() << "/" << f2.GetDenom() << std::endl;
	}
	
	if (f1 < f2)
	{
		std::cout << "Number " << f1.GetNum() << "/" << f1.GetDenom()
		<< " < " << f2.GetNum() << "/" << f2.GetDenom() << std::endl;
	}

	return 0;
}
