/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

#include "Card.h"

/******************
 ** CONSTRUCTORS **
 ******************/

Card::Card()
{
	cardSuit = HEARTS;
	cardRank = ACE;
}

Card::Card(int newSuit, int newRank)
{
	suit freshSuit;
	rank freshRank;

	switch(newSuit)
	{
	case 0 : freshSuit = CLUBS;
		break;
	case 1 : freshSuit = DIAMONDS;
		break;
	case 2 : freshSuit = HEARTS;
		break;
	case 3 : freshSuit = SPADES;
		break;
	}

	switch(newRank)
	{
	case 0 : freshRank = ACE;
		break;
	case 1 : freshRank = TWO;
		break;
	case 2 : freshRank = THREE;
		break;
	case 3 : freshRank = FOUR;
		break;
	case 4 : freshRank = FIVE;
		break;
	case 5 : freshRank = SIX;
		break;
	case 6 : freshRank = SEVEN;
		break;
	case 7 : freshRank = EIGHT;
		break;
	case 8 : freshRank = NINE;
		break;
	case 9 : freshRank = TEN;
		break;
	case 10 : freshRank = JACK;
		break;
	case 11 : freshRank = QUEEN;
		break;
	case 12: freshRank = KING;
		break;
	}

	cardSuit = freshSuit;
	cardRank = freshRank;
}


/********************
 ** DECONSTRUCTORS **
 ********************/
Card::~Card()
{

}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void read (suit &readSuit, rank &readRank)
* Mutator: Stores the private data in variables that can be used in main
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/

void Card::read(suit &readSuit, rank &readRank)
{
	readSuit = cardSuit;
	readRank = cardRank;
}

/*************************************************************************
* suit getSuit()
* Mutator: Returns the card suit to main
*-------------------------------------------------------------------------
* Return: cardSuit
*************************************************************************/

suit Card::getSuit()
{
	return cardSuit;
}

/*************************************************************************
* rank getRank()
* Mutator: Returns the card rank to main
*-------------------------------------------------------------------------
* Return: cardRank
*************************************************************************/

rank Card::getRank()
{
	return cardRank;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* void print() const;
* Mutator: Prints out the current card information, being rank and suit
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/

void Card::print() const
{
	string card;
switch(cardRank)
{
case ACE   : card = "ACE";
	break;
case TWO   : card = "TWO";
	break;
case THREE : card = "THREE";
	break;
case FOUR  : card = "FOUR";
	break;
case FIVE  : card = "FIVE";
	break;
case SIX   : card = "SIX";
	break;
case SEVEN : card = "SEVEN";
	break;
case EIGHT : card = "EIGHT";
	break;
case NINE  : card = "NINE";
	break;
case TEN   : card = "TEN";
	break;
case JACK  : card = "JACK";
	break;
case QUEEN : card = "QUEEN";
	break;
case KING  : card = "KING";
	break;
}

cout << setw(6) << card << " of ";


switch(cardSuit)
{
case CLUBS    : card = "CLUBS";
	break;
case DIAMONDS : card = "DIAMONDS";
	break;
case HEARTS   : card = "HEARTS";
	break;
case SPADES   : card = "SPADES";
	break;
}

	cout << card << endl;

}
