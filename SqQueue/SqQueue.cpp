//
// Created by YangX on 2020/6/2.
//

#include "SqQueue.h"

/**
 * 循环队列的初始化
 * @param Q
 * @return
 */
Status InitQueue(SqQueue &Q){
    //为队列分配一个最大容量为 MAXSIZE 的数组空间，base指向数组空间的首地址。
    Q.base = new QElemType[MAXSIZE];
    if (!Q.base)
        return OVERFLOW;
    //头指针和尾指针置为零， 表示队列为空。
    Q.front = Q.rear = 0;
    return OK;
}

/**
 * 求队列长度
 * @param Q
 * @return
 */
int QueueLength(SqQueue Q){
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

/**
 * 循环队列的入队
 * @param Q
 * @param e 插入的元素
 * @return
 */
Status EnQueue (SqQueue &Q, QElemType e){
    //判断队列是否满，若满则返回ERROR
    if ((Q. rear+1) %MAXSIZE == Q. front)       //尾指针在循环意义上加1后等于头指针，表明队满
        return ERROR;
    //将新元素插入队尾
    Q.base[Q.rear] = e;
    //队尾指针加l
    Q.rear=(Q.rear+1)%MAXSIZE;
    return OK;
}

/**
 * 循环队列的出队
 * @param Q
 * @param &e 出队元素的保存地址
 * @return
 */
Status DeQueue (SqQueue &Q, QElemType &e){
    //判断队列是否为空，若空则返回ERROR。
    if(Q.front == Q. rear)
        return ERROR;
    //保存队头元素。
    e = Q.base[Q.front];
    //队头指针加1。
    Q.front = (Q.front+1)%MAXSIZE;
    return OK;
}

QElemType GetHead(SqQueue Q){
    if(Q.front != Q.rear)
        return Q.base[Q.front];
}








