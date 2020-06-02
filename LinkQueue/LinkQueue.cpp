//
// Created by YangX on 2020/6/2.
//

#include "LinkQueue.h"

/**
 * 链队的初始化
 * @param Q
 * @return
 */
Status InitQueue (LinkQueue &Q){
    //生成新结点作为头结点， 队头和队尾指针指向此结点。
    Q.front=Q.rear = new QNode;
    //头结点的指针域置空。
    Q.front->next=NULL;
    return OK;
}

/**
 * 链队的入队
 * @param Q
 * @param e 要入队的元素
 * @return
 */
Status EnQueue (LinkQueue &Q, QElemType e){
    //为人队元素分配结点空间，用指针p指向
    QNode *p = new QNode;

    //将新结点数据域置为e
    p->data = e;

    //将新结点插入到队尾
    p->next = NULL;
    Q. rear->next=p;

    //修改队尾指针为p
    Q.rear = p;
    return OK;
}

/**
 * 链队的出队
 * @param Q
 * @param e
 * @return
 */
Status DeQueue(LinkQueue &Q, QElemType &e) {
    //判断队列是否为空，若空则返回ERROR
    if (Q.front == Q.rear)
        return ERROR;

    //临时保存队头元素的空间，以备释放
    QNode *p = Q.front->next;
    e = p->data;

    //修改队头指针，指向下一个结点
    Q.front->next = p->next;

    //判断出队元素是否为最后一个元素，若是，则将队尾指针重新赋值，指向头结点
    if (Q.rear == p)
        Q.rear = Q.front;
    //释放原队头元素的空间
    delete p;
    return OK;
}

/**
 * 取队头元素
 * @param Q
 * @return
 */
QElemType GetHead(LinkQueue Q){
    if(Q.front!=Q.rear)
        return Q.front->next->data;
}















