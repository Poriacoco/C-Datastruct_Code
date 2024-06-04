#define _CRT_SECURE_NO_WARNINGS

//#include "SList.h"
//void Test1()
//{
//	//尾插
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPushBack(&plist, 5);
//	SListPushBack(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//头插
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPushFront(&plist, 5);
//	SListPushFront(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//}
//void Test2()
//{
//	//尾插
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPushBack(&plist, 5);
//	SListPushBack(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//头插
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPushFront(&plist, 5);
//	SListPushFront(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//尾删
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//头删
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//	printf("NULL\n");
//}
//void Test3()
//{
////尾插
//SLTNode* plist = NULL;
//SListPushBack(&plist, 1);
//SListPushBack(&plist, 2);
//SListPushBack(&plist, 3);
//SListPushBack(&plist, 4);
//SListPushBack(&plist, 5);
//SListPushBack(&plist, 2);
//
//SListPrint(plist);
//printf("NULL\n");
//
////头插
//SListPushFront(&plist, 1);
//SListPushFront(&plist, 2);
//SListPushFront(&plist, 3);
//SListPushFront(&plist, 4);
//SListPushFront(&plist, 5);
//SListPushFront(&plist, 2);
//
//SListPrint(plist);
//printf("NULL\n");
//
//	//查找
//	SLTNode*pos=SListFind(plist, 2);
//	//多层查找
//	int i = 1;
//	while (pos)
//	{
//		printf("第%d个节点，pos=%p\n",i++,pos);
//		pos = SListFind(pos->next, 2);
//		//修改 2->20(这里第一个pos未被更改)
//		if(pos)
//		{
//			pos->data = 20;
//		}
//	}
//	SListPrint(plist);
//
//}
//void Test4()
//{
//	//尾插
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPushBack(&plist, 5);
//	SListPushBack(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//头插
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPushFront(&plist, 5);
//	SListPushFront(&plist, 2);
//
//	SListPrint(plist);
//	printf("NULL\n");
//
//	SLTNode* pos = SListFind(plist, 3);
//	if (pos)
//	{
//		SListInsertBefore(&plist, pos, 30);
//	}
//	SListPrint(plist);
//	SListDestory(&plist);
//}

#include"List.h"

void TestList1()//尾插尾删
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPrint(plist);
	
	ListPopBack(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;
}
void TestList2()//头插头删
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 1);
	ListPushFront(plist, 1);
	ListPushFront(plist, 1);
	ListPrint(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;


}

int main()
{
	//TestList1();
	TestList2();
	return 0;
}
