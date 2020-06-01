//
// Created by YangX on 2020/6/1.
//

#ifndef DATASTRUCT_LINKSTACK_H
#define DATASTRUCT_LINKSTACK_H

#define MAXSIZE 100
#define OK 1
#define OVERFLOW -1
#define ERROR -1
#define NULL 0

typedef int Element;
typedef int Status;

typedef struct StackNode{
    Element data;
    struct StackNode *next;
}StackNode,*LinkStack;


Status InitStack(LinkStack &S);
Status Push(LinkStack &S,Element e);
Status Pop(LinkStack &S,Element &e);
Element GetTop(LinkStack &S);


#endif //DATASTRUCT_LINKSTACK_H
