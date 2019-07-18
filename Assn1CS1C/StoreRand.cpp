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
 * FUNCTION  StoreRand
 *________________________________________________________________________
 * This function saves a number of integers, equal to the array size, in to
 * a number array that is passed in from the main function
 ************************************************************************/

void StoreRand(int numAr[], const int AR_SIZE)
{
	int count;		// CALC - Counter for the for loop

	for(count = 0; count < AR_SIZE; count++)
	{
		numAr[count] = rand() % 10;
		cout << count + 1 << ". " << numAr[count] << endl;
	}
}
