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
 * Assignment 1
 * _______________________________________________________________________
 * This program will use a random number generator to generate a three
 * digit integer that will sum the digits, triple the number, and
 * reverse the digits. It will also use an enum, typedef, and string
 * variable, then it will store 10 random numbers in to an array, sort the
 * array, write the array to an external file, call a function to read
 * the external file, and print the array in a function.
 * _______________________________________________________________________
 * INPUT:
 *	int num			 - Random number that is generated and used for tests
 *	int group[]		 - Int array that is used to store 10 random ints
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/
	int main()
	{

	/*********************************************************************
	* COSNTANTS
	* ___________________________________________________________________
	* AR_SIZE = 10 ; size of the array
	********************************************************************/
	const int AR_SIZE = 10;

	/*******************************************************************/
	//---------------------------------------------------------------------

	int num;				// INPUT - random number that is generated
	int group[AR_SIZE];		// INPUT - random numbers in an array

	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();
	srand(123); // Seeds the random number

	// This block will calculate a random number and output it to the
	// console so that the user can see what the number is
	num = rand() % 900 +100;
	cout << "A.\n\n";
	cout << num << endl << endl;
	cout << "1.\n";

	// This function takes all of the digits of a number and adds them up
	Sum(num, 3);

	// This block a number and triples the number
	cout << "2.\n";
	cout << endl << (num * 3) << endl << endl;

	// This block uses a function that will read each digit from a number
	// and then reverse the digits and then output the new number
	cout << "3.\n";
	Reverse(num, 3);

	// This block uses a function that will store 10 random single digit
	// integers in to an array of integers
	cout << "C.\n\n";
	StoreRand(group, AR_SIZE);

	// This block uses a function that sorts through the array and leaves the
	// array in numerical order from smallest to largest
	cout << "\nD.\n";
	InsertionSort(group, AR_SIZE);

	// This block uses a function that will write integers from an array
	// to an output file
	cout << "\nE.\n";
	WriteIntArToOutfile(group, AR_SIZE);

	// This block uses a function to read the integers in from an array and
	// save them in a string and then output the string
	cout << "F.\n\n";
	ReadFileToIntAr(group, AR_SIZE);

	// This block uses a function that outputs the integer array
	cout << "\nG.\n\n";
	OutputIntAr(group,AR_SIZE);

	return 0;
}
