#include "all.h"


void heapSortTest(int len)
{
	cout << " heapSort" << endl;
	int* arr= createData(len);

	int start = clock();
	heapSort(arr,len);
	int end = clock();

	if (check(arr,len))
	{
		cout << "sort successful! time:" <<  (end - start) << endl << endl;
	}
}

void adjustHeap(int arr[],int i,int len)
{
	while(i <= len/2)
	{
		int left = i*2+1;
		int right = 2*i+2;
		int max = i;
		if (left < len && arr[left] > arr[max])
		{
			max = left;
		}
		if (right < len && arr[right] >arr[max])
		{
			max = right;
		}
		if (i != max)
		{
			swap(arr[i],arr[max]);
			i = max;
		}
		else
		{
			break;
		}

	}
}


void buildHeap(int arr[],int len)
{
	for (int i=len/2;i>=0; i--)
	{
		adjustHeap(arr,i,len);
	}
}

void heapSort(int arr[],int len)
{
	buildHeap(arr,len);
	while(len--)
	{
		swap(arr[0],arr[len]);
		adjustHeap(arr,0,len);
	}
}