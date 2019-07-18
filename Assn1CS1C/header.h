/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 1
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/7/2016
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <limits>
#include <ios>
using namespace std;


/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader();

/*************************************************************************
* Sum
* ________________________________________________________________________
* This function reads in a number and the digits of the number and then
* will calculate the sum of each of the digits and output it to the
* console
*************************************************************************/
void Sum(int num, int digits);

/*************************************************************************
* Reverse
* ________________________________________________________________________
* This function reads in a number and store the digits of the number using
* a typedef enum, then it will re save the digits in a reversed order and
* outputs the new reversed number
*************************************************************************/
void Reverse(int num, int digits);

/*************************************************************************
* StoreRand
* ________________________________________________________________________
* This function saves a number of integers, equal to the array size, in to
* a number array that is passed in from the main function
*************************************************************************/
void StoreRand(int numAr[], const int AR_SIZE);

/*************************************************************************
* InsertionSort
* ________________________________________________________________________
* This function sorts through an array of integers and orders them in
* ascending numerical order
*************************************************************************/
void InsertionSort(int intAr[], const int AR_SIZE);

/*************************************************************************
* WriteIntArToOutfile
* ________________________________________________________________________
* This function writes an integer array to an output file
*************************************************************************/
void WriteIntArToOutfile(int intAr[], const int AR_SIZE);

/*************************************************************************
* ReadFileToIntAr
* ________________________________________________________________________
* This function reads in from a file and stores the information in a string
*************************************************************************/
void ReadFileToIntAr(int intAr[], const int AR_SIZE);

/*************************************************************************
* OutputIntAr
* ________________________________________________________________________
* This function outputs an integer array to the console
*************************************************************************/
void OutputIntAr(int intAr[], const int AR_SIZE);


#endif /* HEADER_H_ */
