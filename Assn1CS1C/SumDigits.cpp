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
 * FUNCTION  Sum
 *________________________________________________________________________
 * This function reads in a number and the digits of the number and then
 * will calculate the sum of each of the digits and output it to the
 * console
 ************************************************************************/

void Sum(int num, int digits)
{
	int tempNum;		// CALC - Temporary storage for the passed number so
						//		  it can be modified
	int numberSum = 0;	// CALC - Accumulator for the sum
	int count;			// CALC - Counter for the for loop

	tempNum = num;
	for (count = 1; count <= digits; count++)
	{
		numberSum = numberSum + tempNum % 10;
		tempNum = tempNum / 10;
	}
	cout << endl << numberSum << endl << endl;
}
