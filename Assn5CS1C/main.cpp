/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 5
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/

	#include "header.h"

/*************************************************************************
 * Assignment 5
 * _______________________________________________________________________
 * This program reads in the items from an inventory in to a dynamic array
 * of struct items and then outputs them as well as an order to main. Then
 * the total without and with tax is calculated and also output to main.
 * _______________________________________________________________________
 * INPUT:
 *	none
 *
 * PROCESSING:
 * 	Item			*store;			 - List of the inventory
 * 	Item			*order;			 - List of the order
 * 	int 			count;			 - Counter variable
 *	float			total;			 - Total price
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/
namespace item // Namespace for the Item struct
{

	struct Item
	{
		string name;
		float price;
		int	  quantity;
	};
}

	using namespace item;

	int main()
	{
		const int 	AR_SIZE = 5;	//Constant for the inventory list
		const int 	ORDER_SIZE = 4;	//Constant for the order list

	//---------------------------------------------------------------------

    Item			*store;		//List of the inventory
    Item			*order;		//List of the order
	int 			count;		//Counter variable
	float			total;		//Total price


	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	// INITIALIZATION
	store = new Item[AR_SIZE];
	order = new Item[ORDER_SIZE];
	total = 0;

	store[0].name = "Nike basketball shoes";
	store[1].name = "Under Armour T-shirt";
	store[2].name = "Brooks running shoes";
	store[3].name = "Asics running shoes";
	store[4].name = "Nike shorts";

	store[0].price = 145.99;
	store[1].price = 29.99;
	store[2].price = 111.44;
	store[3].price = 165.88;
	store[4].price = 45.77;

	store[0].quantity = 22;
	store[1].quantity = 33;
	store[2].quantity = 11;
	store[3].quantity = 20;
	store[4].quantity = 77;

	order[0].name = "Nike basketball shoes";
	order[1].name = "Under Armour T-shirt";
	order[2].name = "Nike shorts";
	order[3].name = "Brooks running shoes";

	order[0].price = 145.99;
	order[1].price = 29.99;
	order[2].price = 45.77;
	order[3].price = 111.44;

	order[0].quantity = 2;
	order[1].quantity = 3;
	order[2].quantity = 4;
	order[3].quantity = 1;

	// INVENTORY LIST
	cout << left << setw(25) << "Name of equipment" << setw(9) << "Cost"
		 << setw(10) << "Quantity" << endl;
	for(count = 0; count < AR_SIZE; count ++)
	{
		cout << setw(25) << store[count].name << '$' << setw(9)
			 << store[count].price << setw(10) << store[count].quantity << endl;
	}
	cout << endl;

	// OUTPUTS THE ORDER
	for(count = 0; count < ORDER_SIZE; count ++)
	{
		cout << setw(25) << order[count].name << '$' << setw(9)
			 << order[count].price << setw(10) << order[count].quantity << endl;
	}

	// OUTPUTS THE TOTAL

	for(count = 0; count < ORDER_SIZE; count ++)
	{
		total = total + order[count].price;
	}
	cout << "Total before tax: " << '$' << total << endl;
	cout << "Total after tax: " << '$' << total*1.0825 << endl << endl;

	// INVENTORY LIST
	cout << left << setw(25) << "Name of equipment" << setw(9) << "Cost"
		 << setw(10) << "Quantity" << endl;
	for(count = 0; count < AR_SIZE; count ++)
	{
		cout << setw(25) << store[count].name << '$' << setw(9)
			 << store[count].price << setw(10) << store[count].quantity << endl;
	}

	// Clear dynamic memory
	for(count = 0; count < ORDER_SIZE; count ++)
	{
		delete order[count];
	}

	for(count = 0; count < AR_SIZE; count ++)
	{
		delete store[count];
	}

	return 0;
}

