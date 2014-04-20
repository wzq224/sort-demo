#include "all.h"


void bubbleSortTest(int len)
{
	cout << " bubbleSort" << endl;
	int* arr= createData(len);

	int start = clock();
	bubbleSort(arr,len);
	int end = clock();

	if (check(arr,len))
	{
		cout << "sort successful! time:" <<  (end - start) << endl << endl;
	}
}

void bubbleSort(int arr[],int len)
{
	for (int i=0; i<len-1; i++)
	{
		for (int j=0; j<len-1-i; j++)
		{
			if (arr[j+1] < arr[j])
			{
				//swap(arr[j+i],arr[j]);
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
