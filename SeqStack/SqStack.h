//
// Created by YangX on 2020/6/1.
//

#ifndef DATASTRUCT_SQSTACK_H
#define DATASTRUCT_SQSTACK_H

#define MAXSIZE 100
#define OK 1
#define OVERFLOW -1
#define ERROR -1
#define NULL 0

typedef int SElement;
typedef int Status;

typedef struct {
    SElement *base;     //栈底指针
    SElement *top;      //栈顶指针
    int stacksize;      //栈可用最大容量
}SqStack;

Status InitStack(SqStack &S);
Status Push(SqStack &S,SElement e);
Status Pop(SqStack &S,SElement &e);
SElement GetTop(SqStack &S);

#endif //DATASTRUCT_SQSTACK_H
