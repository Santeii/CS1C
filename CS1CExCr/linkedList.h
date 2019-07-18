/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: EC
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/

#include "header.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


template<class Type>
struct link
{
	Type data; // data item
	link* next;// pointer to the next link
};

/*************************************************************************
* Template Class linkedListType
* ________________________________________________________________________
* This template class creates an outline for a linked list
*************************************************************************/

template<class Type>
class linkedListType
{
public:
   	 bool isEmptyList();
	 void print();
	 void destroyList();
	 void retrieveFirst(Type& firstElement);
   	 void search(const Type& searchItem);
	 void insertFirst(const Type& newItem);
	 void insertLast(const Type& newItem);
	 void deleteNode(const Type& deleteItem);
	 void addAtTwo(const Type& newItem);
	 linkedListType();
	 protected:
     link<Type> *first; //pointer to the first node of the list
     link<Type> *last;  //pointer to the last node of the list
};

template<class Type>
linkedListType<Type>::linkedListType()
{
	first = NULL;
	last = NULL;
}

template<class Type>
void linkedListType<Type>::insertFirst(const Type& newItem)
{
	link<Type> *newNode;
	newNode = new link<Type>;
	newNode->data = newItem;
	newNode->next = first;
	first = newNode;
	if(last == NULL)
	{
		last = newNode;
	}
}

template<class Type>
void linkedListType<Type>::print()
{
	link<Type> *current;
	current = first;
	while(current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

template<class Type>
bool linkedListType<Type>::isEmptyList()
{
	if(first == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class Type>
void linkedListType<Type>::destroyList()
{
	while(first != NULL)
	{
		link<Type> *newNode;
		newNode = first;
		first = first->next;
		delete newNode;
	}
}

template<class Type>
void linkedListType<Type>::retrieveFirst(Type& firstElement)
{
	firstElement = first;
}

template<class Type>
void linkedListType<Type>::insertLast(const Type& newItem)
{
	link<Type> *newNode;
	newNode = new link<Type>;
	newNode->data = newItem;
	newNode->next = NULL;
	last->next = newNode;
	last = newNode;
	if(first == NULL)
	{
		first = newNode;
	}
}

template<class Type>
void linkedListType<Type>::deleteNode(const Type& deleteItem)
{
	link<Type> *pPre = NULL;
	link<Type> *pDel = NULL;
	if(first->data == deleteItem)
	{
		pDel = first;
		first = pDel->next;
		delete pDel;
		return;
	}
	pPre = first;
	pDel = first->next;

	while(pDel != NULL)
	{
		if(pDel->data == deleteItem)
		{
			pPre->next = pDel->next;
			if(pDel == last)
			{
				last = pPre;
			}
			delete pDel;
			break;
		}
		pPre = pDel;
		pDel = pDel->next;
	}
}

template<class Type>
void linkedListType<Type>::search(const Type & searchItem)
{
	bool found;
	link<Type> *current;
		if(first == NULL)  //list is empty
		cout<<"Cannot search an empty list. "<<endl;
		else
		{
			current = first;
			found = false;
			while(!found && current != NULL) //search the list
				if(current->info == searchItem)      //item is found
	       			found = true;
				else
					current = current->link; 					if(found)
				cout<<"Item is found in the list."<<endl;
			else
				cout<<"Item is not in the list."<<endl;
	   }

}

template<class Type>
void linkedListType<Type>::addAtTwo(const Type& newItem)
{
	link<Type> *newNode;
	newNode->data = newItem;
	newNode->next = first->next->next;
	first->next->next = newNode;
}
#endif /* LINKEDLIST_H_ */
