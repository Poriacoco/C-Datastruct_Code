#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

//��������
//ʱ�临�Ӷ� O(N^2),�ռ临�Ӷ� O(1)
//˳��������ã������
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; i++)
	{//��������
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
//ϣ������
void ShellSort(int* a, int n)
{
	int gap=n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			//���鲢��
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

//ѡ������
void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		//�ҳ���ֵ���±�
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
			max = min;//max��begin�ص��ᵼ����Ч����
		Swap(&a[end], &a[max]);

		begin++;
		end--;
	}
}

//������(N*logN)
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
			//����С�ѣ������Ѷ����������ĩβҶ�ӽڵ����ݽ����������ķ�����棬�������µ���ѡ���϶�����������
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
		//����С��
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

//ð������
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
		//һ��ð�����޽������Ѿ����������ٴν���
		if (exchange == 0)
			break;
		end--;
	}
}

//��������
int GetMidIndex(int* a, int begin, int end)
{//����ȡ��
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
int PartSort1(int* a, int begin, int end)//����ָ�뷨
{
	int midindex=GetMidIndex(a, begin, end);
	Swap(&a[midindex], &a[end]);//����ȡ�е��Ż�,ʹ�����������ٳ���

	int key = a[end];
	int keyindex = end;
	//�ұ�ֵ��key�������begin���ߣ�����������λ��һ����keyֵ�󣬱��ڽ���
	//���ֵ��key�����ұ�begin���ߣ�����������λ��һ����keyֵС��
	while (begin < end)
	{
		//begin�Ҵ�
		while (begin<end && a[begin] <= key)
		{
			begin++;
		}
		//end ��С
		while (begin < end && a[end] >= key)
		{
			end--;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyindex]);
	return begin;
}

int PartSort2(int* a, int begin, int end)//�ڿӷ�
{
	int midIndex = GetMidIndex(a, begin, end);
	Swap(&a[midIndex], &a[end]);

	//key��Ϊ�ʼ�Ŀ�
	int key = a[end];
	while (begin < end)
	{
		//�ұ�ѡ�ӣ������begin���ߣ��������
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		//��߱�key���ֵa[begin] �end��λ��begin����Ϊ���µĿ�λ
		a[end] = a[begin];
		while (begin < end && a[end] >= key)
		{
			end--;
		}
		//�ұ��ҵ���keyС��ֵa[end] ����begin���µĿ�λ
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}

int PartSort3(int* a, int begin, int end)//ǰ��ָ�뷨
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

//�ݹ�ķǵݹ�  --1.�ĳ�ѭ�� 2.ջģ��洢����
//�ŵ� 1,���Ч�ʣ������ִ���������Ż�΢����΢��
//2������ջ֡��ȹ��ߵ��µ�ջ�����ջ�ռ�һ����M���𣬶����ݽṹģ��ǵݹ飬���ݽ����ڶ��ϣ�����G����Ŀռ䣩

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

//�鲢����
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

//�鲢���� �ǵݹ�
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
	int gap = 1;//��������Ԫ

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

//��������--(ֻ������int����)
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

	//ͳ�ƴ���
	
	for (int i = 0; i < n; i++)
	{
		countArr[a[i] - min]++;//����λ�� -- (a[i]-min)
	}
	//����
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