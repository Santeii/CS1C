/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: 15
 * CLASS		: CS1C
 * SECTION		: MTWTH: 4PM
 * DUE DATE		: 7/25/2016
 ************************************************************************/

	#include "header.h"

/*************************************************************************
 * Assignment 15
 * _______________________________________________________________________
 * This program implements different sorting algorithms such as bubble,
 * insertion, selection, quick, and merge.
 * _______________________________________________________________________
 *
 ************************************************************************/

	int main()
	{
	// CONSTANTS
	int AR_SIZE = 100;

	//---------------------------------------------------------------------

    int intAr1[AR_SIZE];
    int intAr2[AR_SIZE];
    int intAr3[AR_SIZE];
    int comparisons[15];
	double time[15];
	int i;
	int f;
	int j;
	bool check;
	int counter;

	//---------------------------------------------------------------------

	ClassHeader();

	check = true;
	f=0;

	for(i=0; i < AR_SIZE; i++)
	{
		intAr1[i] = i+1;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr2[i] = AR_SIZE-i;
	}
	for(i=0; i < AR_SIZE; i++)
	{
		intAr3[i] = i+1;
	}
	random_shuffle(&intAr3[0], &intAr3[AR_SIZE]);

	for(i=0; i<20;i++)
	{
		cout << "TEST #" << i+1 << endl;
		if(f < 10 && check == true)
		{
			cout << "list 1: " << intAr1[f] << endl;
			cout << "list 2: " << intAr2[f] << endl;
			cout << "list 3: " << intAr3[f] << endl;
			f++;
			if(f == 10)
			{
				check = false;
				f --;
			}
		}
		else
		{
			cout << "list 1: " << intAr1[99-f] << endl;
			cout << "list 2: " << intAr2[99-f] << endl;
			cout << "list 3: " << intAr3[99-f] << endl;
			f --;
		}
		cout << endl;
	}

	counter = 0;
	for(int x=0; x<AR_SIZE; x++)
	{
		for(int y=0; y<AR_SIZE-1; y++)
		{
			if(intAr1[y] > intAr1[y+1])
			{
				int temp = intAr1[y+1];
			    {
					intAr1[y+1] = intAr1[y];
					intAr1[y] = temp;
			    }

			}
			counter ++;
		}
	}
	comparisons[0] = counter;
	time[0] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(int x=0; x<AR_SIZE; x++)
	{
		for(int y=0; y<AR_SIZE-1; y++)
		{
			if(intAr2[y] > intAr2[y+1])
			{
				int temp = intAr2[y+1];
			    {
					intAr2[y+1] = intAr2[y];
					intAr2[y] = temp;
			    }

			}
			counter ++;
		}
	}
	comparisons[1] = counter;
	time[1] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(int x=0; x<AR_SIZE; x++)
	{
		for(int y=0; y<AR_SIZE-1; y++)
		{
			if(intAr3[y] > intAr3[y+1])
			{
				int temp = intAr3[y+1];
			    {
					intAr3[y+1] = intAr3[y];
					intAr3[y] = temp;
			    }

			}
			counter ++;
		}
	}
	comparisons[2] = counter;
	time[2] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	check = true;
	f=0;

	for(i=0; i<20;i++)
	{
		cout << "TEST #" << i+1 << endl;
		if(f < 10 && check == true)
		{
			cout << "list 1: " << intAr1[f] << endl;
			cout << "list 2: " << intAr2[f] << endl;
			cout << "list 3: " << intAr3[f] << endl;
			f++;
			if(f == 10)
			{
				check = false;
				f --;
			}
		}
		else
		{
			cout << "list 1: " << intAr1[99-f] << endl;
			cout << "list 2: " << intAr2[99-f] << endl;
			cout << "list 3: " << intAr3[99-f] << endl;
			f --;
		}
		cout << endl;
	}


	for(i=0; i < AR_SIZE; i++)
	{
		intAr1[i] = i+1;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr2[i] = AR_SIZE-i;
	}
	for(i=0; i < AR_SIZE; i++)
	{
		intAr3[i] = i+1;
	}
	random_shuffle(&intAr3[0], &intAr3[AR_SIZE]);

	counter = 0;
	for(i=0; i<AR_SIZE; i++)
	{
		j=i;
		while (j>0 && intAr1[j] < intAr1[j-1])
		{
			int temp = intAr1[j];
			intAr1[j] = intAr1[j-1];
			intAr1[j-1] = temp;
			j--;
			counter ++;
		}
	}
	comparisons[3] = counter;
	time[3] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(i=0; i<AR_SIZE; i++)
	{
		j=i;
		while (j>0 && intAr2[j] < intAr2[j-1])
		{
			int temp = intAr2[j];
			intAr2[j] = intAr2[j-1];
			intAr2[j-1] = temp;
			j--;
			counter ++;
		}
	}
	comparisons[4] = counter;
	time[4] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(i=0; i<AR_SIZE; i++)
	{
		j=i;
		while (j>0 && intAr3[j] < intAr3[j-1])
		{
			int temp = intAr3[j];
			intAr3[j] = intAr3[j-1];
			intAr3[j-1] = temp;
			j--;
			counter ++;
		}
	}
	comparisons[5] = counter;
	time[5] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	check = true;
	f=0;

	for(i=0; i<20;i++)
	{
		cout << "TEST #" << i+1 << endl;
		if(f < 10 && check == true)
		{
			cout << "list 1: " << intAr1[f] << endl;
			cout << "list 2: " << intAr2[f] << endl;
			cout << "list 3: " << intAr3[f] << endl;
			f++;
			if(f == 10)
			{
				check = false;
				f --;
			}
		}
		else
		{
			cout << "list 1: " << intAr1[99-f] << endl;
			cout << "list 2: " << intAr2[99-f] << endl;
			cout << "list 3: " << intAr3[99-f] << endl;
			f --;
		}
		cout << endl;
	}


	for(i=0; i < AR_SIZE; i++)
	{
		intAr1[i] = i+1;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr2[i] = AR_SIZE-i;
	}
	for(i=0; i < AR_SIZE; i++)
	{
		intAr3[i] = i+1;
	}
	random_shuffle(&intAr3[0], &intAr3[AR_SIZE]);

	counter = 0;
	for(int x=0;x<AR_SIZE;x++)
	{
		int index_of_min = x;
		for(int y = x; y<AR_SIZE; y++)
		{
			if(intAr1[index_of_min] > intAr1[y])
			{
				index_of_min = y;
			}
			counter++;
		}
		int temp = intAr1[x];
		intAr1[x] = intAr1[index_of_min];
		intAr1[index_of_min] = temp;
	}

	comparisons[6] = counter;
	time[6] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(int x=0;x<AR_SIZE;x++)
	{
		int index_of_min = x;
		for(int y = x; y<AR_SIZE; y++)
		{
			if(intAr2[index_of_min] > intAr2[y])
			{
				index_of_min = y;
			}
			counter++;
		}
		int temp = intAr2[x];
		intAr2[x] = intAr2[index_of_min];
		intAr2[index_of_min] = temp;
	}

	comparisons[7] = counter;
	time[7] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	for(int x=0;x<AR_SIZE;x++)
	{
		int index_of_min = x;
		for(int y = x; y<AR_SIZE; y++)
		{
			if(intAr3[index_of_min] > intAr3[y])
			{
				index_of_min = y;
			}
			counter++;
		}
		int temp = intAr3[x];
		intAr3[x] = intAr3[index_of_min];
		intAr3[index_of_min] = temp;
	}

	comparisons[8] = counter;
	time[8] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	check = true;
	f=0;

	for(i=0; i<20;i++)
	{
		cout << "TEST #" << i+1 << endl;
		if(f < 10 && check == true)
		{
			cout << "list 1: " << intAr1[f] << endl;
			cout << "list 2: " << intAr2[f] << endl;
			cout << "list 3: " << intAr3[f] << endl;
			f++;
			if(f == 10)
			{
				check = false;
				f --;
			}
		}
		else
		{
			cout << "list 1: " << intAr1[99-f] << endl;
			cout << "list 2: " << intAr2[99-f] << endl;
			cout << "list 3: " << intAr3[99-f] << endl;
			f --;
		}
		cout << endl;
	}


	for(i=0; i < AR_SIZE; i++)
	{
		intAr1[i] = i+1;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr2[i] = AR_SIZE-i;
	}
	for(i=0; i < AR_SIZE; i++)
	{
		intAr3[i] = i+1;
	}
	random_shuffle(&intAr3[0], &intAr3[AR_SIZE]);

	counter = 0;
	quickSort(intAr1, 0, AR_SIZE, counter);
	comparisons[9] = counter;
	time[9] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	quickSort(intAr2, 0, AR_SIZE, counter);
	comparisons[10] = counter;
	time[10] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	quickSort(intAr3, 0, AR_SIZE, counter);
	comparisons[11] = counter;
	time[11] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	check = true;
	f=0;

	for(i=0; i<20;i++)
	{
		cout << "TEST #" << i+1 << endl;
		if(f < 10 && check == true)
		{
			cout << "list 1: " << intAr1[f] << endl;
			cout << "list 2: " << intAr2[f] << endl;
			cout << "list 3: " << intAr3[f]+1 << endl;
			f++;
			if(f == 10)
			{
				check = false;
				f --;
			}
		}
		else
		{
			cout << "list 1: " << intAr1[99-f] << endl;
			cout << "list 2: " << intAr2[99-f] << endl;
			cout << "list 3: " << intAr3[99-f]+1 << endl;
			f --;
		}
		cout << endl;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr1[i] = i+1;
	}

	for(i=0; i < AR_SIZE; i++)
	{
		intAr2[i] = AR_SIZE-i;
	}
	for(i=0; i < AR_SIZE; i++)
	{
		intAr3[i] = i+1;
	}
	random_shuffle(&intAr3[0], &intAr3[AR_SIZE]);

	counter = 0;
	mergeSort(intAr1, 0, AR_SIZE, counter);
	comparisons[12] = counter;
	time[12] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	mergeSort(intAr2, 0, AR_SIZE, counter);
	comparisons[13] = counter;
	time[13] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	counter = 0;
	mergeSort(intAr3, 0, AR_SIZE, counter);
	comparisons[14] = counter;
	time[14] = ((clock()/double(CLOCKS_PER_SEC))/1000000);

	cout << "\n\nComparisons:";
	for(i=0; i<15; i++)
	{
		cout << "\ntrial #" << i+1 << " had " << comparisons[i] << " comparisons\n";
	}
	cout << "\n\Times:";
	for(i=0; i<15; i++)
	{
		cout << "\ntrial #" << i+1 << " took " << setprecision(100);
			cout << time[i] << " seconds\n";
	}

	return 0;
	}


