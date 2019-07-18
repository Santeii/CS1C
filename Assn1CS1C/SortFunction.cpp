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
 * FUNCTION  InsertionSort
 *________________________________________________________________________
 * This function sorts through an array of integers and orders them in
 * ascending numerical order
 ************************************************************************/
void InsertionSort(int intAr[], const int AR_SIZE)
{
	cout << "\nSorting...\n\n";
	int temp;	// CALC - Temporary variable
	int j;		// CALC - Index that is being accessed from the int array
	int i;		// CALC - Counter for the sort loop
	int count;	// CALC - Counter for the output loop

	temp = 0;

	for(i = 1; i< AR_SIZE; ++i)
	{
		temp = intAr[i];
		j = i-1;
		while(j >= 0 && intAr[j] > temp)
		{
			intAr[j+1] = intAr[j];
			j = j-1;
		}
		intAr[j+1] = temp;
	}
	for(count = 0; count < AR_SIZE; count++)
	{
		cout << count + 1 << ". " << intAr[count] << endl;
	}
}
