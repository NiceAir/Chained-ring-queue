#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int DataType;

typedef struct queue{
    DataType data;
    struct queue *next;
}QNode;

typedef struct QueueHead{
    QNode *head;
    QNode *tail;
    QNode *entrence;
}QueueHead;




QueueHead SQueueInit(QueueHead *qh,int qlen);    //����һ������Ϊqlen��ѭ����ʽ����
int IsEmpty(const QueueHead qh);   //����Ϊ���򷵻�1�����򷵻�0
int IsFull(const QueueHead qh);    //�������򷵻�1�����򷵻�0
int GetNodeCount(const QueueHead qh);    //��ȡѭ�������еĽ�����
int GetQueueLen(const QueueHead qh); //��ȡ���еĳ���
void EnQueue(QueueHead *qh, DataType data);  //������
DataType DeQueue(QueueHead *qh); //������
void PrinfQueue(const QueueHead qh); //��ӡ����������
