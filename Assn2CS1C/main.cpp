/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 2
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/9/2016
 ************************************************************************/

	#include "header.h"
	#include "Card.h"
	#include "Deck.h"

/*************************************************************************
 * Assignment 2
 * _______________________________________________________________________
 * This program uses a class for cards and a class for decks to create a
 * deck of cards that can perform a perfect shuffle and compare two decks
 * of cards while also being able to print out the deck of cards. The
 * program then will calculate how many perfect shuffles it takes for the
 * deck to be shuffled through and return to its original state.
 * _______________________________________________________________________
 * INPUT:
 *	Deck deckOfCards		- Original deck that is shuffled
 *
 * PROCESSING:
 * 	int counter				- Loop condition variable
 * 	Card newDeck[DECK_SIZE] - Copy of the unedited deck
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/
	int main()
	{

	/*********************************************************************
	* COSNTANTS
	* ___________________________________________________________________
	* DECK_SIZE = 52 - size of the deck of cards
	********************************************************************/

	/*******************************************************************/
	const int DECK_SIZE = 52;
	//---------------------------------------------------------------------

	Deck deckOfCards;		// IN 	- Original deck
	int counter;			// CALC - Loop condition variable
	Card newDeck[DECK_SIZE];// CALC - Copy of the unedited deck

	// INITIALIZATION
	counter = 1;
	deckOfCards.getValues(newDeck, DECK_SIZE);

	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	deckOfCards.print();

	cout << endl << endl;

	deckOfCards.shuffle();
	deckOfCards.print();

	// This block uses a loop and a counter to determine how many shuffles
	// it would take to return the deck to normal
	while(deckOfCards.compareDecks(newDeck, DECK_SIZE))
	{
		deckOfCards.shuffle();
		counter++;
	}

	cout << endl << endl;

	deckOfCards.print();

	cout << endl << endl << "It takes " << counter << " perfect shuffles"
			" to return the deck to normal!";
	return 0;
}
