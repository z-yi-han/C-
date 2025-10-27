#include"Date.h"
Date::Date(int year, int month, int day )
{
	_year = year;
	_month = month;
	_day = day;
}
bool Date:: CheckDate()
{
	if (_month < 1 || _month > 12
		|| _day < 1 || _day > GetMonthDay(_year, _month))
	{
		return false;
	}
	else
	{
		return true;
	}
}
void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day<<endl;
}
bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}

	return false;
}
bool Date:: operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date:: operator>(const Date& d)
{
	return !(*this <= d);
} 
bool Date:: operator>=(const Date& d)
{
	return (*this < d);
}
bool Date::operator==(const Date& d){
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d) 
{
	return !(*this == d);
}
