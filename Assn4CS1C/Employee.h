/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
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
		void addAge(int i);

	/***************
	 ** ACCESSORS **
	 ***************/
		void printEmployee() const;
		void getName(string &newName) const;
		void getPhone(string &newPhone) const;
		void getAge(int &newAge)const;

	/*****************
	 ** OVERLOADING **
	 *****************/
		Employee operator+(const int i);
		friend bool operator==(const Employee & a, const Employee & b);
		Employee& operator =(const Employee&);
		friend std::ostream & operator<<(std::ostream & os,
				                       const Employee & st);
		friend Employee& operator>>(std::istream & is,
									   Employee & st);

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
