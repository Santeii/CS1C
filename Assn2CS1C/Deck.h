/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

#ifndef DECK_H_
#define DECK_H_

#include "header.h"
#include "Card.h"

// CONSTANTS
const int DECK_SIZE = 52;
const int SUIT_SIZE = 4;
const int RANK_SIZE = 13;


const string SUIT[SUIT_SIZE]  = {"CLUBS", "DIAMONDS" "HEARTS", "SPADES"};

const string RANK[RANK_SIZE]  = {"KING", "QUEEN", "JACK", "TEN"
"NINE", "EIGHT", "SEVEN", "SIX", "FIVE", "FOUR", "THREE", "TWO", "ACE"};


class Deck
{
	public:

	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Deck();  // default constructor


	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~Deck(); // default deconstructor

	/**************
	 ** MUTATORS **
	 **************/
		void getValues(Card newDeck[], const int DECK_SIZE);
		void shuffle();
		bool compareDecks(Card newDeck[], const int DECK_SIZE);

	/***************
	 ** ACCESSORS **
	 ***************/
		void print() const;

private:
	Card deckOfCards[DECK_SIZE];
};



#endif /* DECK_H_ */
