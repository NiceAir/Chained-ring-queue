#include "queue.h"

QueueHead  SQueueInit(QueueHead *qh,int qlen)    //����һ������Ϊqlen��ѭ����ʽ����
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
            printf("�ռ䲻�㣡����\n");
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

int IsEmpty(const QueueHead qh)   //����Ϊ���򷵻�1�����򷵻�0
{
    return (qh.head == qh.tail) ? 1 : 0;
}

int IsFull(const QueueHead qh)    //�������򷵻�1�����򷵻�0
{
    return (qh.tail->next == qh.head) ? 1 : 0;
}

int GetNodeCount(const QueueHead qh)    //��ȡѭ�������еĽ�������qlen������ڽ���1����
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

int GetQueueLen(const QueueHead qh) //��ȡ���еĳ���(�����е���Ч�����)
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

void EnQueue(QueueHead *qh, DataType data)  //������
{
    assert(qh);
    if (IsFull(*qh))
    {
        printf("������ʧ�ܣ���������\n");
        return;
    }
    qh->tail = qh->tail->next;
    qh->tail->data = data;
}

DataType DeQueue(QueueHead *qh) //������
{
    DataType data;
    assert(qh);
    if (IsEmpty(*qh))
    {
        printf("������ʧ�ܣ�����Ϊ��\n");
        return -999999999;
    }
    data = qh->head->next->data;
    qh->head = qh->head->next;
    return data;
}

void PrinfQueue(const QueueHead qh) //��ӡ����������
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