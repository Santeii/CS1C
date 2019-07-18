/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 3
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/14/2016
 ************************************************************************/


#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "Employee.h"

class Programmer: public Employee
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Programmer();
		Programmer(int newDepartNum, string newSuperName, int NewSalaryIncrease,
				   bool newCPPKnowledge, bool newJavaKnowledge);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~Programmer();
	/**************
	 ** MUTATORS **
	 **************/
		void updatedepartNum(int newDepartNum);
		void updatesuperName(string newSuperName);
		void updatesalaryIncrease(int NewSalaryIncrease);
		void updatecppKnowledge(bool newCPPKnowledge);
		void updatejavaKnowledge(bool newJavaKnowledge);
	/***************
	 ** ACCESSORS **
	 ***************/
		void printProgrammer(string newName) const;

	private:
		int departNum;
		string superName;
		int salaryIncrease;
		bool cppKnowledge;
		bool javaKnowledge;
};

#endif /* PROGRAMMER_H_ */
