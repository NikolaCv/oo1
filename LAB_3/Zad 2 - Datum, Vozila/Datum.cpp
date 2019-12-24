#include "Datum.h"

Datum::Datum(int day = 28, int month = 12, int year = 2019) :day(day), month(month), year(year)
{
}

int Datum::operator[](const string & s) const
{
	if (s != "dan" && s != "mesec" && s != "godina") throw myExceptions::InvalidDateIndexException();
	
	if (s == "dan") return day;
	if (s == "mesec") return month;
	if (s == "godina") return year;
}

bool operator<(const Datum& date1, const Datum& date2)
{
	if (to_string(date1.day) + to_string(date1.month) + to_string(date1.year)
		< to_string(date2.day) + to_string(date2.month) + to_string(date2.year))
		return true;
	return false;
}

bool operator>(const Datum& date1, const Datum& date2)
{
	if (to_string(date1.day) + to_string(date1.month) + to_string(date1.year)
		> to_string(date2.day) + to_string(date2.month) + to_string(date2.year))
		return true;
	return false;
}

unsigned operator-(const Datum & date1, const Datum & date2)
{
	return 0;
}

ostream & operator<<(ostream & out, const Datum & d)
{
	out << d.day << "." << d.month << "." << d.year << ".";
	return out;
}
