/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 15
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ios>
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
* quickSort
* ________________________________________________________________________
* Target of partitions is, given an array and an element x of array as pivot,
* put x at its correct position in sorted array and put all smaller elements,
* smaller than x, before x, and put all greater elements after x. All this
* should be done in linear time.
*************************************************************************/
void quickSort(int arr[], int low, int high, int &counter);

/*************************************************************************
* mergeSort
* ________________________________________________________________________
* Merge sort works using the principle that if you have two sorted lists, you
* can merge them together to form another sorted list, Consequently, sorting
* a large list can be thought of as a problem of sorting two smaller lists and
* then merging those two lists together.
*************************************************************************/
void mergeSort(int arr[], int l, int r, int &counter);


#endif /* HEADER_H_ */
