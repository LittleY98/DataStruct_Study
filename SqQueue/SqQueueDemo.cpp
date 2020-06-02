//
// Created by YangX on 2020/6/2.
//

#include "SqQueueDemo.h"
#include "SqQueue.h"
#include <stdio.h>


void SqQueueDemo(){
    printf("=======================SqQueue=======================\n\n");

    SqQueue Q;

    if (InitQueue(Q) == OK){
        printf("Init Success!\n");
    }

    for (int i = 0; i < 10; ++i) {
        if(EnQueue(Q,i) == OK)
            printf("Element: %d ,EnQueue Success!\n",i);
    }

    printf("The Queue'Length Is %d\n",QueueLength(Q));

    for (int j = 0; j < 5; ++j) {
        QElemType num;
        DeQueue(Q,num);
        printf("Element:%d,Dequeue Sucess!\n",num);
    }



}