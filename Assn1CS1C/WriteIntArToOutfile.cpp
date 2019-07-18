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
 * FUNCTION  WriteIntArToOutfile
 *________________________________________________________________________
 * This function writes an integer array to an output file
 ************************************************************************/

void WriteIntArToOutfile(int intAr[], const int AR_SIZE)
{
	ofstream outFile;		// OUT  - Output file variable
	int		 count;			// CALC - Counter for the for loop

	outFile.open("Outputs");

	for(count = 0; count < AR_SIZE; count ++)
	{
		outFile << intAr[count] << endl;
	}
	outFile.close();
	cout << "\nWriting to and Output File.\n\n";
}
