/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 6
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/

	#include "header.h"
	#include "Triangle.h"
	#include "Rectangle.h"

void printArea(Shape *newShape);

void printPerimeter(Shape *newShape);

/*************************************************************************
 * Assignment 6
 * _______________________________________________________________________
 *
 * _______________________________________________________________________
 * INPUT:
 *	none
 *
 * PROCESSING:
 * 	Rectangle		rect(2,6);		 - Rectangle variable
 * 	Triangle		tri(6,8,10);	 - Triangle variable
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/


	int main()
	{

	//---------------------------------------------------------------------

	Rectangle		rect(2,6);	// Rectangle variable
	Triangle		tri(6,8,10);// Triangle variable


	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	// Outputs the rectangle area and perimeter
	cout << "Rectangle Area: ";
	printArea(&rect);
	cout << endl;
	cout << "Rectangle Perimeter: ";
	printPerimeter(&rect);
	cout << endl << endl;

	// Outputs the triangle area and perimeter
	cout << "Triangle Area: ";
	printArea(&tri);
	cout << endl;
	cout << "Triangle Perimeter: ";
	printPerimeter(&tri);


	return 0;
}

// Function to print the area from the shape class redefinition
void printArea(Shape *newShape)
{
	cout << newShape->calcArea();
}

// Function to print the perimeter from the shape class redefinition
void printPerimeter(Shape *newShape)
{
	cout << newShape->calcPerimeter();
}

