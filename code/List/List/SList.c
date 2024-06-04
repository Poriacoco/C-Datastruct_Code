#define _CRT_SECURE_NO_WARNINGS

#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while(cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	//检查
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPushBack(SLTNode**pphead,SLTDataType x)
{
	//新插入空间
	SLTNode* newnode = BuySListNode(x);

	SLTNode* tail = *pphead;

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾节点
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
        tail->next = newnode;

	}
	

	
}

void SListPushFront(SLTNode** pphead, SLTDataType x)
{

	SLTNode* newnode =BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	/*if (*pphead == NULL)
	{
		return;
	}*/
	assert(*pphead != NULL);
	//分类讨论
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = NULL;

		while (tail->next != NULL) //与while(tail->next)同义
		{
			prev = tail;
			tail = tail->next;

			//while(tail->next->next)
			//tail=tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}


}

void SListPopFront(SLTNode** pphead)
{
	assert(*pphead != NULL);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	printf("NULL\n");
	return NULL;
}

//插入前一个
void SListInsertBefore(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	//判断pos是否为第一个位置
	if (pos == *pphead)
	{
		//进行头插
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		//找到pos前一个位置(单链表不适合在pos前插入)
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

//删除前一个
void SListEase(SLTNode** pphead, SLTNode* pos)
{
	if (*pphead == pos)
	{
		/**pphead = pos->next;
		free(pos);*/

		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		//pos=NULL;
	}
}

void SListDestory(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}
