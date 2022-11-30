#include "Date.h"

Date::Date(const int m_day, const int m_month, const int m_year)
{
	if (m_day > 0 && m_day <= 31)
    {
	    day = m_day;
    }   
	if (m_month > 0 && m_month <= 12)
	{
		month = m_month;
	}
	if (m_year > 0)
	{
		year = m_year;
	}
}
void Date::DateDaySet(const int m_day)
{
	if (m_day > 0 && m_day <= 31)
   	{
		day = m_day;	
	}
	else
	{
		std::cout << "Wrong value of a day" << std::endl;
	}
}

void Date::DateMonthSet(const int m_month)
{
	if (m_month > 0 && m_month <= 12)
    {
		month = m_month;
    }
    else
	{
		std::cout << "Wrong value of a month" << std::endl;
    }
}

void Date::DateYearSet(const int m_year)
{
	if (m_year > 0)
   	{
		year = m_year;	
	}
	else
	{
		std::cout << "Wrong value of a year" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Date& D)
{
	os << "Date: " << D.DateDayGet() << "." << D.DateMonthGet() << "." << D.DateYearGet() << std::endl;
	return os;
}
