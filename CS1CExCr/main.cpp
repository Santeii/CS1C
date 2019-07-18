/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: EC
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/
	#include "header.h"
	#include "linkedList.h"

/*************************************************************************
 * Extra credit: Linked Lists
 * _______________________________________________________________________
 * Create a linked list, then reverse the linked list, after this, delete
 * nodes from the linked list, then add nodes in the middle.
 * _______________________________________________________________________
 *
 ************************************************************************/

	int main()
	{

	//---------------------------------------------------------------------

	linkedListType<double> list1;
	linkedListType<double> list2;
	double	newItem;

	//---------------------------------------------------------------------

	ClassHeader();

	newItem = 88;
	list1.insertFirst(newItem);

	newItem = 78;
	list1.insertLast(newItem);

	newItem = 62;
	list1.insertLast(newItem);

	newItem = 123;
	list1.insertLast(newItem);

	newItem = 60;
	list1.insertLast(newItem);

	newItem = 60;
	list2.insertFirst(newItem);

	newItem = 123;
	list2.insertLast(newItem);

	newItem = 62;
	list2.insertLast(newItem);

	newItem = 78;
	list2.insertLast(newItem);

	newItem = 88;
	list2.insertLast(newItem);

	list1.print();
	list2.print();

	newItem = 62;
	list1.deleteNode(newItem);
	list2.deleteNode(newItem);

	list1.print();
	list2.print();

	newItem = 70;
	list1.addAtTwo(newItem);
	list2.addAtTwo(newItem);

	list1.print();
	list2.print();
	return 0;
	}


