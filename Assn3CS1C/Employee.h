/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 3
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/14/2016
 ************************************************************************/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Time.h"

class Employee
{

	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Employee();
		Employee(string newName, int newID, string newPhone, int newAge,
				char newGender, string newTitle, int newSalary,
				Date newHire);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		~Employee();
	/**************
	 ** MUTATORS **
	 **************/
		void updateName(string newName);
		void updateID(int newID);
		void updatePhone(string newPhone);
		void updateAge(int newAge);
		void updateGender(char newGender);
		void updateTitle(string newTitle);
		void updateSalary(int newSalary);
		void updateHire(Date newHire);

	/***************
	 ** ACCESSORS **
	 ***************/
		void printEmployee() const;
		void getName(string &newName) const;

	private:
		string name;
		int ID;
		string phone;
		int age;
		char gender;
		string title;
		int salary;
		Date hire;
};



#endif /* EMPLOYEE_H_ */
