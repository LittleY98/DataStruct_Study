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

/**
 * 链栈的入栈
 * @param &S 链栈的栈顶指针
 * @param e  要入栈的元素
 * @return
 */
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


/**
 * 链栈的出栈
 * @param S 链栈
 * @param e 删除的元素
 * @return
 */
Status Pop(LinkStack &S,Element &e){
    //判断栈是否为空 ， 若空则返回ERROR。
    if (S == NULL)
        return ERROR;
    //将栈顶元素赋给e。
    e = S->data;
    //临时保存栈顶元素的空间， 以备释放。
    StackNode *p = S;
    //修改栈顶指针， 指向新的栈顶元素。
    S = S->next;
    //释放原栈顶元素的空间。
    delete p;
    return OK;
}

/**
 * 取栈顶元素
 * @param S 链栈
 * @return 栈顶元素的数据
 */
Element GetTop(LinkStack &S){
    if (S != NULL)
        return S->data;
}











