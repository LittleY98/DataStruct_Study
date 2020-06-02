cmake_minimum_required(VERSION 3.15)
project(DataStruct)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStruct main.cpp LinkStack/LinkStack.cpp LinkStack/LinkStack.h SeqStack/SqStackDemo.h
        SeqStack/SqStack.cpp SeqStack/SqStack.h SeqStack/SqStackDemo.cpp LinkStack/LinkStackDemo.h
        LinkStack/LinkStackDemo.cpp SqQueue/SqQueue.cpp SqQueue/SqQueue.h SqQueue/SqQueueDemo.cpp SqQueue/SqQueueDemo.h LinkQueue/LinkQueue.cpp LinkQueue/LinkQueue.h)