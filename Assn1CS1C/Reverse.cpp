/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 1
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/7/2016
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  Reverse
 *________________________________________________________________________
 * This function reads in a number and store the digits of the number using
 * a typedef enum, then it will re save the digits in a reversed order and
 * outputs the new reversed number
 ************************************************************************/

void Reverse(int num, int digits)
{
	typedef enum
	{
		FIRST,
		SECOND,
		THIRD
	}numOrder;


	numOrder order;				// CALC - Order for the digits of a number
	const int AR_SIZE = 2;		// CALC - Size for the array
	int reversedNum[AR_SIZE];	// CALC - Array for the digits
	int count;					// CALC - Counter for the for loop

	reversedNum[0] = 0;
	reversedNum[1] = 0;
	reversedNum[2] = 0;

	// Sets order to a specific value depended on which loop the for loop is on
	for(count = 0; count < digits; count++)
	{
		if(count == 0)
		{
			order = FIRST;
		}
		else if(count == 1)
		{
			order = SECOND;
		}
		else if(count == 2)
		{
			order = THIRD;
		}

		// Based on the value of order, a specific step will be taken
		switch(order)
		{
			case FIRST  : reversedNum[count] = num % 10;
				break;
			case SECOND : reversedNum[count] = (num % 100) / 10;
				break;
			case THIRD	: reversedNum[count] = num / 100;
				break;
		}
	}

	// Outputs the new number but reversed
	cout << endl << reversedNum[0] << reversedNum[1]
		 <<	reversedNum[2] << endl << endl;
}

