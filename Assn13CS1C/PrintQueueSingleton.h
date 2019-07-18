/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 13
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/

#ifndef PRINTQUEUESINGLETON_H_
#define PRINTQUEUESINGLETON_H_

#include "header.h"

enum job_status
{
	queued,
	processed,
	error
};

// Struct for the print job
struct PrintJob
{
	int m_id;
	string m_message;
	job_status m_status;
};
/*************************************************************************
* PrintQueueSingleton
* ________________________________________________________________________
* Implements the singleton design pattern for the assignment
*************************************************************************/
class PrintQueueSingleton
{
private:
	vector<PrintJob> list;
	int listNum;
	static PrintQueueSingleton *s_instance;

public:
	PrintQueueSingleton()
	{
		listNum = 0;
	}
	int AddJob(string sTextToPrint)
	{
		PrintJob node;
		node.m_status = queued;
		node.m_message = sTextToPrint;
		node.m_id = listNum;
		list.assign(1, node);
		listNum ++;
		return (node.m_id + 1);
	}

	void CancelJob(int nJobNumber = 0)
	{
		int choice;
		try
		{
			cout << "\nPlease enter the item you would like to delete: ";
			cin  >> choice;
			if (choice)
			{
				throw choice;
			}
			else
			{
				double error = 0.5;
				throw error;
			}
		}

		catch(int choice)
		{

				list.erase(list.begin() + choice);
				listNum --;
		}
		catch(double error)
		{
			cout << "Invalid entry\n";
		}
	}

	job_status JobStatus(int nJobNumber)
	{
		PrintJob node;

		node = list[nJobNumber - 1];

		if(node.m_status)
		{
			return node.m_status;
		}
		else
		{
			return queued;
		}
	}

    static PrintQueueSingleton *instance()
    {
        if (!s_instance)
          s_instance = new PrintQueueSingleton;
        return s_instance;
    }

};
// For error checks
class ClientNotAuthoriezed{};
/*************************************************************************
* PrintJobManagerProxy
* ________________________________________________________________________
* Implements the proxy design pattern for the assignment
*************************************************************************/
class PrintJobManagerProxy
{
private:
	PrintQueueSingleton realJob;

public:

	int Print(string sTextToPrint, string key_guid)
	{
		try
		{

			if (key_guid == "giraffes")
			{
				throw realJob.AddJob(sTextToPrint);
			}
			else
			{
				ClientNotAuthoriezed a;
				throw a;
			}
		}
		catch(int i)
		{
			return i;
		}
		catch(ClientNotAuthoriezed a)
		{
			cout << "\nClient is not authorized\n";
			return NULL;
		}
	}

	bool Cancel(int nJobNumber, string key_guid)
	{
		try
		{

		if (key_guid == "giraffes")
		{
			realJob.CancelJob(nJobNumber);
			throw true;
		}
		else
		{
			ClientNotAuthoriezed a;
			throw a;
		}
		}
		catch(bool i)
		{
			return i;
		}
		catch(ClientNotAuthoriezed a)
		{
			cout << "\nClient is not authorized\n";
			return false;
		}
	}

	job_status Status(int nJobNumber)
	{
		return realJob.JobStatus(nJobNumber);
	}
};





#endif /* PRINTQUEUESINGLETON_H_ */
