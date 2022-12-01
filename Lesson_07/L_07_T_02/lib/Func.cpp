#include "Date.h"
#include "Pointer.h"

const Pointer<Date>& GetLatestDate(const Pointer<Date>& d1, const Pointer<Date>& d2)
{
	if (d1->DateYearGet() > d2->DateYearGet())
	{
		return d1;
	}
	else if (d1->DateYearGet() < d2->DateYearGet())
	{
		return d2;
	}
	else
	{
		if (d1->DateMonthGet() > d2->DateMonthGet())
		{
			return d1;
		}
		else if (d1->DateMonthGet() < d2->DateMonthGet())
		{
			return d2;
		}
		else
		{
			if (d1->DateDayGet() > d2->DateDayGet())
			{
				return d1;
			}
		}
	}
	return d2;
}

void swap(Pointer<Date>& d1, Pointer<Date>& d2)
{
	Pointer<Date> val;
	val = d1;
	d1 = d2;
	d2 = val;
}
