/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
 ************************************************************************/

#include "programmer.h"

/******************
 ** CONSTRUCTORS **
 ******************/
Programmer::Programmer()
{
	departNum = 1234567;
	superName = "No Boss";
	salaryIncrease = 0;
	cppKnowledge = false;
	javaKnowledge = false;
}
Programmer::Programmer(int newDepartNum, string newSuperName,
		int NewSalaryIncrease, bool newCPPKnowledge, bool newJavaKnowledge)
{
	departNum = newDepartNum;
	superName = newSuperName;
	salaryIncrease = NewSalaryIncrease;
	cppKnowledge = newCPPKnowledge;
	javaKnowledge = newJavaKnowledge;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Programmer::~Programmer()
{}

/**************
 ** MUTATORS **
 **************/
/*************************************************************************
* void updatedepartNum(int newDepartNum)
* Mutator: updates the departNum variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::updatedepartNum(int newDepartNum)
{
	departNum = newDepartNum;
}

/*************************************************************************
* void updatesuperName(string newSuperName)
* Mutator: updates the superName variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::updatesuperName(string newSuperName)
{
	superName = newSuperName;
}

/*************************************************************************
* void updatesalaryIncrease(int NewSalaryIncrease)
* Mutator: updates the salaryIncrease variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::updatesalaryIncrease(int NewSalaryIncrease)
{
	salaryIncrease = NewSalaryIncrease;
}

/*************************************************************************
* void updatecppKnowledge(bool newCPPKnowledge)
* Mutator: updates the cppKnowledge variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::updatecppKnowledge(bool newCPPKnowledge)
{
	cppKnowledge = newCPPKnowledge;
}

/*************************************************************************
* void updatejavaKnowledge(bool newJavaKnowledge)
* Mutator: updates the javaKnowledge variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::updatejavaKnowledge(bool newJavaKnowledge)
{
	javaKnowledge = newJavaKnowledge;
}

/***************
 ** ACCESSORS **
 ***************/
/*************************************************************************
* void printProgrammer(string newName) const
* Acessor: prints the programmer data in a table format in the console
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Programmer::printProgrammer(string newName) const
{
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << newName << " * " << setw(13) << departNum
		 << " * " << setw(17) << superName << " * " << setw(7)
		 << salaryIncrease << " * " << setw(13);
	if (cppKnowledge == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << " * " << setw(14);
	if (javaKnowledge == true)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	cout << " *\n";
}
