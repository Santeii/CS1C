/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 5
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * Outputs the class header
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ************************************************************************/
void ClassHeader()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	  : Programmer's Name
	 * CLASS		  : Student's Course
	 * SECTION		  : Class Days and Times
	 * LAB_NUM		  : Lab Number (specific to this lab)
	 * LAB_NAME		  : Title of the Lab

	 ********************************************************************/

	const char PROGRAMMER[30] = "Ryan Martinez";
	const char CLASS[5] = "CS1C";
	const char SECTION[25] = "MTWTH: 4:00p - 7:20p";
	const int LAB_NUM = 5;
	const char LAB_NAME[25] = "Assignment 5";

	cout << left;
	cout << "**************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  Lab #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;
}
