/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 6
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/
#ifndef SHAPE_H_
#define SHAPE_H_

#include "header.h"

class Shape
{
	public:
	// Default constructor that is not called upon
	Shape(){height = 0, width = 0;}
	// Non-default constructor that reads in the lengths
	Shape(int newHeight, int newWidth)
	{height = newHeight, width = newWidth;}
	// Virtual deconstructor
	virtual ~Shape(){};

	// Redefined the calculating perimeter member
	virtual int calcPerimeter() const = 0;
	// Redefined the calculating area member
	virtual float calcArea() const = 0;

	protected:
	int height;	//int variable for height
	int width;	//int variable for width
};



#endif /* SHAPE_H_ */
