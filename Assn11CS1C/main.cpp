/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 11
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/14/2016
 ************************************************************************/

	#include "header.h"
	#include "Queue.h"

/*************************************************************************
 * Assignment 11
 * _______________________________________________________________________
 * This assignment uses a template class for a queue to be able to create
 * multiple queues of different datatypes using a single class blueprint.
 * _______________________________________________________________________
 * INPUT:
 *	none
 *
 * PROCESSING:
 * 	Queue <int>    intQueue		- The queue of integers
 * 	Queue <string> strQueue		- The queue of strings
 * 	Queue <float>  floatQueue	- The queue of floats
 * 	int			   list			- This tracks the user's choice of list
 * 	int			   options		- This tracks the queue option selection
 * 	int			   newInt		- Temp storage for a new int
 * 	string		   newString	- Temp storage for a new string
 * 	float		   newFloat		- Temp storage for a new float
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/


	int main()
	{
	//---------------------------------------------------------------------
	Queue <int> intQueue;
	Queue <string> strQueue;
	Queue <float> floatQueue;

	int			list;
	int			options;
	int			newInt;
	string		newString;
	float		newFloat;

	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	cout << "Which list would you like to create?\n";
	cout << "1 - Integer list\n"
		 << "2 - String list\n"
		 << "3 - Float list\n"
		 << "4 - Assert Macro\n"
		 << "0 - Exit\n";

	// This reads in the selection for the list and is the loop control variable
	cin >> list;
	cin.clear();

	// Checks to make sure its not time to exit the loop
	while(list != 0)
	{
		// This switch is the junction that decides which list is being accessed
		switch(list)
		{
		// Case one is for integers
		case 1 : options = QueueOptions(); // This is for the options of the queue
			while(options != 0)
				 {
				 switch(options)
				 {
				 // This checks if the queue is full and then if it is not it reads
				 //	in a new item and then stores it in the next open spot in the list
				 case 1:
					 cout << "What number would you like to enter : ";
						 cin >> newInt;
						 cin.clear();
				 	 	 intQueue.enqueue(newInt);
				 	 	 cout << endl;
				 	 	 if(intQueue.getTop() < 6)
				 	 	 {
							 intQueue.printqueue(newInt);
							 cout << " has been added to the queue\n";
				 	 	 }
					 break;
				 // This will check if empty and then store the top item on the list
				 // right before it is removed from the list so that it can be output
				 case 2: newInt = intQueue.front();
						 intQueue.dequeue();
						 cout << endl;
						 if(intQueue.getTop() >= -1)
						 {
							intQueue.printqueue(newInt);
							cout << " has been deleted from the queue\n";
						 }
					 break;
				 // This checks if the list is empty and then checks the item that
				 // is in front of the queue
				 case 3: if(intQueue.isempty())
				 {
					 cout << "The list is Empty!\n";
				 }
				 else
				 {
					 cout << intQueue.front();
					 cout << " is at the top of the list!\n";
				 }
					 break;
				 // This returns the size of the list
				 case 4: if(intQueue.isempty())
				 {
					 cout << "The list is Empty!\n";
				 }
				 else
				 {
					 cout << "The size of the list is " << intQueue.size() << endl;
				 }
					 break;
				 // This checks the status of the emptiness
				 case 5: if(intQueue.isempty())
				 {
					 cout << "The list is empty!\n";
				 }
				 else
				 {
					 cout << "The list is NOT empty!\n";
				 }
					 break;
				 // This checks the status of the fullness
				 case 6: if(intQueue.isfull())
				 {
					 cout << "The list is full!\n";
				 }
				 else
				 {
					 cout << "The list is NOT full!\n";
				 }
					 break;
				 case 0: break;
				 }
				 options = QueueOptions();
				 }
			break;
			// Case two is for strings
		case 2 : cin.ignore(1000,'\n');
	 	 	 	 cin.clear();
			options = QueueOptions();// This is for the options of the queue
		while(options != 0)
			 {
			 switch(options)
			 {
			 // This checks if the queue is full and then if it is not it reads
			 //	in a new item and then stores it in the next open spot in the list
			 case 1:
				 cin.ignore(1000,'\n');
				 cin.clear();
				 cout << "What string would you like to enter : ";
					 getline(cin,newString);
					 strQueue.enqueue(newString);
			 	 	 cout << endl;
			 	 	 if(strQueue.getTop() < 6)
			 	 	 {
			 	 		 strQueue.printqueue(newString);
			 	 		 cout << " has been added to the queue\n";
			 	 	 }
				 break;
			 // This will check if empty and then store the top item on the list
			 // right before it is removed from the list so that it can be output
			 case 2:
				 cin.ignore(1000,'\n');
				 cin.clear();
					 newString = strQueue.front();
					 strQueue.dequeue();
					 cout << endl;
					 if(strQueue.getTop() >= -1)
					 {
						 strQueue.printqueue(newString);
						 cout << " has been deleted from the queue\n";
					 }
				 break;
			 // This checks if the list is empty and then checks the item that
			 // is in front of the queue
			 case 3: if(strQueue.isempty())
			 {
				 cout << "The list is Empty!\n";
			 }
			 else
			 {
				 cout << strQueue.front();
				 cout << " is at the top of the list!\n";
			 }
				 break;
			 // This returns the size of the list
			 case 4: if(strQueue.isempty())
			 {
				 cout << "The list is Empty!\n";
			 }
			 else
			 {
				 cout << "The size of the list is " << strQueue.size() << endl;
			 }
				 break;
			 // This checks the status of the emptiness
			 case 5: if(strQueue.isempty())
			 {
				 cout << "The list is empty!\n";
			 }
			 else
			 {
				 cout << "The list is NOT empty!\n";
			 }
				 break;
			 // This checks the status of the fullness
			 case 6: if(strQueue.isfull())
			 {
				 cout << "The list is full!\n";
			 }
			 else
			 {
				 cout << "The list is NOT full!\n";
			 }
				 break;
			 case 0: break;
			 }
			 options = QueueOptions();
			 }
			break;
		// Case three is for floats
		case 3 : options = QueueOptions();// This is for the options of the queue
		while(options != 0)
			 {
			 switch(options)
			 {
			 // This checks if the queue is full and then if it is not it reads
			 //	in a new item and then stores it in the next open spot in the list
			 case 1:
				 cout << "What float would you like to enter : ";
					 cin >> newFloat;
					 cin.clear();
					 floatQueue.enqueue(newFloat);
			 	 	 cout << endl;
			 	 	 if(floatQueue.getTop() < 6)
			 	 	 {
			 	 		 floatQueue.printqueue(newFloat);
			 	 		 cout << " has been added to the queue\n";
			 	 	 }

				 break;
			 // This will check if empty and then store the top item on the list
			 // right before it is removed from the list so that it can be output
			 case 2:
					 newFloat = floatQueue.front();
					 floatQueue.dequeue();
					 cout << endl;
					 if(floatQueue.getTop() >= -1)
					 {
						 floatQueue.printqueue(newFloat);
						 cout << " has been deleted from the queue\n";
					 }
				 break;
			 // This checks if the list is empty and then checks the item that
			 // is in front of the queue
			 case 3: if(floatQueue.isempty())
			 {
				 cout << "The list is Empty!\n";
			 }
			 else
			 {
				 cout << floatQueue.front();
				 cout << " is at the top of the list!\n";
			 }
				 break;
			 // This returns the size of the list
			 case 4: if(floatQueue.isempty())
			 {
				 cout << "The list is Empty!\n";
			 }
			 else
			 {
				 cout << "The size of the list is " << floatQueue.size() << endl;
			 }
				 break;
			 // This checks the status of the emptiness
			 case 5: if(floatQueue.isempty())
			 {
				 cout << "The list is empty!\n";
			 }
			 else
			 {
				 cout << "The list is NOT empty!\n";
			 }
				 break;
			 // This checks the status of the fullness
			 case 6: if(floatQueue.isfull())
			 {
				 cout << "The list is full!\n";
			 }
			 else
			 {
				 cout << "The list is NOT full!\n";
			 }
				 break;
			 case 0: break;
			 }
			 options = QueueOptions();
			 }
			break;
		case 4 : assert(2+2==4);
				 cout << "The assert macro passes";
				 assert(2+2==5);
				 cout << "The assert macro fails";
			break;
		}

		cout << "Which list would you like to create?\n";
		cout << "1 - Integer list\n"
			 << "2 - String list\n"
			 << "3 - Float list\n"
			 << "4 - Assert Macro\n"
			 << "0 - Exit\n";

		cin >> list;
		cin.clear();
	}


	return 0;
	}

	// The function for the queue options, placed here to not take up an entire
	// cpp file for a simple formatting function
	int QueueOptions()
	{
		int choice;
		cout << "\nWhat would you like to do with your queue?\n"
			 << "1 - Enqueue\n"
			 << "2 - Dequeue\n"
			 << "3 - Front\n"
			 << "4 - Size\n"
			 << "5 - IsEmpty\n"
			 << "6 - IsFull\n"
			 << "0 - Exit\n";
		cin >> choice;
		cin.clear();

		return choice;
	}

