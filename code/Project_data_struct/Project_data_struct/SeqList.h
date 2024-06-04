#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



// #define N 1000
typedef int SLDataType;
// ��̬���ݱ� 
typedef struct SeqList
{
	//int a[N];
	SLDataType* a;
	int size;    // �����д��˶�������
	int capacity;   // ������˶���������������
}SL;

void SeqListPrint(SL* ps);
void SeqListCheckCapacity();
// �ӿں���--�������STL
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListDestory(SL* ps);

void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//.......
//����xλ�ò������±�
int SeqListFind(SL* ps, SLDataType x);
//ָ��λ�ò���
void SeqListInsert(SL* ps,int pos, SLDataType x);
//
void SeqListErase(SL* ps, int pos);



