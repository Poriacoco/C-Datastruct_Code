#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity=0;
}

//扩容函数
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail/n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;

	}
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->capacity = ps->size = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	//空间不足，扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail/n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;

	}
	ps->a[ps->size] = x;
	ps->size++;

}
void SeqListPopBack(SL* ps)
{
	/*if(ps->size > 0)
	{
		ps->size--;
	}*/
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
		ps->a[0] = x;
		ps->size++;
}
void SeqListPopFront(SL* ps)
{
	//挪动数据
	assert(ps->size > 0);
	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin+1];
		begin++;
	}
	ps->size--;
}



int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//if (pos > ps->size || pos < 0) （只要满足第一个条件，后续就不在判断）https://blog.csdn.net/Koikoi12/article/details/120062014
	//{
	//	printf("pos invalid\n");
	//	return;
	//}
	assert(pos >= 0 && pos <= ps->size); /*（只要满足第一个条件，后续就不在判断）*/
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos <= ps->size-1); /*（只要满足第一个条件，后续就不在判断）*/
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size --;
}

