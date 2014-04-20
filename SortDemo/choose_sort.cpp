#include "all.h"


void chooseSortTest(int len)
{
	cout << " chooseSort" << endl;
	int* arr= createData(len);

	int start = clock();
	insertSort(arr,len);
	int end = clock();

	if (check(arr,len))
	{
		cout << "sort successful! time:" <<  (end - start) << endl << endl;
	}
}

void chooseSort(int arr[],int len)
{
	int minPos;
	for (int i=0; i<len; i++)
	{
		minPos = i;
		for (int j=i+1; j<len; j++)
		{
			if (arr[j] < arr[minPos])
			{
				minPos = j;
			}
		}
		if (i != minPos)
		{
			swap(arr[i],arr[minPos]);
		}
	}
}