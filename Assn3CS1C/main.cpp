/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 3
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/14/2016
 ************************************************************************/

	#include "header.h"
	#include "Employee.h"
	#include "Time.h"
	#include "programmer.h"
	#include "softwarearchitect.h"

/*************************************************************************
 * Assignment 3
 * _______________________________________________________________________
 * This program creates multiple classes, two of which are children of
 * a parent class, meaning they inheret the traits of the parent class.
 * This program displays the use of inheritance as well as the practical
 * use of classes.
 * _______________________________________________________________________
 * INPUT:
 *	none
 *
 * PROCESSING:
 * 	Date			newTime			 - Used to update the date class
 * 	Employee 		myEmployee		 - First case of the employee class
 * 	Employee 		myEmployeeTwo	 - Second case of the employee class
 *	Programmer		myProgrammer	 - First case of the programmer class
 *	Programmer		myProgrammerTwo	 - Second case of the programmer class
 *	SoftArch		mySoftArch		 - First case of the soft arch class
 *	SoftArch		mySoftArchTwo	 - Second case of the soft arch class
 *	string 			name			 - Used to transfter the name
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/
	int main()
	{

	//---------------------------------------------------------------------

	Date			newTime(8, 31, 2014);
	Employee 		myEmployee;
	Employee 		myEmployeeTwo("JimmyFallon", 33344, "949-435-2345",
								  40, 'M', "Comedian", 90300, newTime);
	Programmer		myProgrammer;
	Programmer		myProgrammerTwo(5432122, "Joe Boss", 4, true, false);
	SoftArch		mySoftArch;
	SoftArch		mySoftArchTwo(6543422, "Big Boss", 8, 11);
	string 			name;

	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	//These members of the class will output the information of the classes
	// to the console
	myEmployee.printEmployee();
	myEmployeeTwo.printEmployee();

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	// This updates the information to give it some content
	myProgrammerTwo.updateName("Andrew Hannah");
	myProgrammerTwo.updateAge(36);

	//These members of the class will output the information of the classes
	// to the console
	myProgrammer.printEmployee();
	myProgrammerTwo.printEmployee();

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the programmer information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13) << "Department"
		 << " * " << setw(17) << "Supervisor\'s Name" << " * " << setw(7)
		 << "Raise %" << " * " << setw(13) << "C++ Knowledge" << " * "
		 << setw(14) << "Java Knowledge" << " *\n";

	//These members of the programmer class will output the information of
	// the classes to the console
	myProgrammer.getName(name);
	myProgrammer.printProgrammer(name);
	myProgrammerTwo.getName(name);
	myProgrammerTwo.printProgrammer(name);

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	// This updates the information to give it some content
	mySoftArchTwo.updateName("Ryan Martinez");
	mySoftArchTwo.updateAge(20);

	//These members of the class will output the information of the classes
	// to the console
	mySoftArch.printEmployee();
	mySoftArchTwo.printEmployee();

	cout << left << setfill('*') << setw(89) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13) << "Department"
		 << " * " << setw(17) << "Supervisor\'s Name" << " * " << setw(7)
		 << "Raise %" << " * " << setw(20) << "Years of experience"
		 << " *\n";

	mySoftArch.getName(name);
	mySoftArch.printSoftArch(name);
	mySoftArchTwo.getName(name);
	mySoftArchTwo.printSoftArch(name);

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(89) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	// This updates the information to give it some content
	myEmployee.updateName("Drew Sundry");
	myEmployee.updateID(12321);
	myEmployee.updateAge(64);
	myEmployee.updatePhone("909-659-1234");
	myEmployee.updateGender('F');
	myEmployee.updateTitle("Dancer");
	myEmployee.updateSalary(60150);
	newTime.updateDate(6,14,2015);
	myEmployee.updateHire(newTime);

	//These members of the class will output the information of the classes
	// to the console
	myEmployee.printEmployee();

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	// This updates the information to give it some content
	myProgrammer.updateName("Daisy McConnel");
	myProgrammer.updateID(19061);
	myProgrammer.updateAge(26);
	myProgrammer.updatePhone("955-523-9034");
	myProgrammer.updateGender('F');
	myProgrammer.updateTitle("Scientist");
	myProgrammer.updateSalary(80400);
	newTime.updateDate(2,19,2013);
	myProgrammer.updateHire(newTime);

	//These members of the class will output the information of the classes
	// to the console
	myProgrammer.printEmployee();

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13) << "Department"
		 << " * " << setw(17) << "Supervisor\'s Name" << " * " << setw(7)
		 << "Raise %" << " * " << setw(13) << "C++ Knowledge" << " * "
		 << setw(14) << "Java Knowledge" << " *\n";

	// This updates the information to give it some content
	myProgrammer.updatedepartNum(745634);
	myProgrammer.updatesuperName("Jerry Boss");
	myProgrammer.updatesalaryIncrease(8);
	myProgrammer.updatecppKnowledge(true);
	myProgrammer.updatejavaKnowledge(true);
	myProgrammer.getName(name);
	//These members of the programmer class will output the information of
	// the classes to the console
	myProgrammer.printProgrammer(name);

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13)
		 << "Employee\'s ID" << " * " << setw(12) << "Phone" << " * "
		 << setw (3) << "Age" << " * " << setw(6) << "Gender" << " * "
		 << setw(9) << "Job Title" << " * " << setw(6) << "Salary"
		 << " * " <<  setw(9) << "Hire Date" << " *\n";

	// This updates the information to give it some content
	mySoftArch.updateName("April Diaz");
	mySoftArch.updateID(69473);
	mySoftArch.updateAge(42);
	mySoftArch.updatePhone("959-126-6341");
	mySoftArch.updateGender('F');
	mySoftArch.updateTitle("Athlete");
	mySoftArch.updateSalary(40850);
	newTime.updateDate(1,13,2016);
	mySoftArch.updateHire(newTime);

	//These members of the class will output the information of the classes
	// to the console
	mySoftArch.printEmployee();

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;

	// This outputs the header for the basic employee information
	cout << left << setfill('*') << setw(89) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << "Name" << " * " << setw(13) << "Department"
		 << " * " << setw(17) << "Supervisor\'s Name" << " * " << setw(7)
		 << "Raise %" << " * " << setw(20) << "Years of experience"
		 << " *\n";

	// This updates the information to give it some content
	mySoftArch.updatedepartNum(765432);
	mySoftArch.updatesuperName("Nice Boss");
	mySoftArch.updatesalaryIncrease(6);
	mySoftArch.updateYearsOfExperience(16);
	mySoftArch.getName(name);
	mySoftArch.printSoftArch(name);

	// This sets a baseline for the displayed information
	cout << left << setfill('*') << setw(89) << "*";
	cout << setfill(' ') << endl;

	return 0;
}
