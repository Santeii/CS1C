/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 13
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/

	#include "header.h"
	#include "PrintQueueSingleton.h"

/*************************************************************************
 * Assignment 13
 * _______________________________________________________________________
 * This program implements both a static singleton design pattern as well
 * as a proxy wrapper design pattern.
 * _______________________________________________________________________
 *
 ************************************************************************/

	PrintQueueSingleton *PrintQueueSingleton::s_instance = 0;

	int main()
	{

	//---------------------------------------------------------------------

    string same;
    vector<string> sametho;
    PrintJobManagerProxy Alpha;

	//---------------------------------------------------------------------

	ClassHeader();

	// Reads in print item
	cout << "What would you like to add? ";
	getline(cin, same);

	// Adds the job and outputs the job number
	cout << "You have input job #" <<  PrintQueueSingleton::instance()->AddJob(same) << endl;

	// Outputs the job status
	switch(PrintQueueSingleton::instance()->JobStatus(1))
	{
	case queued : cout << "\nThe string is queued\n";
		break;
	case processed : cout << "\nThe string is processed\n";
		break;
	case error : cout << "\nThe string has an error\n";
		break;
	}
	// Reads in print item
	cout << "\nWhat would you like to add? ";
	getline(cin, same);
	// Adds the job and outputs the job number
	cout << "You have input job #" <<  PrintQueueSingleton::instance()->AddJob(same) << endl;
	// Removes a print job from the list
	PrintQueueSingleton::instance()->CancelJob();
	// Outputs the job status
	switch(PrintQueueSingleton::instance()->JobStatus(1))
	{
	case queued : cout << "\nThe string is queued\n";
		break;
	case processed : cout << "\nThe string is processed\n";
		break;
	case error : cout << "\nThe string has an error\n";
		break;
	}
	// Reads in print item
	cout << "\nWhat would you like to add? ";
	getline(cin, same);
	// Adds the job and outputs the job number
	cout << Alpha.Print(same, "giraffes") << " was printed";
	// Outputs the job status
	switch(Alpha.Status(1))
	{
	case queued : cout << "\nThe string is queued\n";
		break;
	case processed : cout << "\nThe string is processed\n";
		break;
	case error : cout << "\nThe string has an error\n";
		break;
	}

	// Reads in print item
	cout << "\nWhat would you like to add? ";
	getline(cin, same);
	// Adds the job and outputs the job number
	cout << Alpha.Print(same, "giraffes") << " was printed";
	// Removes a print job from the list
	Alpha.Cancel(1, "giraffes") ;
	// Outputs the job status
	switch(Alpha.Status(1))
	{
	case queued : cout << "\nThe string is queued\n";
		break;
	case processed : cout << "\nThe string is processed\n";
		break;
	case error : cout << "\nThe string has an error\n";
		break;
	}


	return 0;
	}


