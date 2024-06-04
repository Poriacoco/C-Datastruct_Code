#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"

void HeapSort(int* a, int n)
{
	//1.����
	// N���ڵ�
	//ʱ�临�Ӷ�O��N��
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while(end>0)
	{
		Swap(&a[0],&a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

int main()
{
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	//HeapSort(a, sizeof(a) / sizeof(HPDataType));
	Heap hp;
	HeapInit(&hp,a, sizeof(a) / sizeof(HPDataType));
	HeapPush(&hp, 13);

	/*int i = 0;
	for (i = 0; i < sizeof(a) / sizeof(HPDataType); i++)
	{
		printf("%d ", );
	}*/
	return 0;
	HeapDestory(&hp);
}