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




QueueHead SQueueInit(QueueHead *qh,int qlen);    //创建一个长度为qlen的循环链式队列
int IsEmpty(const QueueHead qh);   //队列为空则返回1；否则返回0
int IsFull(const QueueHead qh);    //队列满则返回1；否则返回0
int GetNodeCount(const QueueHead qh);    //获取循环队列中的结点个数
int GetQueueLen(const QueueHead qh); //获取队列的长度
void EnQueue(QueueHead *qh, DataType data);  //进队列
DataType DeQueue(QueueHead *qh); //出队列
void PrinfQueue(const QueueHead qh); //打印出整个队列
