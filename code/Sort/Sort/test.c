#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void TestInsertSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestShellSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestSlectSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestHeapSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestBubbleSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestQuickSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5,3,5,8,1,5,0 };
	PrintArray(a, sizeof(a) / sizeof(int));
	//QuickSort(a, 0,sizeof(a) / sizeof(int)-1);

	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestMergeSort()
{
	int a[] = { 3,1,4,1,7,9,8,2,0,5 };
	PrintArray(a, sizeof(a) / sizeof(int));
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestMergeSortNonR()
{
	int a[] = { 4,7,3,1,9,8,2,0 };
	PrintArray(a, sizeof(a) / sizeof(int));
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestCountSort()
{
	int a[] = { 4,7,3,1,9,8,2,0 };
	PrintArray(a, sizeof(a) / sizeof(int));
	CountSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
int main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestSlectSort();
	//TestHeapSort();
	//TestBubbleSort();
	//TestQuickSort();
	//TestMergeSortNonR();
	TestCountSort();



	return 0;
}