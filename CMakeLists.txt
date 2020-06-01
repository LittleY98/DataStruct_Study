cmake_minimum_required(VERSION 3.15)
project(DataStruct C)

set(CMAKE_C_STANDARD 99)

add_executable(DataStruct main.c SeqStack/SqStack.h SeqStack/SqStack.cpp LinkStack/LinkStack.h LinkStack/LinkStack.cpp)