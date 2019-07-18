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
 * FUNCTION  ReadFileToIntAr
 *________________________________________________________________________
 * This function reads in from a file and stores the information in a string
 ************************************************************************/

void ReadFileToIntAr(int intAr[], const int AR_SIZE)
{
	ifstream inFile;		// IN 	- input file variable
	int		 count;			// CALC - counter for the for loop
	string	 totalNumber;	// CALC - accumulator for the numbers
	string   number;		// CALC - temporary location for storage

	cout << "Reading from an Input File.\n\n";

	inFile.open("Outputs");

	for(count = 0; count < AR_SIZE; count ++)
	{
		totalNumber = totalNumber + number;
		inFile >> number;
	}
	cout << totalNumber << endl;

	inFile.close();
}
