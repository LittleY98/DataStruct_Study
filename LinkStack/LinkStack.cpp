//
// Created by YangX on 2020/6/1.
//

#include "LinkStack.h"

/**
 * 初始化
 * @param S
 * @return
 */
Status InitStack(LinkStack &S){
    //构造一个空栈 s, 栈顶指针置空
    S = NULL;
    return OK;
}

Status Push(LinkStack &S,Element e){
    //为入栈元素 e 分配空间， 用指针 p 指向。
    StackNode *p = new StackNode;
    //将新结点数据域置为e。
    p->data = e;
    //将新结点插入栈顶。
    p->next = S;
    //修改栈顶指针为 p
    S = p;
    return OK;
}













