/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
 ************************************************************************/

#include "Time.h"

/******************
 ** CONSTRUCTORS **
 ******************/
Date::Date()
{
	month = '0';
	day = 0;
	year = 0;
}

Date::Date(int newMonth, int newDay, int newYear)
{
	month = newMonth;
	day = newDay;
	year = newYear;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Date::~Date()
{}

/**************
 ** MUTATORS **
 **************/
/*************************************************************************
* void updateDate(int newMonth, int newDay, int newYear)
* Mutator: updates the month, day, and year variables
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Date::updateDate(int newMonth, int newDay, int newYear)
{
	month = newMonth;
	day = newDay;
	year = newYear;
}

/***************
 ** ACCESSORS **
 ***************/
/*************************************************************************
* Date& Date::operator =(const Date& name)
* Acessor: overloads the = operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: *this
*************************************************************************/
Date& Date::operator =(const Date& name)
{
	month = name.month;
	day   = name.day;
	year  = name.year;
	return *this;
}

/*****************
 ** OVERLOADING **
 *****************/
/*************************************************************************
* std::ostream & operator<<(std::ostream & os, const Date & st)
* Overload: overloads the << operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: os
*************************************************************************/
std::ostream & operator<<(std::ostream & os, const Date & st)
{
	os << st.month << '/' << st.day << '/' << st.year;

	return os;
}

/*************************************************************************
* Date& operator>>(std::istream & is, Date & st)
* Overload: overloads the >> operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: is
*************************************************************************/
Date& operator>>(std::istream & is,
						   Date & st)
{
	cout << "Input month: ";
	is >> st.month;
	cout << "Input day: ";
	is >> st.day;
	cout << "Input year: ";
	is >> st.year;

	return st;
}