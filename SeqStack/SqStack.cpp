//
// Created by YangX on 2020/6/1.
//

#include "SqStack.h"

/**
 * 顺序栈的初始化
 * @param S
 * @return
 */
Status InitStack(SqStack &S){
    S.base =new SElement[MAXSIZE];      //为顺序栈动态分配 一 个最大容扯为 MAXSIZE 的数组空间
    if (!S.base)
        return OVERFLOW;        //存储分配失败
    S.top = S.base;             //top 初始为 base, 空栈
    S.stacksize = MAXSIZE;      //stacksize 置为栈的最大容量 MAXSIZE
    return OK;
}

/**
 *  入栈
 * @param S     顺序栈
 * @param e     插入元素
 * @return
 */
Status Push(SqStack &S,SElement e){
    //先判断栈是否满， 若满则返回ERROR。
    if (S.top-S.base >= S.stacksize)
        return ERROR;

    //再将新元素压入栈顶， 栈顶指针加1。
    *S.top++ = e;

    return OK;
}

/**
 * 出栈
 * @param S 顺序栈
 * @param &e Pop出的元素
 * @return
 */
Status Pop(SqStack &S,SElement &e){
    //先判断栈是否空， 若空则返回ERROR。
    if (S.top == S.base)
        return ERROR;

    //栈顶指针减1, 栈顶元素出栈。
    e = *--S.top;
    return OK;
}

/**
 * 取顺序栈的栈顶元素
 * @param S 顺序栈
 * @return  栈顶元素
 */
SElement GetTop(SqStack &S){
    //若栈非空，直接返回栈顶元素
    if(S.top != S.base)
        return *(S.top-1);
}
























