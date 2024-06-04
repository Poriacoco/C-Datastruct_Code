#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

//插入排序
//时间复杂度 O(N^2),空间复杂度 O(1)
//顺序有序最好，逆序最坏
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; i++)
	{//单趟排序
		int end=i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}
//希尔排序
void ShellSort(int* a, int n)
{
	int gap=n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			//多组并排
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//选择排序
void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		//找出最值的下标
		int min;
		int max;
		min = max = begin;
		for (int i = begin+1; i <=end; i++)
		{
			if (a[i] > a[max])
				max = i;
			if (a[i] < a[min])
				min = i;
		}
		Swap(&a[begin], &a[min]);
		if (begin == max)
			max = min;//max与begin重叠会导致无效交换
		Swap(&a[end], &a[max]);

		begin++;
		end--;
	}
}

//堆排序(N*logN)
void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = 2 * parent + 1;
	
	while (child < n)
	{
		if (a[child] < a[child + 1] && child+1 < n)
		{
			child++;
		}
		
		if (a[child] > a[parent])
		{
			//建立小堆（这样堆顶数据最大，与末尾叶子节点数据交换，把最大的放最后面，重新向下调整选出老二继续交换）
			Swap(&a[child], &a[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
			break;
	}
}
void HeapSort(int*a,int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		//建立小堆
		AdjustDwon(a, n, i);
	}
	int end = n - 1;
	while (end >= 0)
	{
		Swap(&a[end], &a[0]);
		AdjustDwon(a, end, 0);
		end--;
	}
}

//冒泡排序
void BubbleSort(int* a, int n)
{
	int end = n;
	while (end > 0)
	{
		int exchange = 0;
		for (int i = 1; i < end; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		//一次冒泡中无交换，已经有序，无需再次交换
		if (exchange == 0)
			break;
		end--;
	}
}

//快速排序
int GetMidIndex(int* a, int begin, int end)
{//三数取中
	int mid = (begin + end) / 2;
	if (a[begin] <= a[mid] && a[mid] <= a[end])
		return mid;
	if (a[begin] <= a[end] && a[end] <= a[mid])
		return end;
	if (a[mid] <= a[begin] && a[begin] <= a[end])
		return begin;
	if (a[mid] <= a[end] && a[end] <= a[begin])
		return end;
	if (a[end] <= a[begin] && a[begin] <= a[mid])
		return begin;
	if (a[end] <= a[mid] && a[mid] <= a[begin])
		return mid;
}
int PartSort1(int* a, int begin, int end)//左右指针法
{
	int midindex=GetMidIndex(a, begin, end);
	Swap(&a[midindex], &a[end]);//三数取中的优化,使得最坏的情况不再出现

	int key = a[end];
	int keyindex = end;
	//右边值做key，则左边begin先走，这样相遇的位置一定比key值大，便于交换
	//左边值做key，则右边begin先走，这样相遇的位置一定比key值小。
	while (begin < end)
	{
		//begin找大
		while (begin<end && a[begin] <= key)
		{
			begin++;
		}
		//end 找小
		while (begin < end && a[end] >= key)
		{
			end--;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyindex]);
	return begin;
}

int PartSort2(int* a, int begin, int end)//挖坑法
{
	int midIndex = GetMidIndex(a, begin, end);
	Swap(&a[midIndex], &a[end]);

	//key作为最开始的坑
	int key = a[end];
	while (begin < end)
	{
		//右边选坑，故左边begin先走，找数填坑
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		//左边比key大的值a[begin] 填到end坑位，begin就作为了新的坑位
		a[end] = a[begin];
		while (begin < end && a[end] >= key)
		{
			end--;
		}
		//右边找到比key小的值a[end] 填到左边begin留下的坑位
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}

int PartSort3(int* a, int begin, int end)//前后指针法
{
	int midIndex = GetMidIndex(a, begin, end);
	Swap(&a[midIndex], &a[end]);

	int key = a[end];
	int cur = begin;
	int prev = begin - 1;

	/*while (cur <= end )
	{
		if (a[cur] < key)
		{
			if(++prev!=cur) 
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}*/

	while (cur < end)
	{
		if (a[cur] < key && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	Swap(&a[++prev], &a[cur]);

	return prev;
}

void QuickSort(int* a, int left, int right)
{
	assert(a);
	if (left < right) 
	{
		if ((right - left + 1) > 10)
		{
			int div = PartSort3(a, left, right);
			// [left ,div-1]  [div] [div+1, rigth]
			QuickSort(a, left, div - 1);
			QuickSort(a, div + 1, right);
		}
		else
		{
			InsertSort(a + left, right - left + 1);
		}
	}
}

//递归改非递归  --1.改成循环 2.栈模拟存储数据
//优点 1,提高效率（对于现代计算机，优化微乎其微）
//2，避免栈帧深度过高导致的栈溢出（栈空间一般在M级别，而数据结构模拟非递归，数据建立在堆上，堆是G级别的空间）

void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	StackInit(&st);

	StackPush(&st,right);
	StackPush(&st, left);

	while (!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);

		int div = PartSort3(a, begin, end);

		if (div + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, div+1);
		}
		if (begin < div - 1)
		{
			StackPush(&st, div - 1);
			StackPush(&st, begin);
		}
	}
	StackDestroy(&st);
}

//归并排序
void _MergeSort(int* a, int left, int right,int* tmp)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;

	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1, right, tmp);

	int begin1 = left;
	int end1 = mid;

	int begin2 = mid + 1;
	int end2 = right;

	int index = begin1;
	while (begin1 < end1 && begin2 < end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	while(begin1<=end1)
		tmp[index++] = a[begin1++];
	while (begin2 <= end2)
		tmp[index++] = a[begin2++];
	
	for (int i = left; i < right; i++)
	{
		a[i] = tmp[i];
	}

}
void MergeSort(int* a, int n)
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);

	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

//归并排序 非递归
void _Sort(int* a, int left,int gap,int*tmp)
{
	int begin1 = left;
	int end1 = left+gap-1;

	int begin2 = left + gap;
	int end2 = left+2*gap-1;

	int index = begin1;

	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	while (begin1 <= end1)
		tmp[index++] = a[begin1++];
	while (begin2 <= end2)
		tmp[index++] = a[begin2++];

	for (int i = left; i <=end2 ; i++)
	{
		a[i] = tmp[i];
	}

}
void MergeSortNonR(int* a, int n)
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);
	int gap = 1;//组内排序单元

	while (gap <= n / 2)
	{
		int start = 0;
		while (start < n)
		{
			_Sort(a, start, gap, tmp);
			start += 2 * gap;

		}
		gap *= 2;

	}
	free(tmp);
}

//计数排序--(只适用于int整型)
void CountSort(int* a, int n)
{
	assert(a);
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	int range = max - min + 1;
	int* countArr = (int*)malloc(sizeof(int) * range);
	memset(countArr, 0, sizeof(int) * range);

	//统计次数
	
	for (int i = 0; i < n; i++)
	{
		countArr[a[i] - min]++;//绝对位置 -- (a[i]-min)
	}
	//排序
	int index = 0;
	for (int j = 0; j < range; j++)
	{
		while(countArr[j]--)
		{
			a[index++] = j + min;
		}
	}
	free(countArr);
}