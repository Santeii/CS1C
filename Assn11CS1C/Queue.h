/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 11
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/14/2016
 ************************************************************************/

#ifndef QUEUE_H_
#define QUEUE_H_

#include "header.h"

/*************************************************************************
 *
 * CLASS  template <classType> Queue
 *________________________________________________________________________
 * queues any datatype that the user wishes to call upon in main
 *________________________________________________________________________
 * PRE-CONDITIONS
 * Datatype must be entered in main
 *
 * POST-CONDITIONS
 * Keeps track of a stack for the user
 ************************************************************************/

template <class Type>
class Queue
{
private:
    enum {SIZE = 10};   // default size
    int queuesize;		// Max size of the queue
    int actualsize;		// Current size of the queue
    Type * items;       // Holds stack items
    int top;            // Index for top stack item
public:
    /*CONSTRUCTORS*/
    Queue();
    Queue(const Queue & qu);
    /*DESTRUCTORS*/
    ~Queue() { delete [] items; }
    /*ACCESSORS*/
    void printqueue(Type & item) const;
    int size() const;
    Type front() const;
    bool isfull() const { return top == queuesize; }
    bool isempty() const { return actualsize == 0;}
    int getTop() const {return top; };
    /*MUTATORS*/
    void enqueue(const Type & item);
    void dequeue();
    /*OVERLOADED OPERATORS*/
    Queue & operator=(const Queue & st);
};

/*********************CONSTRUCTORS*********************/

// Default constructor for the class
template <class Type>
Queue<Type>::Queue()
{
	top = -1;
	actualsize = 0;
	queuesize = 6;
    items = new Type [queuesize];
    for (int i = 0; i < queuesize; i++)
    {
    	items[i] = 0 or 'a';
    }
}
// Copy class constructor
template <class Type>
Queue<Type>::Queue(const Queue & qu)
{
	actualsize = 0;
	queuesize = qu.queuesize;
    top = qu.top;
    items = new Type [queuesize];
    for (int i = 0; i < top; i++)
        items[i] = qu.items[i];
}

/*********************ACCESSORS*********************/
// This returns the size of the queue
template <class Type>
int Queue<Type>::size() const
{
	return actualsize;
}
// This prints an item out to the console
template <class Type>
void Queue<Type>::printqueue(Type & item) const
{
		cout << item;
}
// This returns the item that is at the front of the queue
template <class Type>
Type Queue<Type>::front() const
{
	return items[0];
}

/*********************MUTATORS*********************/
// This queues an item in to the list
template <class Type>
void Queue<Type>::enqueue(const Type & item)
{
	try
	{
		actualsize ++;
    	top++;
		string error = "The queue is full!";
	    if(actualsize > queuesize)
	    {
	    	throw error;
	    }
	    if (actualsize <= queuesize)
	    {
	        items[top] = item;
	    }
	}
	catch(string &error)
	{
		actualsize --;
		cout << error;
	}
}
// This dequeues, or removes an item from the list
template <class Type>
void Queue<Type>::dequeue()
{
	try
	{
		string error = "The list is Empty!";
		int count;
		if(top < -1)
		{
			top = -1;
		}
		if(top > 5)
		{
			top = 5;
		}
		actualsize --;
		top--;
		if(top < -1)
		{
			throw error;
		}
		for(count = 0; count < queuesize; count++)
		{
			if(count < queuesize - 1)
			{
				items[count] = items[count+1];
			}
			else
			{
				items[count] = (0 or 'a');
			}
		}

	}
	catch(string &error)
	{
		actualsize++;
		cout << error;
	}
}

/*********************OVERLOADED OPERATORS*********************/
// This overloads the equality operator to be used by the class
template <class Type>
Queue<Type> & Queue<Type>::operator=(const Queue<Type> & st)
{
    if (this == &st)
        return *this;
    delete [] items;
    queuesize = st.queuesize;
    top = st.top;
    items = new Type [queuesize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}

#endif /* QUEUE_H_ */
