#define _CRT_SECURE_NO_WARNINGS

//#include "SList.h"
//void Test1()
//{
//	//β��
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
//	//ͷ��
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
//	//β��
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
//	//ͷ��
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
//	//βɾ
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//	printf("NULL\n");
//
//	//ͷɾ
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//	printf("NULL\n");
//}
//void Test3()
//{
////β��
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
////ͷ��
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
//	//����
//	SLTNode*pos=SListFind(plist, 2);
//	//������
//	int i = 1;
//	while (pos)
//	{
//		printf("��%d���ڵ㣬pos=%p\n",i++,pos);
//		pos = SListFind(pos->next, 2);
//		//�޸� 2->20(�����һ��posδ������)
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
//	//β��
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
//	//ͷ��
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

void TestList1()//β��βɾ
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
void TestList2()//ͷ��ͷɾ
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
