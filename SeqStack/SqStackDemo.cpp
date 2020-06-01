//
// Created by YangX on 2020/6/1.
//

#include <iostream>
#include "SqStack.h"

using namespace std;

void SqStackDemo(){

    SqStack sqStack;

    if (InitStack(sqStack) == OK)
        printf("Initialize Success！\n");
    else
        return;

    for (int i = 0; i < 10; ++i) {
        if (Push(sqStack,i) == OK)
            printf("Element  %d Push Success!\n");
        else
            return;
    }

    int top = GetTop(sqStack);
    printf("The Stack top is %d \n",top);

    for (int i = 0; i < 10; ++i) {
        SElement num;
        if (Pop(sqStack,num) == OK)
            printf("Element %d Pop Sussess!\n",num);
        else
            return;
    }

}