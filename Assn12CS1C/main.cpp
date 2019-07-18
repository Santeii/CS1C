/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 12
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/14/2016
 ************************************************************************/

	#include "header.h"

/*************************************************************************
 * Assignment 12
 * _______________________________________________________________________
 * This program uses a function to calculate a vector of random integers that
 * is uses as the winning card for a lottery drawing
 * _______________________________________________________________________
 * Answer the following questions regarding STL and the vector container:
1. What is the STL? What is a vector?
   STL is the standard template library which is a library that contains components for many necessary preprocessor directives.
   A vector is a sequence of containers that works as a dynamically allocatable array
2. Which vector operations change the size of a vector after its construction?
   the resize operator will resize to fit n objects while the reserve operator will reserve at least enough space for n objects,
   and the shrink_to_fit will shrink the container to fit the size
3. What is the STL array container and how does it differ from the built-in array and from a vector?
   The stl array container is a template class for an array that has a static size determined at compile time, as well as
   the data type is defined at compile time, the built-in array has the same effect as the stl array container but with
   different syntax, and the vector type is determined at compile time, but the size is dynamic.
4. How does the vector member function resize() differ from reserve()?
   The resize function resizes the vector for n amount of objects while the reserve function will allocate at least enough
   memory for n amount of objects
5. What should begin() and end() do for a container?
   The begin function returns the iterator to the beginning and the end function returns the iterator to the end
6. Give an example of using the vector push_back() modifier.
   	for(i = 0; i <= spots; i++)
	{
		winner.push_back(i);
	}

 ************************************************************************/


	int main()
	{
	//---------------------------------------------------------------------

	vector<int> winners;
	int spots = 51;
	int chosen = 6;
	unsigned int i;

	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();
	// Seeds the program
	srand(35);

	// Calls upon the function to return to the vector
	winners = Lotto(spots, chosen);

	// Outputs all of the items of the vector
	for(i = 0; i < winners.size(); i++)
	{
		cout << winners[i] << endl;
	}

	return 0;
	}


