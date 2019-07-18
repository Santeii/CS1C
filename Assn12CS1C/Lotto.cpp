/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 12
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/14/2016
 ************************************************************************/
#include "header.h"
#include <algorithm>

/*************************************************************************
 *
 * FUNCTION  Lotto
 *________________________________________________________________________
 * Calculates a number of spots and then shuffles them, making sure there
 * are no duplicates, then the vector is resized, sorted, and returned
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * Returns a sorted vector of size chosen
 ************************************************************************/
vector<int> Lotto(const int spots, const int chosen)
{
	vector<int> winner;
	int i;
	// Reads in values from 0 to spots in to the vector
	for(i = 0; i <= spots; i++)
	{
		winner.push_back(i);
	}
	// Shuffles the vector
	random_shuffle(winner.begin(), winner.end());

	// Resizes the vector so that it is the size of chosen
	winner.resize(chosen);
	// Sorts the vector
	sort(winner.begin(), winner.end());

	return winner;
}
