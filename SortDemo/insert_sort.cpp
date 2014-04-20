#include "all.h"


void insertSortTest(int len)
{
	cout << " insertSort" << endl;
	int* arr= createData(len);

	int start = clock();
	insertSort(arr,len);
	int end = clock();

	if (check(arr,len))
	{
		cout << "sort successful! time:" <<  (end - start) << endl << endl;
	}
}

void insertSort(int arr[],int len)
{
	int temp;
	for (int i=1; i<len; i++)
	{
		temp = arr[i];
		for (int j=i-1; j>=0 && temp < arr[j]; j--)
		{
			arr[j+1]=arr[j];
			arr[j] = temp;
		}
	}
}