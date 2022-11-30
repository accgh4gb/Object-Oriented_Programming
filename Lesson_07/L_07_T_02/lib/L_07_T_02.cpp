#include <iostream>
#include "Func.cpp"

int main()
{
	Pointer<Date> pD1(new Date(12,2,1876));
	Pointer<Date> pD2(new Date(31,05,1992));
	std::cout<<"latest date: "<<*GetLatestDate(pD1, pD2);
	std::cout<<"date1: "<<*pD1;
	std::cout<<"date2: "<<*pD2;
	swap(pD1, pD2);
	std::cout<<"swaped date1 and date2\ndate1: "<<*pD1;
	std::cout<<"date2: "<<*pD2;

	return 0;
}
