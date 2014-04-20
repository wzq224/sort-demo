#include <iostream>
#include <ctime>
using namespace std;



//test
bool check(int* arr,int n);
void out(int* arr,int n);
int* createData(int n);
void testtest();

//quck_sort
inline void swap(int &a,int &b);
void quickSortTest(int len);
void quckSort(int arr[],int left,int right);
void quckSort2(int arr[],int left,int right);

//choose_sort
void chooseSort(int arr[],int len);
void chooseSortTest(int len);

//insert_sort
void insertSort(int arr[],int len);
void insertSortTest(int len);

//bubble_sort
void bubbleSort(int arr[],int len);
void bubbleSortTest(int len);



//heap_sort
void heapSort(int arr[],int len);
void buildHeap(int arr[],int len);
void adjustHeap(int arr[],int i,int len);
void heapSortTest(int len);
