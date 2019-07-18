/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 6
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/23/2016
 ************************************************************************/

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle : public Shape
{
	public:
	// Default constructor that is not called upon
	Triangle(){diagonal = 0;}
	// Non-default constructor that reads in the lengths
	Triangle(int newHeight, int newWidth, int newDiagonal)
	: Shape(newHeight, newWidth){diagonal = newDiagonal;}
	// Virtual deconstructor
	virtual ~Triangle(){};

	private:
	// Redefined the calculating perimeter member
	virtual int calcPerimeter() const
	{return Shape::height + Shape::width + diagonal;}
	// Redefined the calculating area member
	virtual float calcArea() const
	{return (.5 * (Shape::height * Shape::width));}
	int diagonal; // int variable for the diagonal of the triangle
};

#endif /* TRIANGLE_H_ */
