/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 11
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/14/2016
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ios>
#include <cassert>
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
* QueueOptions
* ________________________________________________________________________
* This function outputs a list of options for the user to choose from for
* the queue
* - returns the selection for the list of the queue options
*************************************************************************/
int QueueOptions();


#endif /* HEADER_H_ */
