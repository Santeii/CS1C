/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 12
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
#include <vector>
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
* Lotto
* ________________________________________________________________________
* Calculates a number of spots and then shuffles them, making sure there
* are no duplicates, then the vector is resized, sorted, and returned
*************************************************************************/
vector<int> Lotto(const int spots, const int chosen);


#endif /* HEADER_H_ */
