//
// Created by YangX on 2020/6/2.
//

#include <stdio.h>
#include "LinkQueueDemo.h"
#include "LinkQueue.h"


void LinkQueueDemo(){
    printf("=======================LinkQueue=======================\n\n");

    LinkQueue Q;

    if (InitQueue(Q) == OK){
        printf("Init Success!\n");
    }

    for (int i = 0; i < 10; ++i) {
        if(EnQueue(Q,i) == OK)
            printf("Element: %d ,EnQueue Success!\n",i);
    }

    printf("The front Element is : %d\n",GetHead(Q));

    for (int j = 0; j < 5; ++j) {
        QElemType num;
        DeQueue(Q,num);
        printf("Element:%d,Dequeue Sucess!\n",num);
    }

    printf("The front Element is : %d\n",GetHead(Q));

}