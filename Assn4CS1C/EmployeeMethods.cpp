/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 4
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 6/16/2016
 ************************************************************************/

#include "Employee.h"

/******************
 ** CONSTRUCTORS **
 ******************/
Employee::Employee()
{
	Date newDate(0,10,1000);

	name = "None";
	ID = 12345;
	phone = "555-555-5555";
	age = 0;
	gender = 'N';
	title = "None";
	salary = 0;
	hire = newDate;
}

Employee::Employee(string newName, int newID, string newPhone, int newAge,
				char newGender, string newTitle, int newSalary,
				Date newHire)
{
	name = newName;
	ID = newID;
	phone = newPhone;
	age = newAge;
	gender = newGender;
	title = newTitle;
	salary = newSalary;
	hire = newHire;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Employee::~Employee()
{

}

/**************
 ** MUTATORS **
 **************/
/*************************************************************************
* void updateName (string newName)
* Mutator: updates the name variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateName(string newName)
{
	name = newName;
}

/*************************************************************************
* void updateID(int newID)
* Mutator: updates the ID variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateID(int newID)
{
	ID = newID;
}

/*************************************************************************
* void updatePhone(string newPhone)
* Mutator: updates the phone variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updatePhone(string newPhone)
{
	phone = newPhone;
}

/*************************************************************************
* void updateAge(int newAge)
* Mutator: updates the age variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateAge(int newAge)
{
	age = newAge;
}

/*************************************************************************
* void updateGender(char newGender)
* Mutator: updates the gender variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateGender(char newGender)
{
	gender = newGender;
}

/*************************************************************************
* void updateTitle(string newTitle)
* Mutator: updates the title variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateTitle(string newTitle)
{
	title = newTitle;
}

/*************************************************************************
* void updateSalary(int newSalary)
* Mutator: updates the salary variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateSalary(int newSalary)
{
	salary = newSalary;
}

/*************************************************************************
* void updateHire(Date newHire)
* Mutator: updates the hire variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::updateHire(Date newHire)
{
	hire = newHire;
}

/*************************************************************************
* void Employee::addAge(int i)
* Mutator: adds on to the age variable
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::addAge(int i)
{
	age = i + age;
}

/***************
 ** ACCESSORS **
 ***************/
/*************************************************************************
* void printEmployee() const
* Acessor: outputs the Employee information in a table in the console
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::printEmployee() const
{
	cout << left << setfill('*') << setw(99) << "*";
	cout << setfill(' ') << endl;
	cout << "* " << setw(16) << name << " * " << setw(13)
		 << ID << " * " << setw(12) << phone << " * " << setw(3)
		 << age << " * " << setw(6) << gender << " * " << setw(9)
		 << title << " * $" << setw(5) << salary << " * " << hire
		 << " *\n";
}

/*************************************************************************
* void getName(string &newName) const
* Acessor: passes in a variable by reference and returns the variable with
* the private data
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::getName(string &newName) const
{
	newName = name;
}

/*************************************************************************
* void getAge(string &getAge) const
* Acessor: passes in a variable by reference and returns the variable with
* the private data
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::getAge(int &newAge)const
{
	newAge = age;
}

/*************************************************************************
* void Employee::getPhone(string &newPhone) const
* Acessor: passes in a variable by reference and returns the variable with
* the private data
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Employee::getPhone(string &newPhone) const
{
	newPhone = phone;
}

/*****************
 ** OVERLOADING **
 *****************/
/*************************************************************************
* bool operator==(const Employee & a, const Employee & b)
* Overload: overloads the ++ operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool operator==(const Employee & a, const Employee & b)
{
	bool valid = false;

	if(a.phone == b.phone)
	{
		valid = true;
	}

	return valid;
}

/*************************************************************************
* Employee Employee::operator+(const int i)
* Overload: overloads the + operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: *this
*************************************************************************/
Employee Employee::operator+(const int i)
{
	age = age + i;
	return *this;
}

/*************************************************************************
* Employee& Employee::operator =(const Employee& a
* Overload: overloads the = operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: *this
*************************************************************************/
Employee& Employee::operator =(const Employee& a)
{
	name = a.name;
	ID = a.ID;
	phone = a.phone;
	age = a.age;
	gender = a.gender;
	title = a.title;
	salary = a.salary;
	hire = a.hire;

	return *this;
}

/*************************************************************************
* std::ostream& operator<<(std::ostream & os, const Employee & st)
* Overload: overloads the << operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: os
*************************************************************************/
std::ostream& operator<<(std::ostream & os,
						   const Employee & st)
{
	os << st.name << endl << st.ID << endl << st.age << endl << st.gender
	   << endl << st.title << endl << st.salary << endl << st.hire << endl;

	return os;
}

/*************************************************************************
* Employee& operator>>(std::istream & is, Employee & st)
* Overload: overloads the >> operator so that it will work with this class
*-------------------------------------------------------------------------
* Return: is
*************************************************************************/
Employee& operator>>(std::istream & is,
						  Employee & st)
{
	cout << "Input name: ";
	getline(is, st.name);
	cout << "Input ID: ";
	is >> st.ID;
	cout << "Input age: ";
	is >> st.age;
	is.clear();
	is.ignore(1000,'\n');
	cout << "Input gender: ";
	is.get(st.gender);
	is.clear();
	is.ignore(1000,'\n');
	cout << "Input title: ";
	getline(is,st.title);
	cout << "Input salary: ";
	is >> st.salary;
	cout << "Input hire date: \n";
	is>> st.hire;

	is.clear();
	is.ignore(10000,'\n');
	return st;
}
