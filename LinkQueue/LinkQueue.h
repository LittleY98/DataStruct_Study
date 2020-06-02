//
// Created by YangX on 2020/6/2.
//

#ifndef DATASTRUCT_LINKQUEUE_H
#define DATASTRUCT_LINKQUEUE_H

#define OK 1
#define OVERFLOW -1
#define ERROR -1
#define NULL 0

typedef int QElemType;
typedef int Status;

typedef struct QNode{
    QElemType data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct {
    QueuePtr front;     //队头指针
    QueuePtr rear;      //队尾指针
}LinkQueue;


Status InitQueue (LinkQueue &Q);
Status EnQueue (LinkQueue &Q, QElemType e);
Status DeQueue(LinkQueue &Q, QElemType &e);
QElemType GetHead(LinkQueue Q);

#endif //DATASTRUCT_LINKQUEUE_H
