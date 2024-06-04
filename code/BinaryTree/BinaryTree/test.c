#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"D:\code\StackQueue\StackQueue\Queue.h"

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%d ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->_left);
	printf("%d ", root->_data);
	InOrder(root->_right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->_left);
	PostOrder(root->_right);
	printf("%d ", root->_data);
}


int TreeSize(BTNode*root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + TreeSize(root->_left) + TreeSize(root->_left);
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;

	return TreeLeafSize(root->_left) + TreeLeafSize(root->_right);
}

int TreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + Max(TreeDepth(root->_left), TreeDepth(root->_right));
}

void DestroyTree(BTNode* root)
{
	if (root == NULL)
		return;
	//后序销毁
	DestroyTree(root->_left);
	DestroyTree(root->_right);
	free(root);
}

//层序遍历(队列)先进先出
void BinaryTreeLeverOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root == NULL)
		return;
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		printf("%c ", front->_data);
		if (front->_left)
			QueuePush(&q, front->_left);
		if (front->_right)
			QueuePush(&q, front->_right);
	}
	QueueDestroy(&q);
	printf("/n");
}


int main()
{

	return 0;
}