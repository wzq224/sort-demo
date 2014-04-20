#include "all.h"

void quickSortTest(int len)
{
	cout << " quickSort" << endl;
	int* arr= createData(len);

	int start = clock();
	quckSort(arr,0,len-1);
	int end = clock();

	if (check(arr,len))
	{
		cout << "sort successful! time:" <<  (end - start) << endl << endl;
	}
}


inline void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void quckSort(int arr[],int left,int right)
{
	if (left > right)
	{
		return;
	}

	int middle = left;
	int key = arr[right];

	for (int i=left; i<right; i++)
	{
		if (arr[i] < key)
		{
			if (i != middle)
			{
				swap(arr[i],arr[middle]);
			}
			middle++;
		}
	}
	swap(arr[middle],arr[right]);
	quckSort(arr,left,middle-1);
	quckSort(arr,middle+1,right);
}



int partition(int arr[],int left,int right)
{
	int temp = arr[left];
	int key = arr[left];
	while(left<right)
	{
		while (left < right && arr[right] >= key)
		{
			right--;
		}
		arr[left] = arr[right];
		while (left < right && arr[left] <= key)
		{
			left++;
		}
		arr[right] = arr[left];
	}
	arr[left] = temp;
	return left;
}

void quckSort2(int arr[],int left,int right)
{
	if(left < right)
	{
		int middle = partition(arr,left,right);
		quckSort2(arr,left,middle-1);
		quckSort2(arr,middle+1,right);
	}
}