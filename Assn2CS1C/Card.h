/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

#ifndef CARD_H_
#define CARD_H_

#include "header.h"

class Card
{
public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Card();  // default constructor
		Card(int freshSuit, int freshRank);

	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~Card(); // default deconstructor

	/**************
	 ** MUTATORS **
	 **************/
		suit getSuit();
		rank getRank();
		void read(suit &readSuit, rank &readRank);

	/***************
	 ** ACCESSORS **
	 ***************/
		void print() const;

private:
	suit cardSuit;
	rank cardRank;
};



#endif /* CARD_H_ */
