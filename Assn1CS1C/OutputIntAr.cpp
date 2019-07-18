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
 * FUNCTION  OutputIntAr
 *________________________________________________________________________
 * This function outputs an integer array to the console
 ************************************************************************/

void OutputIntAr(int intAr[], const int AR_SIZE)
{
	int count; 		// CALC - counter for the for loop

	for(count = 0; count < AR_SIZE; count ++)
	{
		cout << count + 1 << ". " << intAr[count] << endl;
	}
}
