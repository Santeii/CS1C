/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 3
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/14/2016
 ************************************************************************/

#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include "Employee.h"

class SoftArch: public Employee
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		SoftArch();
		SoftArch(int newDepartNum, string newSuperName, int NewSalaryIncrease,
				int newYearsOfExperience);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~SoftArch();
	/**************
	 ** MUTATORS **
	 **************/
		void updatedepartNum(int newDepartNum);
		void updatesuperName(string newSuperName);
		void updatesalaryIncrease(int NewSalaryIncrease);
		void updateYearsOfExperience(int newYearsOfExperience);
	/***************
	 ** ACCESSORS **
	 ***************/
		void printSoftArch(string newName) const;

	private:
		int departNum;
		string superName;
		int salaryIncrease;
		int yearsOfExperience;
};

#endif /* SOFTWAREARCHITECT_H_ */
