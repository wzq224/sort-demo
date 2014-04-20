#include "all.h"
#include <ctime>


int* createData(int n)
{
	srand(unsigned(time(0)));
	int* arr = new int[n];
	for (int i=0; i<n; i++)
	{
		arr[i] = rand()%n;
	}
	return arr;
}


void out(int* arr,int n)
{
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
}

bool check(int* arr,int n)
{
	for (int i=0; i<n-1; i++)
	{
		if (arr[i] > arr[i+1])
		{
			return false;
		}
	}
	return true;
}

void testtest()
{
	int len = 100000;
	cout << "data nums:" << len << endl;
	quickSortTest(len);
	heapSortTest(len);
	chooseSortTest(len);
	insertSortTest(len);
	bubbleSortTest(len);
}