//
// Created by ergys on 10/31/2020.
//

#ifndef QUESTION3_STACK_H
#define QUESTION3_STACK_H


#include "node.h"

class stack { // header file

public:
    node *head, *tail;
    int size;
    stack();
    void push(int d);
    bool isEmpty();
    int top();
    void pop();



};


#endif //QUESTION3_STACK_H
