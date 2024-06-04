#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode**phead,SLTDataType x);
void SListPushFront(SLTNode** phead, SLTDataType x);
void SListPopBack(SLTNode** phead);
void SListPopFront(SLTNode** phead);
//Find查找pos,pos之前插入
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
void SListInsertBefore(SLTNode** pphead, SLTNode* pos,SLTDataType x);


void SListEase(SLTNode** pphead, SLTNode* pos);
void SListDestory(SLTNode** pphead);



