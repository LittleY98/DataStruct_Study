//
// Created by YangX on 2020/6/2.
//

#ifndef DATASTRUCT_SQQUEUE_H
#define DATASTRUCT_SQQUEUE_H

#define MAXSIZE 100
#define OK 1
#define OVERFLOW -1
#define ERROR -1
#define NULL 0

typedef int QElemType;
typedef int Status;

typedef struct {
    QElemType *base;        //存储空间的基地址
    int front;              //头指针
    int rear;               //尾指针
}SqQueue;

Status InitQueue(SqQueue &Q);
int QueueLength(SqQueue Q);
Status EnQueue (SqQueue &Q, QElemType e);
Status DeQueue (SqQueue &Q, QElemType &e);


#endif //DATASTRUCT_SQQUEUE_H
