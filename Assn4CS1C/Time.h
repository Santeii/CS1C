/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
 ************************************************************************/

#ifndef TIME_H_
#define TIME_H_

#include "header.h"

class Date
{

	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Date();
		Date(int month, int day, int year);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~Date();
	/**************
	 ** MUTATORS **
	 **************/
		void updateDate(int month, int day, int year);
	/*****************
	 ** OVERLOADING **
	 *****************/
		Date& operator =(const Date&);
		friend std::ostream & operator<<(std::ostream & os,
		                       const Date & st);
		friend Date& operator>>(std::istream & is,
							   Date & st);

	private:
		int    month;
		int	   day;
		int	   year;

};



#endif /* TIME_H_ */
