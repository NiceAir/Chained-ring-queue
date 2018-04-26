#include "queue.h"

QueueHead  SQueueInit(QueueHead *qh,int qlen)    //创建一个长度为qlen的循环链式队列
{
    QNode * create = NULL;
    QNode * cache = NULL;
    assert(qh);
    qh->head = NULL;
    qh->entrence = NULL;
    qh->tail = NULL;

    while(qlen--)
    {
        create = (QNode *)malloc(sizeof(QNode));
        if (create == NULL)
        {
            if (qh->entrence != NULL)
            {
                free(qh->entrence);
            }
            printf("空间不足！！！\n");
            assert(create);
            exit(1);
        }
        if (qh->entrence == NULL)
        {
            qh->entrence = create;
            qh->head = qh->entrence;  
            qh->tail = qh->entrence;
            qh->head->data = 999999999;
            cache = qh->entrence;
            qlen++;
        }
        else
        {
            cache->next = create;
            cache = cache->next;
            cache->data = 0;
        }    
    }
    cache->next = qh->entrence;
    return *qh;
}

int IsEmpty(const QueueHead qh)   //队列为空则返回1；否则返回0
{
    return (qh.head == qh.tail) ? 1 : 0;
}

int IsFull(const QueueHead qh)    //队列满则返回1；否则返回0
{
    return (qh.tail->next == qh.head) ? 1 : 0;
}

int GetNodeCount(const QueueHead qh)    //获取循环队列中的结点个数（qlen加上入口结点的1个）
{
    QNode * start = qh.entrence->next;
    int count = 1;
    while(start != qh.entrence)
    {
        start = start->next;
        count++;
    }
    return count;
}

int GetQueueLen(const QueueHead qh) //获取队列的长度(队列中的有效结点数)
{
    QNode * start = qh.head;
    int count = 0;
    while(start != qh.tail)
    {
        start = start->next;
        count++;
    }
    return count;
}

void EnQueue(QueueHead *qh, DataType data)  //进队列
{
    assert(qh);
    if (IsFull(*qh))
    {
        printf("进队列失败，队列已满\n");
        return;
    }
    qh->tail = qh->tail->next;
    qh->tail->data = data;
}

DataType DeQueue(QueueHead *qh) //出队列
{
    DataType data;
    assert(qh);
    if (IsEmpty(*qh))
    {
        printf("出队列失败，队列为空\n");
        return -999999999;
    }
    data = qh->head->next->data;
    qh->head = qh->head->next;
    return data;
}

void PrinfQueue(const QueueHead qh) //打印出整个队列
{
    QNode *now = qh.entrence->next;
    printf("%d", qh.entrence->data);
    while(now != qh.entrence)
    {
        printf("->%d", now->data);
        now = now->next;
    }
    printf("\nhead=%d     tail=%d\n\n", qh.head->data, qh.tail->data);
}