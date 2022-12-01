#include <iostream>
#include "Date.h"
#include "Pointer.h"

int main()
{
	Pointer<Date> d(new Date(21, 11, 1476));
	Pointer<Date> date;
	std::cout << "Date: " << d->DateDayGet() << "." << d->DateMonthGet() << "." << d->DateYearGet() << "\n";
	std::cout << "Today\n" << *d;
	std::cout << "Today " << (d.isNull() ? "null!\n" : "not null!\n");
	std::cout << "Date " << (date.isNull() ? "null!\n" : "not null!\n");
	date = d;
	std::cout << "Today " << (d.isNull() ? "null!\n" : "not null!\n");
	std::cout << "Date " << (date.isNull() ? "null!\n" : "not null!\n");

	std::cout << *date << "\n";

	return 0;
}
