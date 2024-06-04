#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

LTNode*ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	assert(phead);

	phead->next = phead;
	phead->prev = phead;

	return phead;
}

LTNode* BuyListNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


void ListPrint(LTNode* phead)
{
	assert(phead);
	//������������ݣ�������print
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPushBack(LTNode* phead, LTDataType x)
{
	LTNode* newnode = (LTNode * )malloc(sizeof(LTNode));
	assert(newnode);

	newnode->data = x;

	LTNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	LTNode* tpre= phead->prev->prev;
	tpre->next = phead;
	phead->prev = tpre;
	free(tail);
	tail = NULL;
}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;

}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* next = phead->next;
	LTNode* nnext = next->next;

	phead->next = nnext;
	nnext->prev = phead;
	free(next);
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	//��
}
LTNode* ListInsert(LTNode* pos, LTDataType x)
{

}

LTNode* ListErase(LTNode* pos)
{
	 
}
void ListDestroy(LTNode* phead)
{
	//���Դ�����ָ�룬���Ҫ�ͷ�phead
	//����Ϊ�˺�����ʽ��ͳһ�ԣ���һ��ָ��Ҳ���ԣ�����ں�����: plist=NULL;
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}




