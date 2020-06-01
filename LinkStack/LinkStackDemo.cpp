//
// Created by YangX on 2020/6/1.
//

#include <stdio.h>
#include "LinkStack.h"
#include "LinkStackDemo.h"

void LinkStackDemo(){
    LinkStack linkStack;

    printf("=======================LinkStackDemo=======================\n\n");

    if (InitStack(linkStack) == OK)
        printf("Initialize Success!\n");
    else
        return;

    for (int i = 0; i < 10; ++i) {
        if (Push(linkStack,i) == OK)
            printf("Element  %d Push Success!\n");
        else
            return;
    }

    int top = GetTop(linkStack);
    printf("The Stack top is %d \n",top);

    for (int i = 0; i < 10; ++i) {
        Element num;
        if (Pop(linkStack,num) == OK)
            printf("Element %d Pop Sussess!\n",num);
        else
            return;
    }

}

