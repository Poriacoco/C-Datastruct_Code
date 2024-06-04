#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;

}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
//��β��
void QueuePop(Queue* pq);
//��ͷɾ
QDataType QueueFront(Queue* pq);
//ȡ��ͷ����
QDataType QueueBack(Queue* pq);
//ȡ��β����

int QueueSize(Queue* pq);

bool QueueEmpty(Queue* pq);

