#include "queue.h"

int main()
{
    QueueHead qh; 
    int result = 0;

    printf("----------------------初始化-----------------------\n");
    SQueueInit(&qh,3);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------初始化完毕-----------------------\n\n\n");

    printf("----------------------进队列-----------------------\n");
    EnQueue(&qh, 1);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 2);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 3);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    EnQueue(&qh, 4);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------进队列完毕-----------------------\n\n\n");

    printf("----------------------出队列-----------------------\n");
    result = DeQueue(&qh);
    printf("出队列元素为%d\n", result);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    
    result = DeQueue(&qh);
    printf("出队列元素为%d\n", result);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    result = DeQueue(&qh);
    printf("出队列元素为%d\n", result);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    
    result = DeQueue(&qh);
    printf("出队列元素为%d\n", result);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);

    result = DeQueue(&qh);
    printf("出队列元素为%d\n", result);
    printf("结点个数为%d\n", GetNodeCount(qh));
    printf("队列长度为%d\n", GetQueueLen(qh));
    PrinfQueue(qh);
    printf("----------------------出队列完毕-----------------------\n\n\n");


    



    return 0;

}