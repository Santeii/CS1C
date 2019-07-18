/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 3
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/13/2016
 ************************************************************************/

#include "softwarearchitect.h"

/******************
 ** CONSTRUCTORS **
 ******************/
SoftArch::SoftArch()
{
	departNum = 1234567;
	superName = "No Super";
	salaryIncrease = 0;
	yearsOfExperience = 0;
}

SoftArch::SoftArch(int newDepartNum, string newSuperName,
		int NewSalaryIncrease, int newYearsOfExperience)
{
	departNum = newDepartNum;
	superName = newSuperName;
	salaryIncrease = NewSalaryIncrease;
	yearsOfExperience = newYearsOfExperience;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
SoftArch::~SoftArch()
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
void SoftArch::updatedepartNum(int newDepartNum)
{
	departNum = newDepartNum;
}

/*************************************************************************
* void updatesuperName(string newSuperName)
* Mutator: updates the superName variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void SoftArch::updatesuperName(string newSuperName)
{
	superName = newSuperName;
}

/*************************************************************************
* void updatesalaryIncrease(int NewSalaryIncrease)
* Mutator: updates the salaryIncrease variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void SoftArch::updatesalaryIncrease(int NewSalaryIncrease)
{
	salaryIncrease = NewSalaryIncrease;
}

/*************************************************************************
* void updateYearsOfExperience(int newYearsOfExperience)
* Mutator: updates the yearsOfExperience variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void SoftArch::updateYearsOfExperience(int newYearsOfExperience)
{
	yearsOfExperience = newYearsOfExperience;
}

/***************
 ** ACCESSORS **
 ***************/
/*************************************************************************
* void printSoftArch(string name) const
* Acessor: prints the SoftArch data in a table format in the console
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void SoftArch::printSoftArch(string name) const
{
	cout << setfill('*') << setw(89) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << name << " * " << setw(13) << departNum
		 << " * " << setw(17) << superName << " * " << setw(7)
		 << salaryIncrease << " * " << setw(20) << yearsOfExperience
		 << " *\n";
}
