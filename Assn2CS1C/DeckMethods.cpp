/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

#include "Deck.h"

/******************
 ** CONSTRUCTORS **
 ******************/

Deck::Deck()
{

	int	 counterOne;
	int  counterTwo;
	int  count = 0;



	for (counterOne = 0; counterOne < SUIT_SIZE && count < DECK_SIZE;
		counterOne++)
	{
		for ( counterTwo = 0; counterTwo < RANK_SIZE; counterTwo++)
		{
			deckOfCards[count] = Card(counterOne, counterTwo);
			count ++;
		}
	}
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Deck::~Deck()
{
}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void shuffle()
* Mutator: Splits the decks in half and then stores them back in the array
* 			after perfectly shuffling them
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/

void Deck::shuffle()
{
	int countOne;
	int countTwo;
	int count;
	Card newDeck[DECK_SIZE];

	countOne = 0;
	countTwo = (DECK_SIZE / 2);

	for(count = 0; count < DECK_SIZE; count++)
	{
		newDeck[count] = deckOfCards[countOne];

		count ++;
		newDeck[count] = deckOfCards[countTwo];

		countOne++;
		countTwo++;
	}

	for(count = 0; count < DECK_SIZE; count++)
	{
		deckOfCards[count] = newDeck[count];
	}
}

/*************************************************************************
* void getValues(Card newDeck[], const int DECK_SIZE)
* Mutator: Stores the private data in variables that can be used in main
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/

void Deck::getValues(Card newDeck[], const int DECK_SIZE)
{
	int count;

	for(count = 0; count < DECK_SIZE; count++)
	{
		newDeck[count] = deckOfCards[count];
	}
}

/*************************************************************************
* void compareDecks(Card newDeck[], const int DECK_SIZE)
* Mutator: Compares two decks by using their first card and checking to
* 			see if the suit and rank are similar
*-------------------------------------------------------------------------
* Return: compare
*************************************************************************/

bool Deck::compareDecks(Card newDeck[], const int DECK_SIZE)
{

	string deckSuitHolder;
	string deckRankHolder;
	string deckSuitOne;
	string deckRankOne;
	string deckRankTwo;
	string deckSuitTwo;
	Card compCard;
	int count;
	bool compare;

	compCard = deckOfCards[1];
	compare = true;

	for(count = 0; count <= 1; count ++)
	{
		switch(compCard.getRank())
		{
		case ACE   : deckRankHolder = "ACE";
			break;
		case TWO   : deckRankHolder = "TWO";
			break;
		case THREE : deckRankHolder = "THREE";
			break;
		case FOUR  : deckRankHolder = "FOUR";
			break;
		case FIVE  : deckRankHolder = "FIVE";
			break;
		case SIX   : deckRankHolder = "SIX";
			break;
		case SEVEN : deckRankHolder = "SEVEN";
			break;
		case EIGHT : deckRankHolder = "EIGHT";
			break;
		case NINE  : deckRankHolder = "NINE";
			break;
		case TEN   : deckRankHolder = "TEN";
			break;
		case JACK  : deckRankHolder = "JACK";
			break;
		case QUEEN : deckRankHolder = "QUEEN";
			break;
		case KING  : deckRankHolder = "KING";
			break;
		}

		switch(compCard.getSuit())
		{
		case CLUBS    : deckSuitHolder = "CLUBS";
			break;
		case DIAMONDS : deckSuitHolder = "DIAMONDS";
			break;
		case HEARTS   : deckSuitHolder = "HEARTS";
			break;
		case SPADES   : deckSuitHolder = "SPADES";
			break;
		}

		if(count == 0)
		{
			deckSuitOne = deckSuitHolder;
			deckRankOne = deckRankHolder;
			compCard = newDeck[1];
		}
		else if(count == 1)
		{
			deckSuitTwo = deckSuitHolder;
			deckRankTwo = deckRankHolder;
		}
	}

	if((deckSuitOne == deckSuitTwo) && (deckRankOne == deckRankTwo))
	{
		compare = false;
	}
	else
	{
		compare = true;
	}
	return compare;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* void print() const
* Mutator: Prints out the entire array of cards
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/

void Deck::print() const
{
	Card displayCard;


	int	 count = 0;

	for (count = 0; count < 52; count ++)
	{
		displayCard = deckOfCards[count];
		displayCard.print();
	}
}
