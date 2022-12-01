#include <iostream>
#include <ostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(const int m_day = 0, const int m_month = 0, const int m_year = 0);
	~Date() {}
	const int& DateDayGet() const { return day; }
	const int& DateMonthGet() const { return month; }
	const int& DateYearGet() const { return year; }
	void DateDaySet(const int m_day);
	void DateMonthSet(const int m_month);
	void DateYearSet(const int m_year);
	
	friend std::ostream& operator<<(std::ostream& os, Date& D);

};



