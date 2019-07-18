/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 6
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape
{
	public:
	Rectangle(){}; // Default constructor that is not called upon
	// Non-default constructor that reads in the lengths
	Rectangle(int newHeight, int newWidth): Shape(newHeight, newWidth){;}
	// Virtual deconstructor
	virtual ~Rectangle(){};

	private:
	// Redefined the calculating perimeter member
	virtual int calcPerimeter() const
	{return Shape::height * 2 + Shape::width * 2;}
	// Redefined the calculating area member
	virtual float calcArea() const
	{return Shape::height * Shape::width;}
};

#endif /* RECTANGLE_H_ */
