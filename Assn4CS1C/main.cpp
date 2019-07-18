/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
 ************************************************************************/

	#include "header.h"
	#include "Employee.h"
	#include "Time.h"
	#include "programmer.h"
	#include "softwarearchitect.h"

/*************************************************************************
 * Assignment 4
 * _______________________________________________________________________
 * This program overloads operators in classes to show that agregate
 * operations can be performed on classes if the operators are
 * properly overloaded.
 * _______________________________________________________________________
 * INPUT:
 *	none
 *
 * PROCESSING:
 * 	Date			newTime			 - Used to update the date class
 * 	Employee 		myEmployee		 - First case of the employee class
 * 	Employee 		myEmployeeTwo	 - Second case of the employee class
 *	Programmer		myProgrammer	 - First case of the programmer class
 *	int				age				 - Used to check the age
 *
 * OUTPUT:
 * <nothing Additional>
 ************************************************************************/
	int main()
	{

	//---------------------------------------------------------------------

	Date			newTime(8, 31, 2014);
	Employee 		myEmployeeTwo;
	Employee 		myEmployee("JimmyFallon", 33344, "949-435-2345",
								  40, 'M', "Comedian", 90300, newTime);
	Programmer		myProgrammer;
	int				age;


	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	// This tests the comparing method
	myEmployee.updatePhone("999-909-9494");
	myProgrammer.updatePhone("999-909-9494");
	if(checkPhoneEqual(myEmployee, myProgrammer))
	{
		cout << "These are equal!\n\n";
	}
	else
	{
		cout << "These are NOT equal!\n\n";
	}

	myEmployee.updatePhone("999-909-9344");
	myProgrammer.updatePhone("999-629-9494");
	if(checkPhoneEqual(myEmployee, myProgrammer))
	{
		cout << "These are equal!\n\n";
	}
	else
	{
		cout << "These are NOT equal!\n\n";
	}

	// This tests the comparing operator
	myEmployee.updatePhone("900-909-9494");
	myEmployeeTwo.updatePhone("900-909-9494");

	if(myEmployee == myEmployeeTwo)
	{
		cout << "These are equal!\n\n";
	}
	else
	{
		cout << "These are NOT equal!\n\n";
	}

	myEmployee.updatePhone("999-909-9344");
	myProgrammer.updatePhone("999-629-9494");
	if(myEmployee == myEmployeeTwo)
	{
		cout << "These are equal!\n\n";
	}
	else
	{
		cout << "These are NOT equal!\n";
	}

	// This tests the adding age method
	age = 6;
	myEmployee.addAge(age);
	cout << endl << age << " years added\n";

	// This tests the addition operator
	age = 10;
	myEmployee = myEmployee + age;
	cout << endl << age << " years added\n\n";

	// This tests the extraction operator
	cin >> myEmployee;
	// This tests the insertion operator
	cout << myEmployee;
//	myEmployee.printEmployee();
//	cout << left << setfill('*') << setw(99) << "*";
//	cout << setfill(' ') << endl;

	return 0;
}

bool checkPhoneEqual (const Employee & a, const Programmer & b)
{
	bool valid = false;
	string newPhone;
	string newPhoneTwo;
	a.getPhone(newPhone);
	b.getPhone(newPhoneTwo);

	if(newPhone == newPhoneTwo)
	{
		valid = true;
	}


	return valid;
}
