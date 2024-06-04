#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



// #define N 1000
typedef int SLDataType;
// 静态数据表 
typedef struct SeqList
{
	//int a[N];
	SLDataType* a;
	int size;    // 数组中存了多少数据
	int capacity;   // 数组存了多少数据容量个数
}SL;

void SeqListPrint(SL* ps);
void SeqListCheckCapacity();
// 接口函数--命名风格STL
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListDestory(SL* ps);

void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//.......
//查找x位置并返回下标
int SeqListFind(SL* ps, SLDataType x);
//指定位置插入
void SeqListInsert(SL* ps,int pos, SLDataType x);
//
void SeqListErase(SL* ps, int pos);



