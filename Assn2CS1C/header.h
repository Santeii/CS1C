/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ios>
using namespace std;

typedef enum
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
} suit;

typedef enum
{
	KING,
	QUEEN,
	JACK,
	TEN,
	NINE,
	EIGHT,
	SEVEN,
	SIX,
	FIVE,
	FOUR,
	THREE,
	TWO,
	ACE
} rank;


/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader();

#endif /* HEADER_H_ */
