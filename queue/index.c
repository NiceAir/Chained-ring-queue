#include "queue.h"

int main()
{
    QueueHead qh; 
    int result = 0;

    printf("----------------------��ʼ��-----------------------\n");
    SQueueInit(&qh,3);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------��ʼ�����-----------------------\n\n\n");

    printf("----------------------������-----------------------\n");
    EnQueue(&qh, 1);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 2);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 3);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 4);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------���������-----------------------\n\n\n");

    printf("----------------------������-----------------------\n");
    result = DeQueue(&qh);
    printf("������Ԫ��Ϊ%d\n", result);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    
    result = DeQueue(&qh);
    printf("������Ԫ��Ϊ%d\n", result);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    result = DeQueue(&qh);
    printf("������Ԫ��Ϊ%d\n", result);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    
    result = DeQueue(&qh);
    printf("������Ԫ��Ϊ%d\n", result);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    result = DeQueue(&qh);
    printf("������Ԫ��Ϊ%d\n", result);
    printf("������Ϊ%d\n", GetNodeCount(qh));
    printf("���г���Ϊ%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------���������-----------------------\n\n\n");


    



    return 0;

}